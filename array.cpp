#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("Enter array size");
	scanf("%d",&n);
	printf("Enter array value");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n display array value");
	for(i=0;i<n;i++)
	{
		printf("\n%d %d %U",i,a[i],&a[i]);
	}
	return 0;
}
