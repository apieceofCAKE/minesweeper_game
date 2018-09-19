/*
31) Minesweeper.

Escreva um programa que tome 3 parâmetros M, N e p e produza uma matriz
de 0’s e 1’s onde cada posição é ocupada com probabilidade p. No jogo Minesweeper,
células ocupadas representam bombas e vazias representam células seguras.

Imprima a
matriz usando * para bombas e “.” para células seguras. Então, substitua cada célula segura
pelo número de bombas vizinhas (acima, abaixo, à direita e à esquerda).
*/

#include <stdio.h>

//The game board has 16x16 blocks, equivalent to 'intermediate' in Windows Minesweeper
#define BOARD_SIZE 10

//Definitions for status_code, to improve code readability
#define WIN -10
#define LOSE -20
#define KEEP_ON -30
#define REPLAY -40
#define GAME_OVER -50


//Declaration
void welcome_display();
int difficulty_seletor();
int control_board_creator(int difficulty);
void showed_board_creator();
void board_printer(char *board);
int player_input_and_board_update();
int mine_checker(int row, int col);
int game_status(int status_code);


//Main function
int main() {

    char showed_board[BOARD_SIZE][BOARD_SIZE];
    char control_board[BOARD_SIZE][BOARD_SIZE];

    //Loop to keep the game going

    return 0;
}


//Definition
void welcome_display() {
    /*
    Shows initial message
    */

}


int difficulty_seletor() {
    /*
    Receives user input and returns an integer that will affect bomb placing probability.
    The higher the input, higher the difficulty
    */

}


int control_board_creator(int difficulty) {
    /*
    Uses the difficulty parameter to generate bombs on the board.
    This board won't be showed to the user until the game ends.
    Empty spaces are 'o', bombs are '*'. The function returns the number of bombs on the board
    */

}


void showed_board_creator() {
    /*
    Assigns 'o' for the whole showed_board
    */

}


void board_printer(char *board) {
    /*
    Prints the parameter array in a user friendly way
    */

}


int player_input_and_board_update() {
    /*
    Receives player input for the coordinates. It calls mine_checker and, if the player didn't hit a bomb,
    it updates both control_board (switching 'o' for 'x') and showed_board (switching 'o' for the number of
    adjacent mines. Returns status_code
    */

}
int mine_checker(int row, int col) {
    /*
    Receives row and column and checks on control_board if it hits a mine. If that's the case, returns -1.
    Otherwise, checks control_board for the number adjacent mines and returns it
    */

}
int game_status(int status_code) {
    /*
    Receives the status code. For WIN and LOSE, it calls board_printer to show control_board and asks user
    about replaying or not, returning the appropriate defined code. For KEEP_ON,
    it just returns the same status_code so the game loop continues
    */

}
