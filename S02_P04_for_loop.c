
#include<stdio.h>
#include<stdbool.h>
#include"S02_P04_header.h"
int main()
{
	int num,i;
	printf("Enter the number : ");
	scanf("%d",&num);
 	
 	for(i=1;i<=num;i++)
 	{
 		if(isEven(i))
 			printf("Hello World : %d\n",i);
	}
 	
 	
}
