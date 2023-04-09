#include<stdio.h>
int main()
{
	int a=2;
	
	// post increment : x++ , value -> ++
 	printf("value of a during post increment : %d\n",a++);//2
	printf(" value of a after post increment : %d\n",a);//3
	 
	// pre increment : ++x , ++ -> value
 	printf("value of a during pre increment : %d\n",++a);//4
	printf(" value of a after pre increment : %d\n",a);//4
	
	
	
}
