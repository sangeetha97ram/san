#include <stdio.h>

int main(void) {
	int n,l,h;
	scanf("%d",&n);
	scanf("%d %d",&l,&h);
		if((n>=l)&&(n<=h))
		{
			printf("yes");
			
		}
		else
		{
			printf("no");
		}
	
	return 0;
}
