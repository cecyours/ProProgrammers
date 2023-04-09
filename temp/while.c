#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of a :- ");
	scanf("%d",&a);
	while(a<=15)
	{
		printf("num=%d\n",a++);
	}
	return 1; 
}
