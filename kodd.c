#include<stdio.h>
 int main()
 {
 	int n,k,a[10],c=0,i;
 	scanf("%d %d",&n,&k);
 	for(i=0;i<n;i++)
 	{
            scanf("%d",&a[i]);
 	}
           	for(i=0;i<n;i++)
           	{
           		if(a[i]%2!=0)
           		{
           		c++;
           		if(c==k)
           		{
           			printf("%d",a[i]);
           			break;
           		}
           		}
           	}
            return 0;
  }
