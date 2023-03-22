#include <header.h>


int main_bench()
{
    char a[100];
    int b[100];
    my_scanf("%s",a);
    int l,t,i;
    l=strlen(a);
    for (i=0;i<l;i++)
         a[i]=a[i]-'0';
    if (l==1)
       my_printf ("0\n%d",a[0]);
    else if   ( l==2&&a[0]==1&&a[1]<3)
       my_printf("0\n%d%d",a[0],a[1]);
    else{ 
    if (a[0]==1&&a[1]<3)
         {
             t=a[0]*10+a[1];
             for (i=1;i<l-1;i++)
             {
                t=t*10+a[i+1];
                b[i-1]=t/13;
                t=t%13;
                }   
             for (i=0;i<l-2;i++)
               my_printf("%d",b[i]);
             my_printf("\n%d",t);      
         }
    else 
         {
             t=a[0];
             for (i=0;i<l-1;i++)
             {
                 t=t*10+a[i+1];
                 b[i]=t/13;
                 t=t%13;
             }
             for (i=0;i<l-1;i++)
                my_printf("%d",b[i]);
             my_printf("\n%d",t);   
         }
         }
}
