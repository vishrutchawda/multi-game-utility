# Multi-Game and Utility Program

This is a menu-driven C program that combines a collection of games and utilities, including Tic-Tac-Toe, Sudoku, a Matrix Calculator, a Unit Converter, and Hand Cricket. The program is designed to be interactive and allows users to select different functionalities from a main menu.

## Features

1. **Tic-Tac-Toe**:
   - Play against a computer opponent.
   - Choose to play as 'X' or 'O'.
   - Displays the game board and checks for wins or draws.

2. **Sudoku**:
   - Solve a hardcoded 9x9 Sudoku puzzle.
   - Validates moves to ensure they follow Sudoku rules (no duplicate numbers in rows, columns, or 3x3 subgrids).
   - Allows users to input row, column, and number (1–9) or exit with a space.

3. **Matrix Calculator**:
   - Perform matrix operations: addition, subtraction, multiplication, and transpose.
   - Supports matrices up to 10x10.
   - Prompts users for matrix dimensions and elements.

4. **Unit Converter**:
   - Convert units for weight (kg to grams/pounds), length (meters to feet/inches), volume (liters to gallons), speed (m/s to kph/mph), data (bytes to KB/MB), time (seconds to minutes/hours), and temperature (Celsius to Fahrenheit).

5. **Hand Cricket**:
   - Play a virtual hand cricket game against the computer.
   - Includes a toss to decide batting or bowling.
   - Players input numbers (1–10) to score runs or get out.

## Prerequisites

- A C compiler (e.g., `gcc` via MinGW on Windows).
- A Windows environment or Unix-like environment (Linux, macOS).

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/vishrutchawda/multi-game-utility.git
   cd multi-game-utility
   gcc main.c "tic tac toe.c" sudoku.c "matrix calculator.c" convertor.c "hand cricket.c" -o game
   game.exe


Usage :-
Run the program to see the main menu.
Enter a number (1–5) to select a game or utility, or 0 to exit.
Follow the prompts for each module:
Tic-Tac-Toe: Choose 'X' or 'O' and enter box numbers (1–9) to make moves.
Sudoku: Enter row, column, and number (1–9) to fill the grid, or space to exit.
Matrix Calculator: Select an operation (1–4) and input matrix dimensions and elements.
Unit Converter: Choose a conversion type (1–7) and input the value to convert.
Hand Cricket: Choose heads/tails for the toss, then input numbers (1–10) for batting/bowling.


Limitations :-
The program uses direct inclusion of .c files in main.c, which is unconventional and may complicate compilation.
Matrix operations are limited to 10x10 matrices.
Sudoku uses a hardcoded puzzle.
Unit conversions are one-directional (e.g., kg to grams/pounds only).
Input validation is minimal; invalid inputs (e.g., non-numeric) may cause unexpected behavior.
Terminal color codes (\033) may not work on some systems, especially certain Windows terminals.
The computer opponent in Tic-Tac-Toe and Hand Cricket uses basic random logic.
Contributing
Contributions are welcome! Feel free to fork the repository, make improvements, and submit a pull request. Please ensure your changes are well-documented and follow the existing code style.

License
This project is licensed under the MIT License. See the LICENSE file for details (if included).

Author
Vishrut Chawda

GitHub Link
https://github.com/vishrutchawda

LinkedIn Profile
www.linkedin.com/in/vishrut-chawda-899898342