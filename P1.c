#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char array[10];
	int sum=0;
	printf("Enter string of charachterss\n");
    gets(array);

    for(int i=0;i<10;i++)
    {
    	printf("%c=%d\n",array[i],array[i]);
    	int x=array[i];
    	sum+=x;
    }
    printf("Total is %d",sum );
    return 0;
}