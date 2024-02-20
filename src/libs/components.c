#include <stdlib.h>
#include <stdio.h>
#include "components.h"
#include "utils.h"


int get_neighbours(int i, int j, char ** matrix){
    int neighboirs = 0;
    for (int k = 0; k < 3; k++){
        if (matrix[transform_edge_y(i-1)][transform_edge_x(j + k)]== '1')
            neighboirs += 1;
    }
    for (int k = 0; k < 3; k++){
        if (k == 1)
            continue;
        if (matrix[transform_edge_y(i)][transform_edge_x(j + k)]== '1')
            neighboirs += 1;
    }
    for (int k = 0; k < 3; k++){
        if (k == 1)
            continue;
        if (matrix[transform_edge_y(i+1)][transform_edge_x(j + k)]== '1')
            neighboirs += 1;
    }
    return neighboirs;




}

int transform_edge_y(int i){
    if (i < 0)
        i = HIGHT - 1;
    else if (i > HIGHT- 1)
        i = 0;
    return i;
}

int transform_edge_x(int j){
    if (j < 0)
        j = WIDTH - 1;
    else if (j > WIDTH - 1)
        j = 0;
    return j;
}

void update(char ** matrix, char ** buffer){
    int tmp_neighbours;
    for(int i = 0; i < HIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            tmp_neighbours = get_neighbours(i,j, matrix);
            if (matrix[i][j] == '0'){
                if (tmp_neighbours == 3)
                    buffer[i][j] = '1';
                else
                    buffer[i][j] = '0';

            }
            else if (matrix[i][j] == '1'){
                if (tmp_neighbours < 2)
                    buffer[i][j] = '0';
                else if (tmp_neighbours == 2 || tmp_neighbours == 3)
                    buffer[i][j] = '1';
                else if (tmp_neighbours > 3)
                    buffer[i][j] =  '0';

            }
        } 
    }
}



