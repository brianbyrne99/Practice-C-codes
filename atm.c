#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void start();
void restart();
void intialise_default();
char read();
void write();
void entry();
void renter();
void Withdrawal();


int main(void)
{
    entry();
	return 0;
}

void start(){
		int choice;
	printf("1.Mini Statement\t 2.Check Balance\n3.Withdraw Cash\t 4.Deposit Cash\n 5.Exit ");
	scanf("%d",&choice);
	switch(choice){
		case 1: printf("Statement printing...\n");
		restart();
		break;
		case 2: 
		read();
		restart();
		break;
        case 3:Withdrawal();
        restart();
        break;
		case 4: write();
		read();
		restart();
		break;
		case 5: exit(0);
		break;
		default: restart();
		break;

	}

}


void restart()
{
	start();
}

void write()
{
  int num;
   FILE *fptr;
   fptr = fopen("rocket.txt","w");

   printf("Enter amount to deposit:");
   scanf("%d",&num);
   num+=250;

   fprintf(fptr,"%d",num);
   fclose(fptr);
}
char read()
{
	 FILE *fp; 
   char buff[255];  
   fp = fopen("rocket.txt", "r"); 
   fscanf(fp, "%s", buff); 
   printf("Your account has  %s Euros available\n", buff ); 
   restart();
}
void intialise_default()
{
  int num=250;
   FILE *fptr;
   fptr = fopen("rocket.txt","w");

   fprintf(fptr,"%d",num);
   fclose(fptr);
}
void entry()
{
	printf("######Welcome to Bank of Island######\n");
	int pin;
	printf("Please enter pin:");
	scanf("%d", &pin);
	
	if(pin != 6969){
		printf("Error!\n Incorrect PIN\n");
		renter();
	}
	else {
	intialise_default();
	start();
}
}
void renter()
{
	entry();
}
void Withdrawal()
{
	int x;
	printf("How much do you wish to take out?\n20\t50\n100\t200\n");
	scanf("%d", &x);
	printf("You have withdrawn %d Euros from your account!\n",x);
	printf("Goodbye!");
	restart();
}