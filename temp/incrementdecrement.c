#include <stdio.h>
void main()
{
	int s=1;
	
	//Increment
	   //post
	printf("%d\n",s++);//1
	printf("%d\n",s);//2
	   //pre
	printf("%d\n",++s);//3
    //Decrement
      //post
	printf("%d\n",s--);//3
	printf("%d\n",s);//2
	  //pre
	printf("%d\n",--s);//1
}
