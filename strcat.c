#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int i,m,n;
scanf("%s",a);
scanf("%s",b);
m=strlen(a);
n=strlen(b);
for(i=0;i<n;i++)
{
a[m]=b[i];
m++;
}
printf("%s",a);
return 0;
}
