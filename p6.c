//calculator
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
 double a,b,z;
 char symbol;
 printf("Enter x, then operand and finally y:\n");
 scanf("%lf %c %lf",&a,&symbol,&b);

 switch(symbol){
 	  case '+':z=a+b;
      break;
      case '-':z=a-b;
      break;
      case 'x':z=a*b;
      break;
      case '%':z=a/b;
      break;
      default:
      printf("SYNTAX ERROR!");
      return 0;
      break;
 }
printf("Answer=%lf\n", z);
return 0;
}