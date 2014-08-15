%%  Read values of Robust MPC actions
time_vec = simout_data.time - simout_data.time(1);
pitch = simout_data.signals.values(:,3);
pitch_ref = simout_data.signals.values(:,5);
roll_ref = simout_data.signals.values(:,10);
roll = simout_data.signals.values(:,8);
x = simout_data.signals.values(:,1);
y = RecordYZ.signals(1).values(:,1);
z = RecordYZ.signals(2).values(:,1);
x_ref = traj_FG.X_ref_x(1,:);
y_ref = traj_FG.X_ref_y(1,:);
z_ref = traj_FG.X_ref_z(1,:);
% y_ref_real = traj_FG.X_ref_y_real(1,:);
% z_ref_real = traj_FG.X_ref_z_real(1,:);
%%

plot3(y,x,z); hold on;
plot3(y_ref,x_ref+1.92,z_ref+1,'r')
%%
PLOT_DATASET.time = time_vec;
PLOT_DATASET.position.x.resp = x;
PLOT_DATASET.position.y.resp = y;
PLOT_DATASET.position.z.resp = z;
PLOT_DATASET.attitude.roll.ref = roll_ref;
PLOT_DATASET.attitude.roll.resp = roll;
PLOT_DATASET.attitude.pitch.ref = pitch_ref;
PLOT_DATASET.attitude.pitch.resp = pitch;
% PLOT_DATASET.attitude.yaw.ref = pitch_ref;
%PLOT_DATASET.attitude.yaw.resp = pitch;

%%
close all
plot(PLOT_DATASET.position.x.resp)
PLOT_DATASET.position.x.ref = [];
PLOT_DATASET.position.x.ref(1:327) = 1.2;
PLOT_DATASET.position.x.ref((end+1):1038) = 2.45;
PLOT_DATASET.position.x.ref((end+1):1821) = 1.2;
PLOT_DATASET.position.x.ref((end+1):2550) = 2.45;
PLOT_DATASET.position.x.ref((end+1):3259) = 1.2;
PLOT_DATASET.position.x.ref((end+1):4016) = 2.45;
PLOT_DATASET.position.x.ref((end+1):4716) = 1.2;
PLOT_DATASET.position.x.ref((end+1):5432) = 2.45;
PLOT_DATASET.position.x.ref((end+1):6085) = 1.2;
PLOT_DATASET.position.x.ref((end+1):6913) = 2.45;
PLOT_DATASET.position.x.ref((end+1):7631) = 1.2;
PLOT_DATASET.position.x.ref((end+1):8343) = 2.45;
PLOT_DATASET.position.x.ref((end+1):9098) = 1.2;
PLOT_DATASET.position.x.ref((end+1):9823) = 2.45;
PLOT_DATASET.position.x.ref((end+1):10510) = 1.2;
PLOT_DATASET.position.x.ref((end+1):11250) = 2.45;
PLOT_DATASET.position.x.ref((end+1):11980) = 1.2;
PLOT_DATASET.position.x.ref((end+1):12710) = 2.45;
PLOT_DATASET.position.x.ref((end+1):13410) = 1.2;
PLOT_DATASET.position.x.ref((end+1):14140) = 2.45;
PLOT_DATASET.position.x.ref((end+1):14860) = 1.2;
PLOT_DATASET.position.x.ref((end+1):15630) = 2.45;
PLOT_DATASET.position.x.ref((end+1):16320) = 1.2;
PLOT_DATASET.position.x.ref((end+1):17060) = 2.45;
PLOT_DATASET.position.x.ref((end+1):17769) = 1.2;
PLOT_DATASET.position.x.ref((end+1):18510) = 2.45;
PLOT_DATASET.position.x.ref((end+1):19240) = 1.2;
PLOT_DATASET.position.x.ref((end+1):19920) = 2.45;
PLOT_DATASET.position.x.ref((end+1):20710) = 1.2;
PLOT_DATASET.position.x.ref((end+1):21410) = 2.45;
PLOT_DATASET.position.x.ref((end+1):22140) = 1.2;





