#ifndef COMPONENTS_H
#define COMPONENTS_H

int get_neighbours(int i, int j, char ** matrix);

int transform_edge_y(int i);

int transform_edge_x(int j);

void update(char ** matrix, char ** buffer);




#endif