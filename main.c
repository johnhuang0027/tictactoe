#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void printBoard();

//Tic Tac Toe game between 2 players or player vs computer
int main(){

    char board[3][3];
    int menuOption;
    //prompt user for game they wish to play
    printf("Welcome to TicTacToe.\n1---person vs person\n2---person vs random computer\nEnter your choice 1 or 2\n");

    //read information from console
    scanf("%d",&menuOption);
    while(menuOption !=1 && menuOption != 2){
        printf("Invalid input, please try again\n");
        scanf("%d",&menuOption);
    }

    //read info and print board according to input
    if(menuOption==1){
        int x;
        int y;
        startBoard();

        //keeps asking for more moves until there is a draw or one of the players win
        while(draw==false){
            //asks player1 for move
            printf("Player 1 move:\n");
            scanf("%d %d", &x,&y);
            x--;
            y--;

            //checks if the input is valid and then updates the board
            if(x>=0 && x<3 && y>=0 && x<3){
                //update board
                if(player1W)
                    break;
            }

            //asks player2 for move
            printf("Player 2 move:\n");
            scanf("%d %d",&x, &y);
            x--;
            y--;

            //checks if input is valid and then updates the board
            if(x>=0 && x<3 && y>=0 && x<3){
                //update board
                if(player2W)
                    break;
            }
        }
    }else if(menuOption==2){

    }
    
    //read information from console

    //keep updating board until player either wins, loses, or ties
    


    return 0;
}

void startBoard(){
    printf("+---------+\n");
    printf("| | | |\n");
    printf("+---------+\n");
    printf("| | | |\n");
    printf("+---------+\n");
    printf("| | | |\n");
    printf("+---------+\n");

}

//checks if the game has become a draw
bool draw(int count){
    if(count<9)
    return false;
    
    return true;
}

//checks the winning condition for player1
bool player1W(){

}

//checks the winning condition for player2
bool player2w(){

}