hold on
plot(PLOT_DATASET.position.x.ref,'r')
%%
close all
plot(PLOT_DATASET.position.y.resp)
PLOT_DATASET.position.y.ref = [];
PLOT_DATASET.position.y.ref(1:327) = 0;
PLOT_DATASET.position.y.ref((end+1):1038) = 1.55;
PLOT_DATASET.position.y.ref((end+1):1357) = 0.3;
PLOT_DATASET.position.y.ref((end+1):2122) = 1.55;
PLOT_DATASET.position.y.ref((end+1):2921) = 0.3;
PLOT_DATASET.position.y.ref((end+1):3621) = 1.55;
PLOT_DATASET.position.y.ref((end+1):4361) = 0.3;
PLOT_DATASET.position.y.ref((end+1):5095) = 1.55;
PLOT_DATASET.position.y.ref((end+1):5834) = 0.3;
PLOT_DATASET.position.y.ref((end+1):6536) = 1.55;
PLOT_DATASET.position.y.ref((end+1):7286) = 0.3;
PLOT_DATASET.position.y.ref((end+1):7999) = 1.55;
PLOT_DATASET.position.y.ref((end+1):8731) = 0.3;
PLOT_DATASET.position.y.ref((end+1):9436) = 1.55;
PLOT_DATASET.position.y.ref((end+1):10180) = 0.3;
PLOT_DATASET.position.y.ref((end+1):10900) = 1.55;
PLOT_DATASET.position.y.ref((end+1):11620) = 0.3;
PLOT_DATASET.position.y.ref((end+1):12280) = 1.55;
PLOT_DATASET.position.y.ref((end+1):13090) = 0.3;
PLOT_DATASET.position.y.ref((end+1):13780) = 1.55;
PLOT_DATASET.position.y.ref((end+1):14540) = 0.3;
PLOT_DATASET.position.y.ref((end+1):15250) = 1.55;
PLOT_DATASET.position.y.ref((end+1):15990) = 0.3;
PLOT_DATASET.position.y.ref((end+1):16680) = 1.55;
PLOT_DATASET.position.y.ref((end+1):17440) = 0.3;
PLOT_DATASET.position.y.ref((end+1):18150) = 1.55;
PLOT_DATASET.position.y.ref((end+1):18890) = 0.3;
PLOT_DATASET.position.y.ref((end+1):19610) = 1.55;
PLOT_DATASET.position.y.ref((end+1):20340) = 0.3;
PLOT_DATASET.position.y.ref((end+1):21080) = 1.55;
PLOT_DATASET.position.y.ref((end+1):21800) = 0.3;
PLOT_DATASET.position.y.ref((end+1):22450) = 1.55;
hold on
plot(PLOT_DATASET.position.y.ref,'r')

%%
plot(PLOT_DATASET.attitude.roll.resp)
start_i = 6545;
end_i = 21720; % 
val_mean_x = mean(PLOT_DATASET.position.x.resp(start_i:end_i));
val_mean_y = mean(PLOT_DATASET.position.y.resp(start_i:end_i));
PLOT_DATASET.position.x.resp = PLOT_DATASET.position.x.resp(start_i:end_i) - mean(PLOT_DATASET.position.x.resp(start_i:end_i));
PLOT_DATASET.position.y.resp = PLOT_DATASET.position.y.resp(start_i:end_i) - mean(PLOT_DATASET.position.y.resp(start_i:end_i));
PLOT_DATASET.position.y.ref = PLOT_DATASET.position.y.ref(start_i:end_i) - val_mean_y;
PLOT_DATASET.position.x.ref = PLOT_DATASET.position.x.ref(start_i:end_i) - val_mean_x;
PLOT_DATASET.position.z.resp = PLOT_DATASET.position.z.resp(start_i:end_i);
PLOT_DATASET.position.z.ref = 0*PLOT_DATASET.position.z.resp  + mean(PLOT_DATASET.position.z.resp);
PLOT_DATASET.position.z.ref = PLOT_DATASET.position.z.ref + 1.65;
PLOT_DATASET.position.z.resp = PLOT_DATASET.position.z.resp + 1.65;
%%
PLOT_DATASET.attitude.roll.ref = PLOT_DATASET.attitude.roll.ref(start_i:end_i) - mean(PLOT_DATASET.attitude.roll.ref(start_i:end_i));
PLOT_DATASET.attitude.pitch.ref = PLOT_DATASET.attitude.pitch.ref(start_i:end_i) - mean(PLOT_DATASET.attitude.pitch.ref(start_i:end_i));
%PLOT_DATASET.attitude.yaw.ref = PLOT_DATASET.attitude.yaw.ref - mean(PLOT_DATASET.attitude.yaw.ref);
PLOT_DATASET.attitude.roll.resp = PLOT_DATASET.attitude.roll.resp(start_i:end_i) - mean(PLOT_DATASET.attitude.roll.resp(start_i:end_i));
PLOT_DATASET.attitude.pitch.resp = PLOT_DATASET.attitude.pitch.resp(start_i:end_i) - mean(PLOT_DATASET.attitude.pitch.resp(start_i:end_i));
PLOT_DATASET.time = PLOT_DATASET.time(start_i:end_i) - PLOT_DATASET.time(start_i);
%%
PLOT_DATASET_RECT = PLOT_DATASET;

