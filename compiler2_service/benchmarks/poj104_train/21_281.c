#define NUM_ITER 61985

#include <header.h>



int check(int m,int n,int k)
{
    int i,out;
    out=0;
    for(i=m;i<=n;i++)
    {
               if(i%k==0)
               {
                         if(i-m<k)
                         {
                                  my_printf("%d",i);
                                  out=1;
                         }
                         else 
                         {
                              my_printf(",%d",i);
                              out=1;
                         }         
               }      
               
    }
    if(out==0)
    {
              my_printf("no\n");
    }
    else my_printf("\n");
    return k;
}

int main_bench()
{
    int n,i,num[100],sum=0,min=100,max=0;
    float ave;
    my_scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        my_scanf("%d",&num[i]);
        sum+=num[i];
        if (min>num[i]) min=num[i];
        if (max<num[i]) max=num[i];
    }
    ave=(float)sum/n;
    if (max-ave==ave-min) my_printf("%d,%d",min,max);
    else if(max-ave>ave-min) my_printf("%d",max);
    else my_printf("%d",min);

    return 0;
}