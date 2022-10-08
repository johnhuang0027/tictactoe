#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printBoard();

//Tic Tac Toe game between 2 players or player vs computer
int main(){

    char str[100];
    int menuOption;
    //prompt user for game they wish to play
    printf("Welcome to TicTacToe.\n1---person vs person\n2---person vs random computer\nEnter your choice 1 or 2\n");

    //read information from console
    scanf("%d",&menuOption);
    while(menuOption !=1 && menuOption != 2){
        printf("Invalid input, please try again\n");
        scanf("%d",&menuOption);
    }

    //print board
    if(menuOption==1){
        int x;
        int y;
        printBoard();

        printf("Player 1 move:\n");
        scanf("%d %d", &x,&y);
    }
    
    //read information from console

    //keep updating board until player either wins, loses, or ties
    


    return 0;
}

void printBoard(){
    printf("+-------------+\n");
    printf("|  |  |  |\n");
    printf("+-------------+\n");
    printf("|  |  |  |\n");
    printf("+-------------+\n");
    printf("|  |  |  |\n");
    printf("+-------------+\n");

}