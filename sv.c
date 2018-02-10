#include<stdio.h>
int main()
{
char ch[50];
int i,count=0;
scanf("%s",ch);
for(i=0;ch[i]!='\0';i++)
{
if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='0'&&ch[i]<='9'))
{
	count++;
}
}
if(count!=0)
{
	printf("yes");
}
else
{
	printf("no");
	
}
return 0;
}
