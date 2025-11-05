# Simple C++ Chess Piece Simulator

**[→ View Project Page](https://ericfidalgo.github.io/portfolio/projects/project.html?id=simple-chess-simulator)**

## Project Description
This project is a command-line application that simulates the movement of four key chess pieces: the Knight, Bishop, Rook, and Queen. The game is played on a 10x10 board where the user can select a piece and input coordinates for its next move.

The core functionality includes:
*   **Piece Movement:** Implements the unique movement rules for the Knight, Bishop, Rook, and Queen.
*   **Move Validation:** The program validates each move to ensure it adheres to the piece's rules, stays within the board's boundaries, and does not land on a square occupied by another piece.
*   **Interactive CLI:** The state of the game board is displayed in the terminal after every move, providing a clear visual representation of the pieces' positions.
*   **Help Menu:** A simple help command is included to explain the movement rules for each piece.

## Technologies Used
*   **Language:** C++
*   **Core Libraries:** `iostream`, `cstdlib`
*   **Frameworks:** None
*   **Tools:** g++ (or any standard C++ compiler)

## How to Run
Follow these instructions to compile and run the project on your local machine.

1.  **Prerequisites**
    You will need a C++ compiler installed. The most common one is `g++`, which is part of the GNU Compiler Collection.

2.  **Compilation**
    Open your terminal, navigate to the project directory, and run the following command to compile the source files into an executable named `chess_game`:
    ```bash
    g++ driver.cpp chess.cpp -o chess_game
    ```

3.  **Execution**
    Run the compiled program with this command:
    ```bash
    ./chess_game
    ```

## Project Output
Here is an example of what the program looks like when running.

**Initial board and prompt:**
```
                                     Welcome to Eric's Chess game!          

   10 . . . . . . . . . .
    9 . . . . . . . . . .
    8 . . . . . . . . . .
    7 . . . . . . . . . .
    6 . . . . . . . . . .
    5 . . . . . . . . . .
    4 . . . . . . . . . .
    3 . . . . . . . . . .
    2 . . . . . . . . . .
    1 . . R k B Q . . . .
    0 1 2 3 4 5 6 7 8 9 10
What would you like to move first? Knight (k), Bishop (B), Rook (R), or Queen (Q): (Press 'H' for help) k
The starting value of the Knight is: (4,1)
Pick your next value: 
6 2
The new value of the Knight is: (6,2)
   10 . . . . . . . . . .
    9 . . . . . . . . . .
    8 . . . . . . . . . .
    7 . . . . . . . . . .
    6 . . . . . . . . . .
    5 . . . . . . . . . .
    4 . . . . . . . . . .
    3 . . . . . . . . . .
    2 . . . . . k . . . .
    1 . . R . B Q . . . .
    0 1 2 3 4 5 6 7 8 9 10
Would you like to continue? (y/n): y
What is your next move? Knight (k), Bishop (B), Rook (R), or Queen (q): (Press 'H' for help) B
The starting value of the Bishop is: (5,1)
Pick your next value:
7 3
The new value of the Bishop is: (7,3)
   10 . . . . . . . . . .
    9 . . . . . . . . . .
    8 . . . . . . . . . .
    7 . . . . . . . . . .
    6 . . . . . . . . . .
    5 . . . . . . . . . .
    4 . . . . . . . . . .
    3 . . . . . . B . . .
    2 . . . . . k . . . .
    1 . . R . . Q . . . .
    0 1 2 3 4 5 6 7 8 9 10
Would you like to continue? (y/n): y
What is your next move? Knight (k), Bishop (B), Rook (R), or Queen (q): (Press 'H' for help) q
The starting value of the Queen is: (6,1)
Pick your next value: 
8 10
The new value of the Queen is: (8,10)
   10 . . . . . . . Q . .
    9 . . . . . . . . . .
    8 . . . . . . . . . .
    7 . . . . . . . . . .
    6 . . . . . . . . . .
    5 . . . . . . . . . .
    4 . . . . . . . . . .
    3 . . . . . . B . . .
    2 . . . . . k . . . .
    1 . . R . . . . . . .
    0 1 2 3 4 5 6 7 8 9 10
Would you like to continue? (y/n): n
```
