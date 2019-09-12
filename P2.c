//Create a program that displays the first 100 prime numbers.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
   int n= 100;
   int i = 3;
   int count, c;

 
   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }
 
   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         printf("%d\n", i);
         count++;
      }
      i++;
   }
 
   return 0;
}