#include<stdio.h>
int main()
{
int n,m,c;
scanf("%d %d",&n,&m);
c=n+m;
if(c%2==0)
{
printf("%d is even",c);
}
else
{
printf("%d is odd",c);
}
return 0;
}
