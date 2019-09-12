#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
   int array[5];
   int ctr=0;
   printf("Your lotto numbers are:\t");
   for(int i =0 ; i<5; i++) {
       array[i]=(rand()%48)+1; 
       ctr++;
       for(int y=0;y<ctr;y++)
       { 
         if(array[i]==array[y]){
         	array[i]=array[i]-1;
         }
       }
       printf("%d\t",array[i]);
   }
   return 0;
}