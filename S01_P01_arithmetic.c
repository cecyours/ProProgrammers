#include<stdio.h>
int main()
{
	
	int a,b;
	char ch;
	
	printf("Enter expression : ");
	scanf("%d%c%d",&a,&ch,&b);
	
	
	switch(ch)
	{
		case '+':printf("%d + %d = %d\n",a,b,a+b);break;
		case '-':printf("%d - %d = %d\n",a,b,a-b);break;
		case '*':printf("%d * %d = %d\n",a,b,a*b);break;
		case '/':printf("%d / %d = %d\n",a,b,a/b);break;
		case '%':printf("%d %% %d = %d\n",a,b,a%b);break;
	}
	
	return 29.89;
}
