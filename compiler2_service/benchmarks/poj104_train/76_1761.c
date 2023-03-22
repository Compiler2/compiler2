#define NUM_ITER 13261

#include <header.h>

int main_bench()
{
    int n,i,k,Max,Min;
    double j;
    my_scanf("%d",&n);
    int *num=(int*)malloc(n*2*sizeof(int));
    for(i=0;i<2*n;i++)my_scanf("%d",num+i);

     for(i=1,Max=0;i<2*n;i=i+2){if(Max<*(num+i)) Max=*(num+i);}
     for(i=0,Min=*(num);i<2*n-1;i=i+2){if(Min>*(num+i)) Min=*(num+i);}
     
     for(j=Min;j<=Max;j=j+0.5)
    {
        for(i=0,k=1;i<2*n;i=i+2)
           {
            if(j>=*(num+i)&&j<=*(num+i+1))
                    {k=0;break;}
           }
        
        if(k) {my_printf("no\n");return 0;}

    }

     my_printf("%d %d",Min,Max);
     return 0;
}
