#include<stdio.h>
    int main()
{
    char    a[100];
    int d=0,i;
    scanf("%[^\n]s",a);
 for(i=0;a[i]!=NULL;i++)
    {
 
        if(a[i]>='0' && a[i]<='9')
        {
        	d++;
        }
       
    }
      printf("%d",d);
    
 
    return 0;
}
