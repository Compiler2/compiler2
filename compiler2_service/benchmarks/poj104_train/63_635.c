#define NUM_ITER 49

#include <header.h>

int main_bench()
{
    int *a,*b,*c,x1,x2,y1,y2,i,j,m,q;
    a=(int *)malloc(100*100*sizeof(int));
    b=(int *)malloc(100*100*sizeof(int));
    c=(int *)malloc(100*100*sizeof(int));
    my_scanf("%d %d",&x1,&y1);
    for(i=0;i<x1;i++)
    for(j=0;j<y1;j++)
    my_scanf("%d",(a+y1*i+j));
    my_scanf("%d %d",&x2,&y2);
    for(i=0;i<x2;i++)
    for(j=0;j<y2;j++)
    my_scanf("%d",(b+i*y2+j));
    m=x2<=y1?x2:y1;
    for(i=0;i<x1;i++)
    for(j=0;j<y2;j++)
    for(q=0;q<m;q++)
    {
        if(q==0)*(c+i*y2+j)=0;
        *(c+i*y2+j)+=*(a+y1*i+q)**(b+q*y2+j);   
    }
    for(i=0;i<x1-1;i++)
    {
        for(j=0;j<y2-1;j++)
        my_printf("%d ",*c++);
        my_printf("%d\n",*c++);
    }
    for(j=0;j<y2-1;j++)
    my_printf("%d ",*c++);
    my_printf("%d",*c);
}