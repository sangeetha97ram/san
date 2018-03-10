#include<stdio.h>
int main()
{
	int product=1,rem,n;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		product=product*rem;
		n=n/10;
	}
	
	printf("%d",product);
	return 0;
}
