#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

int read_file(char * name, char ** matrix, int * speed){
    int flag = 1;
    FILE * fp;
    fp = fopen(name, "r");
    if (fp != NULL){
        for (int i = 0; i < HIGHT + 1; i++){
            if (i== HIGHT)
                fscanf(fp,"%d", speed);
            else
                fscanf(fp, "%s",  matrix[i]);
            

            }
        }
        else
            flag =  0;
        fclose(fp);
    return flag;
    

}

void print_screen(char ** matrix){
    for (int i = 0; i < HIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            //if (j == WIDTH - 1){
                /*if (matrix[i][j] == '0')
                    printf(".");
                else if (matrix[i][j] == '1')
                    printf("*");
                printf("\n");*/
                
            //}
            if (matrix[i][j] == '0')
                printf(".");
            else if (matrix[i][j] == '1')
                printf("*");
            if (j == WIDTH - 1){
                printf("\n");
            }

        }
    }
}

char ** init_matrix(int hight, int width){
    char ** matrix = (char **)malloc(sizeof(char*) * hight);
    for (int i = 0; i < width; i++){
        matrix[i] = (char *)malloc(sizeof(char) * width);

    }
    return matrix;
}

void output(char ** matrix){
    for (int i = 0; i < HIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            if(j == WIDTH - 1)
                printf("%c\n", matrix[i][j]);
            else    
                printf("%c",matrix[i][j]);
        }
    }
}

void replace(char ** matrix){
    for (int i = 0; i < HIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            if (matrix[i][j] == '1')
                matrix[i][j] = '*';
            else
                matrix[i][j] = ' ';
           
        }
    }

}

void clear_screen(){
    printf("\e[1;1H\e[2J");
}

void copy_matrix(char ** dest, char ** source){
    for (int i = 0; i < HIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            dest[i][j] = source[i][j];
        }
    }
}

void sleep(int speed){
    for(int i = 0; i < 1000000000/speed; i++);

}
void free_matrix(char ** matrix){
    for(int i = 0; i < HIGHT; i++){
        free(matrix[i]);
    }
    free(matrix);
}
