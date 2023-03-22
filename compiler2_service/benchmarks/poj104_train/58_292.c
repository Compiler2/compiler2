#define NUM_ITER 29178

#include <header.h>


int main_bench()
{
    
    int n;
    int i,j,l;
    char a[100];
    my_scanf("%d",&n);
    getchar();
    
    for(i=0;i<n;i++)
    {
       gets(a);
       l=strlen(a);
       if(!((a[0]>='A'&&a[0]<='Z')||(a[0]>='a'&&a[0]<='z')||a[0]=='_'))
         {
         my_printf("0\n");
         }
       else
       {
           for(j=1;j<l;j++)
           {
           if(!((a[j]>='0'&&a[j]<='9')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||a[j]=='_'))
             {
             my_printf("0\n");
             j=l+1;
             }
           }
           if(j==l)
            my_printf("1\n");
       }
    }
    
    getchar();
    getchar();
    getchar();
    
}
