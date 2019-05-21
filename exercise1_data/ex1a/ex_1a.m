% data of interest
no = 1;
data = load(horzcat('data',int2str(no),'.mat'));
data = data.(horzcat(   'data',int2str(no)));

% FS FO patterns computation
Rfootfalls = data.footfall.data(:,1);
RpatternsIndex = find(ismember(Rfootfalls+[0; Rfootfalls(1:(length(Rfootfalls)-1),:)],1));
if Rfootfalls(1) == 0
    RFS = RpatternsIndex(1:2:end);
    RFO = RpatternsIndex(2:2:end);
else 
    RFS = RpatternsIndex(1:2:end);
    RFS = RFS(2:length(RFS));
    RFO = RpatternsIndex(2:2:end);
end 
Lfootfalls = data.footfall.data(:,2);
LpatternsIndex = find(ismember(Lfootfalls+[0; Lfootfalls(1:(length(Lfootfalls)-1),:)],1));
if Lfootfalls(1) == 0
    LFS = LpatternsIndex(1:2:end);
    LFO = LpatternsIndex(2:2:end);
else 
    LFS = LpatternsIndex(1:2:end);
    LFS = LFS(2:length(RFS));
    LFO = LpatternsIndex(2:2:end);
end

% stride frequency and stance phase / stride duration proportion
if RFS(1) < RFO(1)
    n = length(RFO);
    RstanceT = RFO(1:n) - RFS(1:n);
    if RFS(1) <= min(LFS(1), LFO(1))
        strideT = RFS(2:length(RFS))-RFS(1:(length(RFS)-1));
        p = min([length(RFO), length(LFS), length(LFO)]);
        doubleStanceT = (RFO(1:p) - LFS(1:p)) + (LFO(1:p) - RFS(1:p));
    end 
else
    n = min(length(RFO),length(RFS)+1);
    RstanceT = RFO(2:n) - RFS(1:(n-1));
    if RFO(1) <= min(LFS(1), LFO(1))
        strideT = RFO(2:n)-RFO(1:(n-1));
        p = min([length(RFS), length(LFS), length(LFO)]);
        doubleStanceT = (RFO(2:p) - LFS(1:(p-1))) + (LFO(1:(p-1)) - RFS(1:(p-1)));
    end 
end
if LFS(1) < LFO(1)
    n = length(LFO);
    LstanceT = LFO(1:n) - LFS(1:n);
    if LFS(1) <= min(RFS(1), RFO(1))
        strideT = LFS(2:length(LFS))-LFS(1:(length(LFS)-1));
        p = min([length(LFO), length(RFS), length(RFO)]);
        doubleStanceT = (RFO(1:p) - LFS(1:p)) + (LFO(1:p) - RFS(1:p));
    end 
else
    n = min(length(LFO),length(LFS)+1);
    LstanceT = LFO(2:n) - LFS(1:(n-1));
    if LFO(1) <= min(RFS(1), RFO(1))
        strideT = LFO(2:n)-LFO(1:(n-1));
        p = min([length(LFS), length(RFS), length(RFO)]);
        doubleStanceT = (LFO(2:p) - RFS(1:(p-1))) + (RFO(1:(p-1)) - LFS(1:(p-1)));
    end 
end

display('The average stride frequency is:')
mean_freq = mean(1./strideT*100)
std_freq = std(1./strideT*100)
nCycles = length(strideT);
display('The average stride/stance duration proportion is:')
stride_stance = (mean(strideT./RstanceT(1:nCycles))+mean(strideT./LstanceT(1:nCycles)))/2

% stance / swing phases duration proportion
n = length(RFS);
if RFS(1) < RFO(1)
    RswingT = RFS(2:n) - RFO(1:(n-1));
else
    RswingT = RFS(1:n) - RFO(1:n);
end
n = length(LFS);
if LFS(1) < LFO(1)
    LswingT = LFS(2:n) - LFO(1:(n-1));
else
    LswingT = LFS(1:n) - LFO(1:n);
end 
n = min(length(RstanceT), length(RswingT));
p = min(length(LstanceT), length(LswingT));
display('The average stance/swing duration proportion is:')
stance_swing = (mean(RstanceT(1:n)./RswingT(1:n))+mean(LstanceT(1:p)./LswingT(1:p)))/2

% swing / double stance duration proportion
n = min([length(RswingT), length(LswingT), length(doubleStanceT)]);
display('The average swing/double stance duration proportion is:')
swing_doubleStance = (mean(LswingT(1:n)./doubleStanceT(1:n))+mean(RswingT(1:n)./doubleStanceT(1:n)))/2

% walking speed
a = 0.85;
b = 0.5;
display('The average walking speed is:')
speed = exp(1/b*log(mean_freq/a))