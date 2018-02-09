#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int i,j,m,n;
int c=0,d=0;
scanf("%s",a);
scanf("%s",b);
m=strlen(a);
n=strlen(b);
for(i=0;i<m;i++)
{
c=c+a[i];
}
for(j=0;j<n;j++)
{
d=d+a[j];
}
if(c>d)
printf("%s",a);
else
printf("%s",b);
return 0;
}
