#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
int credit = 20;
int row1=0,row2=0,row3=0;
srand(time(NULL));	
row1 = rand()%3+1;
row2 = rand()%3+1;
row3 = rand()%3+1;
int bet = 0;
int outcome = 0;
welcome();
do{
	printf("\nHow many credits would you like to bet (1-3)?\n");
	scanf("%d",&bet);
}
while(bet<1 || bet >3 || bet > credit); 
//row 1
if (row1 ==1){
	printf("orange\t");
}
else if (row1 ==2){
	printf("apple\t");
}
else if (row1 ==3){
	printf("banana\t");
}

//row 2
if (row2 ==1){
	printf("orange\t");
}
else if (row2 ==2){
	printf("apple\t");
}
else if (row2 ==3){
	printf("banana\t");
}
//row 3
if (row3 ==1){
	printf("orange\t");
}
else if (row3 ==2){
	printf("apple\t");
}
else if (row3 ==3){
	printf("banana\t");
}
outcome = checkWin(row1,row2,row3);

credit = creditAdjust(credit,bet,outcome);

printf("\nCredits left: %d",credit);

	return 0;
}
int creditAdjust (int credit, int bet, int outcome) {
	if (outcome == 1){
		credit = credit + bet;
	}
	else{
	credit = credit - bet;
	}
	return credit;
}
int checkWin (int row1, int row2, int row3) {
	int outcome = 0;
	if(row1 == row3 && row2 == row3){
		outcome = 1;
		
	}
	else {
		outcome = 0;
	}	
	return outcome;
}
void welcome (void) {
	printf("Thank you for using our slot machine.\nYou can bet between 1 and 3 credits. \nMatch 3 to win, 3 wildcards gives you an extra bonus.");
}
