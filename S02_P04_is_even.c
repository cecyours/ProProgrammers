
#include<stdio.h>
#include<stdbool.h>
#include"S02_P04_header.h"
int main()
{
	int num=11;
	bool flag;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	flag = isEven(num);
	
	if(flag)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd.");
	}
	return 0;
}
