#include<stdio.h>
int main()
{
int n,n1=1,n2=1,t,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",n1);
t=n1+n2;
n1=n2;
n2=t;
}
return 0;
}
