#include<stdio.h>
int main()
{
	int n,k,r=1,i=1;
	scanf("%d %d",&n,&k);
	while(i<=k)
	{
		r=r*n;
		i++;
	}
	printf("%d",r);
	return 0;
}
