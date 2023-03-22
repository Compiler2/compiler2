#define NUM_ITER 1205824

#include <header.h>

int main_bench()
{
    char a[101],b[100];
    int a1[100],a2[99],a3[99];
    int i,l,x;
    my_scanf("%s",a);
    l=strlen(a);
     if (l>2)
{
             for(i=0;i<l;i++)
    a1[i]=a[i]-'0';
    a3[0]=a1[0];    
    for(i=0;i<l-1;i++)
    {
                      a2[i]=(a1[i+1]+a3[i]*10)/13;
                      a3[i+1]=(a1[i+1]+a3[i]*10)%13;
                      
    }
    if (a2[0]!=0)
    {
                    for(i=0;i<l-1;i++)
                    b[i]=a2[i]+'0';
                    b[l-1]=0;
    }
    else
    {
                            for(i=1;i<l-1;i++)
                            b[i-1]=a2[i]+'0';
                            b[l-2]=0;
    }
    my_printf("%s\n",b);
    my_printf("%d\n",a3[l-1]);
}
if (l==2)
{
    x=(a[0]-'0')*10+(a[1]-'0');
    my_printf("%d\n",x/13);
    my_printf("%d\n",x%13);
}  
   if (l==1)
{   
   x=a[0]-'0';
   my_printf("%d\n",x/13);
   my_printf("%d\n",x%13);
}
}
