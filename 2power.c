#include<stdio.h>
int main()
{
int n,count=0,temp;
scanf("%d",&n);
temp=n;
while(temp!=1)
{
if(temp%2!=0)
{
count++;
break;
}
temp=temp/2;
}
if(count==0)
printf("yes");
else
printf("no");
return 0;
}
