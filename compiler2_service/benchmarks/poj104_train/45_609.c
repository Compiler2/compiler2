#define NUM_ITER 1080095

#include <header.h>

int main_bench()
{
    char a[50],b[50];
    my_scanf("%s %s",a,b);
    int l1,l2,i,t=1,j,m,y;
    l1=strlen(a);
    l2=strlen(b);
	
    for(i=0;i<l2;i++)
    {
       if(b[i]==a[0])
       {
           m=i;
		  
           for(j=1,y=m;j<l1;j++,y++)
           {
               if(b[y+1]==a[j])
               {
                   t++;
                }
                              if(t==l1)
               {
                   my_printf("%d",m);
                   break;
                }
            }
        }
     }
return 0;
}
