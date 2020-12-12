#include <iostream>
#include <iomanip>

using namespace std;

const int fullBoard = 10;    // Holds ship position info
const int blankBoard = 10; // Displays hits and misses for user,
                             // does not show ship positions

struct ship
{
    int battleship;    // Linked list??
    int carrier;       // Enum?
    int destroyer;
    int patrol;
    int sub;
};

// bool true for hit flase for miss

// Create board that holds position of ships but is not displayed
//Pre: An established grid size used within an array
//Post: Creates a 10x10 gameboard
void GameBoard(int[][fullBoard]);

// Create board that only displays waves
// Pre: An established grid size used within an array
// Post: Creates a 10x10 gameboard
void PlayerBoard(int[][blankBoard])

//Allows the user to place their ships
//Pre: A 10x10 gameboard
//Post: Placed "#"'s in the desired places where user placed ships should be
void PlaceShips (int board[][fullboard]);

//output board to screen
//Pre:A created game board with the locations of all the ships
//Post:A screen outputted with "#" for the location of the ships and the rest of the spaces filled in with "~"
void PrintBoard(int[][blankBoard]);

//Find letter and number combo, such as B4
//Pre:A completely finished and outputted game board composed of "~" and "#"
//Post:Taking user input and finding the corresponding region of the board
bool FindLocation(int[][fullboard], int[][blankBoard], int guess, int &xPos, int &yPos);


// Asks user to make a guess
// Pre: blankBoard and fullBoard have been initialized
// Post: system returns hit or miss and updates blankBoard
void makeGuess(int guess, int[][fullBoard], int[][blankBoard]);

//Check the guessed location
//Pre:Reading the area guessed in the game board and checking the value of it
//Post:If the user guessed the location of a ship correctly, a "H" is swapped with the "#"
//if the user did not guess correctly, a "." is swapped with the "#"
bool CheckLocation(int guess, int[][fullBoard], int[][blankBoard], int, int, int, int);

int main(){

    int board[fullboard][fullboard];
    int guessNum, xPos, yPos;        //initializing variables within main
    int xGuess, yGuess;
    int guessCount = 0;

//Create board
    GameBoard(board);


// Print board
  PrintBoard(board);

    return 0;
}

//create board
//Pre:An established grid size used within an array
//Post:Creates a 10x10 gameboard
void GameBoard(int board[][fullboard]){

    for (int i = 0; i < gridSize; i++){
        for (int j = 0; j < fullboard; j++)  //creates board from array
            board[i][j] = 1;
    }

}

//Allows the user to place their ships
//Pre:A 10x10 gameboard
//Post:Placed "#"'s in the desired places where user placed ships should be
void PlaceShips (int board[][gridSize]){
//done using for statements, such as for i = 3 and j = 5, cout # instead of ~
//use pointer to find the specific spot in the array and change the value in the node
}

//output board to screen
//Pre:A created game board with the locations of all the ships
//Post:A screen outputted with "#" for the location of the ships and the rest of the spaces filled in with "~"
void PrintBoard(int[][blankBoard]){
    for (int i = 0; i < blankBoard; i++){   //outputs board, aka waves
        for (int j = 0; j < blankBoard; j++)
            cout << "~" << "  ";

        cout << endl;
    }
}

//Find letter and number combo, such as B4
//Pre:A completely finished and outputted game board composed of "~" and "#"
//Post:Taking user input and finding the corresponding region of the board
bool FindLocation(int[][blankBoard], int num, int &xPos, int &yPos) {


}

//Check the guessed location
//Pre:Reading the area guessed in the game board and checking the value of it
//Post:If the user guessed the location of a ship correctly, a "H" is swapped with the "#"
//if the user did not guess correctly, a "." is swapped with the "#"
bool CheckLocation(int[][fullBoard], int[][blankBoard], int xGuess, int yGuess, int xPos, int yPos){


}
