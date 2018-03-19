#include<stdio.h>
 #include<string.h>
 int main()
 {
 	int i,j,n,t;
 	char a[20];
 	scanf("%s",&a);
 	n=strlen(a);
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			if(a[i]<a[j])
 			{
 				 t=a[i];
 				 a[i]=a[j];
 				 a[j]=t;
 				 
 			}
 		}
 	}
 	 printf("%s",a);
 	return 0;
 }
