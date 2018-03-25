#include<stdio.h>
int main()
{
	int b,a;
	scanf("%d",&b);
	while(b>0)
	{
		a=b%2;
		b=b/2;
	printf("%d",a);
	}
	return 0;
}
