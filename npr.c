#include<stdio.h>
int main()
{
    int principal,time,rate,interest;
    scanf("%d%d%d",&principal,&time,&rate);
    interest=(principal*time*rate)/100;
    printf("%d",interest);
    return 0;
}
