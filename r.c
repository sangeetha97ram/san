#include <stdio.h>
#include<string.h>
int main()
{ 
    char a[100];
	int n,N,i,c=0;
	scanf("%s",a);
	scanf("%d",&N);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
	    printf("%c",a[i]);
	    c++;
	    if(N==c)
	    {
	        break;
	    }
	    
	}
	return 0;
}
