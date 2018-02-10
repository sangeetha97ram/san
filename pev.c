#include<stdio.h>
int main()
{
int n,m,k=1;
scanf("%d %d",&n,&m);
k=n*m;
if(k%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
