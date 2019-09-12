#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

enum cards{hearts, diamonds, clubs, spades};
int main(void)
{
   srand(time(NULL));
   printf("Your 5 cards are: \n");
   for(int x=0;x<5;x++)
   {
   	int y;
	y=(rand()%14)+1;
	enum cards suit;
	suit=(rand()%3)+0;

   switch(y){
   	case 11: printf("Jack of ");
   	break;
   	case 12: printf("Queen of ");
   	break;
   	case 13: printf("King of ");
   	break;
   	case 14: printf("Ace of ");
   	break;
   	default: printf("%d of ",y);
   }
   switch(suit)
   {
   	case 0:printf("hearts\n");
   	break;
   	case 1:printf("diamonds\n");
   	break;
   	case 2:printf("clubs\n");
   	break;
   	case 3:printf("spades\n");
   	break;

   }
}
return 0;
}