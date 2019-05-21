% data loading
data1 = load(horzcat('data1.mat'));
data1 = data1.data1;
data2 = load(horzcat('data2.mat'));
data2 = data2.data2;

% ground reaction forces plots
figure()
plot(data1.grf.data)
xlabel('time[s]')
ylabel('force[N]')
title('Ground reaction forces of data1')

figure()
plot(data2.grf.data)
xlabel('time[s]')
ylabel('force[N]')
title('Ground reaction forces of data2')