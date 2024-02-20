#ifndef UTILS_H
#define UTILS_H
#define WIDTH 80
#define HIGHT 25

int read_file(char * name, char ** matrix, int * speed);

void print_screen(char ** matrix);

char ** init_matrix(int hight, int width);

void output(char ** matrix);

void replace(char ** matrix);

void clear_screen();

void copy_matrix(char ** dest, char ** source);

void sleep(int speed);

#endif

