#include <stdio.h>

int main(void) {
	int kninjas,oninjas,ninjas;
	scanf("%d %d",&kninjas,&oninjas);
	if(kninjas<oninjas)
	{
	ninjas=oninjas-kninjas;
	printf("%d",ninjas);
	}
	return 0;
}
