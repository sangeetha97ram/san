#include<stdio.h>
int main()
{
int n,a=0,i,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
while(n!=0)
{
b=n%10;
a=a+b;
n=n/10;
}
printf("%d",a);
}
return 0;
}
