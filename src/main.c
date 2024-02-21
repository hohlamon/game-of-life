#include <stdio.h>
#include <stdlib.h>

#include "libs/utils.h"
#include "libs/components.h"

int main(){
    char path[255];
    int speed;
    char ** matrix = init_matrix(HIGHT, WIDTH);
    char ** buffer = init_matrix(HIGHT, WIDTH);

    scanf("%s", path);

    if (read_file(path, matrix, &speed)){
        while (1){
            print_screen(matrix);
            update(matrix, buffer);
            copy_matrix(matrix, buffer);
            clear_screen();
            sleep(speed);
        }

    }
    else
        printf("file's not found\n");
    free_matrix(matrix);
    free_matrix(buffer);

    return 0;
}