%%

close all;
plot3(PLOT_DATASET_RECT.position.y.ref,PLOT_DATASET_RECT.position.x.ref,PLOT_DATASET_RECT.position.z.ref,'b','LineWidth',2); hold on;
plot3(PLOT_DATASET_RECT.position.y.resp,PLOT_DATASET_RECT.position.x.resp,PLOT_DATASET_RECT.position.z.resp,'r','LineWidth',2); grid on;
plot3(PLOT_DATASET_RECT.position.y.ref,PLOT_DATASET_RECT.position.x.ref,PLOT_DATASET_RECT.position.z.ref,'b','LineWidth',2); hold on;

xlabel('y (m)','Interpreter','LaTex','FontSize',18);
ylabel('x (m)','Interpreter','LaTex','FontSize',18);
zlabel('z (m)','Interpreter','LaTex','FontSize',18);
%%
x_0 = 0;
y_0 = -1;
z_0 = 1.5;
x_0 = 0;
y_0 = 1.15;
z_0 = -0.55;
Radius = 0.3;
Height = 0.2;
SideCount = 50;

% Vertices
n_side = SideCount;

for i_ver=1:n_side
    VertexData(i_ver,:) = [Radius*cos(2*pi/n_side*i_ver),Radius*sin(2*pi/n_side*i_ver),0];
    VertexData(n_side+i_ver,:) = [Radius*cos(2*pi/n_side*i_ver),Radius*sin(2*pi/n_side*i_ver),Height];
end

% Side Patches
for i_pat=1:n_side-1
    Index_Patch1(i_pat,:) = [i_pat,i_pat+1,i_pat+1+n_side,i_pat+n_side];
end
Index_Patch1(n_side,:) = [n_side,1,1+n_side,2*n_side];

for i_pat=1:n_side
    
    % Side patches data
    PatchData1_X(:,i_pat) = VertexData(Index_Patch1(i_pat,:),1);
    PatchData1_Y(:,i_pat) = VertexData(Index_Patch1(i_pat,:),2);
    PatchData1_Z(:,i_pat) = VertexData(Index_Patch1(i_pat,:),3);
end

PatchData1_X = PatchData1_X + x_0;
PatchData1_Y = PatchData1_Y + y_0;
PatchData1_Z = PatchData1_Z + z_0;

% Draw side patches
figure(1);
h1 = patch(PatchData1_X,PatchData1_Y,PatchData1_Z,'y');
set(h1,'FaceLighting','phong','EdgeLighting','phong');
set(h1,'EraseMode','normal');

% Bottom Patches
Index_Patch2(1,:) = [1:n_side];
Index_Patch2(2,:) = [n_side+1:2*n_side];

for i_pat=1:2
    
    % Bottom patches data
    PatchData2_X(:,i_pat) = VertexData(Index_Patch2(i_pat,:),1);
    PatchData2_Y(:,i_pat) = VertexData(Index_Patch2(i_pat,:),2);
    PatchData2_Z(:,i_pat) = VertexData(Index_Patch2(i_pat,:),3);
