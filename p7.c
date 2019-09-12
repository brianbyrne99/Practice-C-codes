//Rock,Paper, Scissors
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

enum choice{rock,paper,scissors};
int robot();

int main(void)
{
  char your_choice[10];
  printf("Choose rock, paper or scissors:\n");
  gets(your_choice);
  int robo;
  robo=robot();
  char x[]="rock";
  char y[]="paper";
  char z[]="scissors";

   if(strcmp(your_choice,x) == 0){
 	    switch(robo){
 		case 1:printf("CPU: rock\n");
 		printf("result: draw");
 		break;
 		case 2:printf("CPU: paper\n");
 		printf("result: you lose");
 		break;
 		case 3:printf("CPU: scissors\n");
 		printf("result: you win");
 		break;
        }
    }
 	
  else if(strcmp(your_choice,y) == 0)
    {
    switch(robo){
 		case 1:printf("CPU: rock\n");
 		printf("result: you win");
 		break;
 		case 2:printf("CPU: paper\n");
 		printf("result: draw");
 		break;
 		case 3:printf("CPU: scissors\n");
 		printf("result: you lose");
 		break;
 	}
 }

 else{
    switch(robo){
 		case 1:printf("CPU: paper\n");
 		printf("result: you win");
 		break;
 		case 2:printf("CPU: rock\n");
 		printf("result: you lose");
 		break;
 		case 3:printf("CPU: scissors\n");
 		printf("result: draw");
 		break;
 	}
 }
  return 0;
}

int robot(){
	int result;
	srand(time(NULL));
    result=(rand()%3)+1;
    
    return result; 
}