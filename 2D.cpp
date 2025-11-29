#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r,;
	printf("Enter matrix rows & column size");
	scanf("%d%d",&r,&c);
	printf("Enter A matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter B matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf(" %d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Result matrix in \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
