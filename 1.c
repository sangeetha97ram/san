#include<stdio.h>
int main()
{
    int b[50],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        
    }
    for(i=0;i<n;i++)
 {
    if(b[i]>b[i+1])
    {
        printf("%d",--b[i+1]);
        break;
    }
 }
 return 0;
}
