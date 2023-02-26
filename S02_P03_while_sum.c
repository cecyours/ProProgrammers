#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum=0,num;
	
	while(sum<=100)
	{
		
		printf("Enter laddu ammount : ");
		scanf("%d",&num);
		system("cls");
		sum+=num; // sum = sum+num
		
		printf("current sum : %d\n",sum);
	}
	
	
	
	return 'A';
}
