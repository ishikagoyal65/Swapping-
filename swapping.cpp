#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("Values before swapping of a and b is %d and %d respectively \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Values after swapping of a and b is %d and %d respectively\n",a,b);
	}