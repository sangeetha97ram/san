#include<stdio.h>
int main()
{
int i,j,t,n,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d\n",a[1]);
printf("%d",a[n-1]);
return 0;
}
