data = mRFX;

% gait cycles
RStance = data.RStance;
RpatternsIndex = find(ismember(RStance+[0; RStance(1:(length(RStance)-1),:)],1));
if Rfootfalls(1) == 0
    RFS = RpatternsIndex(1:2:end);
    RFO = RpatternsIndex(2:2:end);
else 
    RFS = RpatternsIndex(1:2:end);
    RFS = RFS(2:length(RFS));
    RFO = RpatternsIndex(2:2:end);
end 
RNCycles = length(RFS)-1;
RTCycles = RFS(2:length(RFS))-RFS(1:RNCycles);
RMaxCycle = max(RTCycles);

% rigth hip
hipAngle = data.RHipAngle;
hipAngleStride = zeros(RNCycles, RMaxCycle);
size(hipAngleStride)
for cycle=1:(RNCycles)
    TCycle = RTCycles(cycle);
    x = 0:100/(TCycle-1):100;
    v = hipAngle(RFS(cycle):(RFS(cycle+1)-1));
    xq = 0:100/(RMaxCycle-1):100;
    hipAngleStride(cycle,:) = interp1(x,v,xq);
end 

figure()
plot(xq, mean(hipAngleStride))