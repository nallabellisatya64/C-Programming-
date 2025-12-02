#include<stdio.h> 
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int l1,l2,i,flag=0;
	printf("Enter string1 Name");
	scanf("%s",&s1);
	printf("Enter string2 Name");
	scanf("%s",&s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2)
	{
		for(i=0;s1[i]='\0';i++)
		{
			if(s1[i]!=s2[i])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	printf("both strings are equal");
	else
	printf("both strings are not equal");
	return 0;
}
