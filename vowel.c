#include<stdio.h>
int main()
{
int i,c;
char a[30];
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u')
{
c++;
}
}
if(c!=0)
printf("yes");
else
printf("no");
return 0;
}
