#include <stdio.h>
int main()
{
   int n,a[200],i,c=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   	c=c+a[i];
   }
   printf("%d",c);
   return 0;
}
   
