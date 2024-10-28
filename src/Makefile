all: game_of_life

game_of_life: main.o utils.o components.o
	gcc -Wall -Werror -Wextra main.o utils.o components.o -o ../build/game_of_life

main.o:
	gcc -c -Wall -Werror -Wextra main.c  -o main.o

utils.o: 
	gcc -c -Wall -Werror -Wextra libs/utils.c  -o utils.o

components.o: 
	gcc -c -Wall -Werror -Wextra libs/components.c  -o components.o

clean:
	rm -rf *.o ../build/*