 #include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char a[20];
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if((a[i]>='0')&&(a[i]<='9'))
		{
		printf("%c",a[i]);
	}
	}
	return 0;
}
	
