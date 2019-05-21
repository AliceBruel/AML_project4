data = mRFX;
joint = 'Ankle'; %'Hip', 'Knee' or 'Ankle'
muscles = {'GAS', 'TA', 'SOL'}; %{'HF', 'GLU'} for Hip, {'HAM', 'VAS'} for Knee, {'GAS', 'TA', 'SOL'} for Ankle -> create a dictionnary
side = 'R'; %'R' or 'L'

% gait cycles
stance = data.(horzcat(side,'Stance'));
patternsIndex = find(ismember(stance+[0; stance(1:(length(stance)-1),:)],1));
if stance(1) == 0
    FS = patternsIndex(1:2:end);
    FO = patternsIndex(2:2:end);
else 
    FS = patternsIndex(1:2:end);
    FS = FS(2:length(FS));
    FO = patternsIndex(2:2:end);
end
nCycles = length(FS)-1;
TCycles = FS(2:length(FS))-FS(1:nCycles);
maxCycle = max(TCycles);

% muscles activity, joint angle and joint torque 
muscle1 = data.(horzcat(side,'Muscle',muscles{1}));
muscle2 = data.(horzcat(side,'Muscle',muscles{2}));
if strcmp(joint, 'Ankle')
    muscle3 = data.(horzcat(side,'Muscle',muscles{3}));
end 
angle = data.(horzcat(side,joint,'Angle'));
torque = data.(horzcat(side,joint,'Torque'));
muscle1Stride = zeros(nCycles, maxCycle);
muscle2Stride = zeros(nCycles, maxCycle);
muscle3Stride = zeros(nCycles, maxCycle);
angleStride = zeros(nCycles, maxCycle);
torqueStride = zeros(nCycles, maxCycle);
% interpolation
xq = 0:100/(maxCycle-1):100;
for cycle=1:(nCycles)
    TCycle = TCycles(cycle);
    x = 0:100/(TCycle-1):100;
    muscle1Stride(cycle,:) = interp1(x,(muscle1(FS(cycle):(FS(cycle+1)-1))),xq);
    muscle2Stride(cycle,:) = interp1(x,(muscle2(FS(cycle):(FS(cycle+1)-1))),xq);
    if strcmp(joint,'Ankle')
        muscle3Stride(cycle,:) = interp1(x,(muscle3(FS(cycle):(FS(cycle+1)-1))),xq);
    end 
    angleStride(cycle,:) = interp1(x,(angle(FS(cycle):(FS(cycle+1)-1))),xq);
    torqueStride(cycle,:) = interp1(x,(torque(FS(cycle):(FS(cycle+1)-1))),xq);
end 

if strcmp(joint, 'Ankle')
    
figure()
subplot(2,3,1);
plot(xq, mean(muscle1Stride))
xlabel('Gait Cycle [% of stride]')
ylabel('Muscle activity')
title(horzcat(joint, ' ', muscles{1}))

subplot(2,3,2);
plot(xq, mean(muscle2Stride))
xlabel('Gait Cycle [% of stride]')
ylabel('Muscle activity')
title(horzcat(joint, ' ', muscles{2}))

subplot(2,3,3);
plot(xq, mean(muscle3Stride))
xlabel('Gait Cycle [% of stride]')
ylabel('Muscle activity')
title(horzcat(joint, ' ', muscles{3}))

subplot(2,3,4);
plot(xq, mean(angleStride))
xlabel('Gait Cycle [% of stride]')
ylabel('Angle [rad]')
title(horzcat(joint, ' angle'))

subplot(2,3,5);
plot(xq, mean(torqueStride))
xlabel('Gait Cycle [% of stride]')
ylabel('Torque [Nm]')
title(horzcat(joint, ' torque'))

else 
    
figure()
subplot(2,2,1);
plot(xq, mean(muscle1Stride))
xlabel('Gait Cycle [% of stride]')
ylabel('Muscle activity')
title(horzcat(joint, ' ', muscles{1}))

subplot(2,2,2);
plot(xq, mean(muscle2Stride))
xlabel('Gait Cycle [% of stride]')
ylabel('Muscle activity')
title(horzcat(joint, ' ', muscles{2}))

subplot(2,2,3);
plot(xq, mean(angleStride))
xlabel('Gait Cycle [% of stride]')
ylabel('Angle [rad]')
title(horzcat(joint, ' angle'))

subplot(2,2,4);
plot(xq, mean(torqueStride))
xlabel('Gait Cycle [% of stride]')
ylabel('Torque [Nm]')
title(horzcat(joint, ' torque'))

end 