#include<stdio.h>
Sum(int,int);
{
	int a,b,c;
	printf("Enter a&b values");
	scanf("%d%d",&a,&b);
	c=Sum(a,b);
	printf("sum=%d",c);
	return 0;
}
int sum(int a,int b)
{
	int x;
	x=a+b;
	return x;
}
