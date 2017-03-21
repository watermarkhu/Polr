if isempty(currentFigures), currentFigures = []; end;
close(setdiff(findall(0, 'type', 'figure'), currentFigures))
clear mex
delete *.mexw64
[~,~,~] = rmdir('D:\Users\water_000\Documents\GitHub\Polr\coderdemo_edge_detection\codegen','s');
clear D:\Users\water_000\Documents\GitHub\Polr\coderdemo_edge_detection\sobel.m
delete D:\Users\water_000\Documents\GitHub\Polr\coderdemo_edge_detection\sobel.m
delete D:\Users\water_000\Documents\GitHub\Polr\coderdemo_edge_detection\hello.jpg
clear
load old_workspace
delete old_workspace.mat
delete D:\Users\water_000\Documents\GitHub\Polr\coderdemo_edge_detection\cleanup.m
cd D:\Users\water_000\Documents\GitHub\Polr
rmdir('D:\Users\water_000\Documents\GitHub\Polr\coderdemo_edge_detection','s');
