#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void start();
void restart();
void odds();
void evens();
int game(int x);
void curScore();
void finalscore();
 int ctrE=0;
 int ctrO=0;

int main(void)
{
 start();
 return 0;
}

void start()
{
 int choice;
  printf("Do you wish to be the Evens or Odds player?\n Enter 1 for Evens\n Enter 2 for Odds\n Enter 3 to exit game\n");
  scanf("%d", &choice);
  switch(choice)
  {
    case 1:printf("You have chosen Evens\n");
    evens();
    break;
    case 2:printf("You have chosen Odds\n");
    odds();
    break;
    case 3:exit(0);
    break;
    default: restart();
    break;
  }
}
void evens()
{
  int entry,summ;
  printf("Enter a number between 1 and 10\n");
  scanf("%d",&entry);
  if(entry<1 || entry>10)
  {
  	printf("You only have 10 fingers\n");
  	start();
  }
  else{
  summ=game(entry);
  printf("Sum of fingers pleayed :%d",summ);
}
if(summ %2==0)
{
	printf("\nEvens wins!\n");
	ctrE++;
}
else
{
	printf("\nOdds wins!\n");
	ctrO++;
}
curScore();

char again;
printf("Do you want to play again?(y/n)\n");
scanf("%s", &again);
switch(again){
	case 'y': evens();
	break;
	case 'n':restart();
	break;
	default: restart();
	break;
}
}



int game(int x)
{
	int opponent,sum;
 srand( (unsigned)time(NULL)); 
 opponent= rand() % 10 + 1;
 printf("CPU : %d fingers\n",opponent);
 sum=opponent+x;
 return sum;
}

void odds(){
	 int entry,summ;
  printf("Enter a number between 1 and 10\n");
  scanf("%d",&entry);
  if(entry<1 || entry>10)
  {
  	printf("You only have 10 fingers\n");
  	start();
  }
  else{
  summ=game(entry);
  printf("Sum of fingers played :%d",summ);
}
if(summ %2==1)
{
	printf("\nOdds wins!\n");
	ctrO++;
}
else
	{
		printf("\nEvens wins!\n");
		ctrE++;
	}
curScore();
char again;
printf("Do you want to play again?(y/n)\n");
scanf("%s", &again);
switch(again){
	case 'y': odds();
	break;
	case 'n':
  finalscore();
  restart();
	break;
}
}
void restart(){
	start();
}
void curScore()
{
	printf("####SCOREBOARD####\n");
  printf("__________________\n");
	printf("Odds|%d|%d|Evens\n", ctrO,ctrE);
  printf("__________________\n");
}

void finalscore()
{
   if(ctrE>ctrO)
  {
    printf("Evens wins!\n");
  }
  else if(ctrE<ctrO)
  {
    printf("Odds wins!\n");
  }
  else
  {
    printf("Draw!\n");
  }
}