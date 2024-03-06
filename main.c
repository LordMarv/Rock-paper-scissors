#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int userMove, compMove;
	
	//random time generator
	srand(time(NULL));
	
	while(1){
		
		//random computer move generator between 0-3
		compMove=rand() %3;
		
		printf("Pick your Move: 0 for Rock, 1 for Paper, 2 for Scissors and 9 for Exit:\n");
		scanf("%d",&userMove);
		
		if(userMove==9){
			break; //exit the game
		}
		
		switch(userMove){
			case 0:
				if(compMove==1){
				printf("The Mighty Computer has bested you! Paper beats Rock\n");
                } else if (compMove == 2) {
                    printf("You have bested the mighty Computer Rock Smashes Scissors\n");
                } else {
                    printf("It's a Draw!!!\n");
                }
                break;
				
			case 1:
				if (compMove == 0) {
                    printf("You have Bested the mighty Computer! Paper captures Rock\n");
                } else if (compMove == 2) {
                    printf("The Mighty Computer has bested you! Scissors shreds Paper\n");
                } else {
                    printf("It's a Draw!!!\n");
                }
                break;
				
			case 2:
				if (compMove == 0) {
                    printf("The Mighty Computer has bested You! Rock smashes Scissors\n");
                } else if (compMove == 1) {
                    printf("You have bested the Mighty Computer Scissors shreds paper\n");
                } else {
                    printf("It's a Draw!!!\n");
                }
                break;
			
			default:
				printf("Invalid input. Please enter 0, 1, 2, or 9.\n");
		}
	}
	
	return 0;
}
