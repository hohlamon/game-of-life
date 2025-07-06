# Conway's Game of Life in C

This project is a simple, terminal-based implementation of John Conway's famous cellular automaton, the **Game of Life**. It's written in C and uses a Makefile for easy compilation.

-----

## 📜 Description

The program reads an initial state of a grid from a text file, then simulates the evolution of the cells based on the rules of the Game of Life. Each new generation is printed to the terminal, creating a simple animation. The grid has wrap-around edges (a toroidal array), meaning patterns can seamlessly move across the boundaries.

-----

## ✨ Features

  * **Terminal Animation**: Renders the simulation directly in the terminal.
  * **Custom Initial State**: Load any pattern and animation speed from a simple text file.
  * **Toroidal Grid**: The top/bottom and left/right edges of the grid are connected.
  * **Makefile Support**: Includes a `Makefile` for easy building and cleaning of the project.

-----

## 🚀 How to Run

### 1\. Compilation

To compile the project, simply run the `make` command in the root directory.

```bash
make
```

This will create an executable file named `game_of_life` inside the `/build` directory.

### 2\. Execution

Run the compiled program by providing the path to a pattern file.

```bash
./build/game_of_life
```

The program will then prompt you to `scanf` the path to your pattern file. For example:

```
materials/test.txt
```

### 3\. Cleaning Up

To remove the compiled object files and the executable, use the `clean` rule in the Makefile.

```bash
make clean
```

-----

## 📄 Input File Format

The program requires a specific file format to load the initial state and animation speed.

1.  The first **HIGHT** lines define the grid, where `HIGHT` is the grid height defined in your code.
2.  Each line must contain **WIDTH** characters, where `WIDTH` is the grid width.
3.  Use `'1'` for a **live cell** and `'0'` for a **dead cell**.
4.  The final line of the file must be a single integer that sets the animation **speed** (higher values are faster).
5. Standart configuration:
   **HIGHT** = 25
   **WIDTH** = 80
