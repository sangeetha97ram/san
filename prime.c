#include<stdio.h>
int main()
{
int i,m=0,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
m++;
}
}
if(m==2)
{
printf("prime");
}
else
{
printf("no");
}
return 0;
}
