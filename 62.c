#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int n,i,c=0;
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]=='1')||(a[i]=='0'))
		{
			c++;
			
		}
	}
		if(n==c)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	return 0;
}
