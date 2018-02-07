#include <stdio.h>

int main(void) {
	int i,c;
	scanf("%d",&i);
	while(i!=0)
	{
		i=i/10;
		c++;
	}
	printf("%d",c);
	return 0;
}
