

int read_file(char * name, char ** matrix, int * speed){
    FILE * fp;
    fp = fopen(name, "r");
    if (fp != NULL){
        for (int i = 0; i < HIGHT + 1; i++){
            if (i== HIGHT)
                fscanf(fp,"%d", speed)
            else
                fgets(name[i], WIDTH, fp);
            

            }
        }
        else
            return 0;
    

}

void print_screen(char ** matrix){
    for (int i = 0; i < HIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            if (j== WIDTH - 1){
                if (matrix[i][j]== '0')
                    printf(" \n");
                else if (matrix[i][j]== '1')
                    printf("*\n")
            }
            else if (matrix[i][j]== '0')
                printf(' ');
            else if (matrix[i][j]== '1')
                printf('*');

        }
    }
}


