#define NUM_ITER 46481

#include <header.h>

int main_bench()
{
    char xb[10];
    int i,n,a=0,b=0,k;
    my_scanf("%d",&n);
    float m,shuzunan[40],shuzunv[40];
    for(i=0;i<n;i++)
    {
       
       my_scanf("%s",&xb);    
       if(*xb=='m')
       {
          my_scanf("%f",&shuzunan[a]);
          a++;
       }
       if(*xb=='f')
       {
          my_scanf("%f",&shuzunv[b]);
          b++;
       }
    }
    for(k=1;k<a;k++)
    {
       for(i=0;i<a-k;i++)
       {
          if(shuzunan[i]>shuzunan[i+1])
          {
              m=shuzunan[i+1];
              shuzunan[i+1]=shuzunan[i];
              shuzunan[i]=m;
          }
       }
    }
    for(k=1;k<b;k++)
    {
           for(i=0;i<b-k;i++)
           {
               if(shuzunv[i]<shuzunv[i+1])
               {
                 m=shuzunv[i+1];
                 shuzunv[i+1]=shuzunv[i];
                 shuzunv[i]=m;
               }
           }
    }
    my_printf("%.2f",shuzunan[0]);
    for(k=1;k<a;k++)
    {
        my_printf(" %.2f",shuzunan[k]);
    }
    for(k=0;k<b;k++)
    {
        my_printf(" %.2f",shuzunv[k]);
    }                     
	

   return 0;
}