end

PatchData2_X = PatchData2_X + x_0;
PatchData2_Y = PatchData2_Y + y_0;
PatchData2_Z = PatchData2_Z + z_0;

% Draw bottom patches
figure(1);
h2 = patch(PatchData2_X,PatchData2_Y,PatchData2_Z,'y');
set(h2,'FaceLighting','phong','EdgeLighting','phong');
set(h2,'EraseMode','normal');

% Axes settings
axis vis3d equal;
view([-37.5,30]);
camlight;
grid on;
%
rotate(h1,[1 0 0],90)
rotate(h2,[1 0 0],90)
zlim([0.5  1.5])
material metal
box on;

%%
points_circle = [89 144 223 387];
ha(1) = subplot(4,1,1);
plot(PLOT_DATASET.time,PLOT_DATASET.position.x.ref,'b--','LineWidth',1); hold on; 
plot(PLOT_DATASET.time,PLOT_DATASET.position.x.resp,'k','LineWidth',1); 
plot(PLOT_DATASET.time,PLOT_DATASET.position.y.resp,'r','LineWidth',1); grid on;
plot(PLOT_DATASET.time(points_circle), PLOT_DATASET.position.x.resp(points_circle),'ko','LineWidth',2);
plot(PLOT_DATASET.time(points_circle), PLOT_DATASET.position.y.resp(points_circle),'ro','LineWidth',2);
legend('x^,y^r','x','y')
vline(PLOT_DATASET.time(points_circle(1)),'g--')
xlabel('Time (s)','Interpreter','LaTex','FontSize',18); ylabel('$$x^r,y^r x,y$$ (m)','Interpreter','LaTex','FontSize',18);
ha(2) = subplot(4,1,2);
plot(PLOT_DATASET.time,-0*PLOT_DATASET.position.z.resp+1,'b--','LineWidth',1); grid on; hold on
plot(PLOT_DATASET.time,-PLOT_DATASET.position.z.resp+.8,'r','LineWidth',1); grid on;
plot(PLOT_DATASET.time(points_circle), -PLOT_DATASET.position.z.resp(points_circle)+.8,'ro','LineWidth',2);
xlabel('Time (s)','Interpreter','LaTex','FontSize',18); ylabel('$$z^r, z$$ (m)','Interpreter','LaTex','FontSize',18);
vline(PLOT_DATASET.time(points_circle(1)),'g--')
legend('z^r','z')
axis([0 10 .8 1.2])
ha(3) = subplot(4,1,3);
plot(PLOT_DATASET.time,PLOT_DATASET.attitude.roll.ref,'b--','LineWidth',1); hold on;
plot(PLOT_DATASET.time,PLOT_DATASET.attitude.roll.resp,'r','LineWidth',1); grid on;
plot(PLOT_DATASET.time(points_circle), PLOT_DATASET.attitude.roll.resp(points_circle),'ro','LineWidth',2);
xlabel('Time (s)','Interpreter','LaTex','FontSize',18); ylabel('$$\phi^r, \phi$$','Interpreter','LaTex','FontSize',18);
legend('\phi^r','\phi');
ha(4) = subplot(4,1,4);
plot(PLOT_DATASET.time,PLOT_DATASET.attitude.pitch.ref,'b--','LineWidth',1); hold on;
plot(PLOT_DATASET.time,PLOT_DATASET.attitude.pitch.resp,'r','LineWidth',1); grid on;
plot(PLOT_DATASET.time(points_circle), PLOT_DATASET.attitude.pitch.resp(points_circle),'ro','LineWidth',2);
vline(PLOT_DATASET.time(points_circle(1)),'g--')
xlabel('Time (s)','Interpreter','LaTex','FontSize',18); ylabel('$$\theta^r, \theta$$','Interpreter','LaTex','FontSize',18);
legend('\theta^r','\theta')
linkaxes(ha,'x');
%%
export_fig PushQuadSlungLoad2.eps -eps -transparent -m2 -a2 
%%
export_fig PushQuadSlungLoad2.png -png -transparent -m2 -a2 