#include <stdio.h>

int main(void) {
	int m=0,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			m++;
		}
	}
	if(m>2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
