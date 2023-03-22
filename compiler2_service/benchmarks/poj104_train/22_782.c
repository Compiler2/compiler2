#define NUM_ITER 1466493

#include <header.h>

int main_bench()
{
    unsigned a[1000];
    char b[1000];
    my_scanf("%u",&a[0]);
    int i;
    i=0;
    while(1)
    {
            b[i]=getchar();
            if(b[i]!=',') break;
            i++;
            my_scanf("%u",&a[i]);
    }
    if(i==0) my_printf("No");
    else 
  {
        
             
        int num=i+1;
        unsigned max1,max2;
        max1=a[0];
        for(i=1;i<num;i++)
        {
            if(max1<a[i]) max1=a[i];
        }
   
   
        max2=a[0];
        if(max2==max1) max2=0;
         for(i=1;i<num;i++)
        {
            if(max2<a[i]&&a[i]<max1) max2=a[i];
        }
        if(max2==0) my_printf("No\n");
        else my_printf("%u\n",max2);
   }

    getchar();
    getchar();
    getchar();
}
    
