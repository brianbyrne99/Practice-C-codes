#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int result,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	printf("Dice rolls are:\n");
	while(c1 != 4&&c2 != 4&&c3 != 4&&c4 != 4&&c5 != 4&&6 != 4)
	{
     result=(rand()%6)+1; 
     printf("%d\n",result);
	switch(result){
		case 1:c1++;
		break;
		case 2:c2++;
		break;
		case 3:c3++;
		break;
		case 4:c4++;
		break;
		case 5:c5++;
		break;
		case 6:c6++;
		break;
	}
}
return 0;
}
