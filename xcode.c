#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100]="xcode";
    int i,n;
    n=strlen(ch);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%c",ch[i]);
        }
    }
    printf("\t");
        for(i=0;i<n;i++)
        {
            if(i%2==1)
        {
            printf("%c",ch[i]);
        }
        }
    return 0;
}
