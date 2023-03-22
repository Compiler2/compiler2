#define NUM_ITER 484

#include <header.h>

int main_bench()
{
    int i,j,k,m,n;
    int **p,**q;
    p=(int **)malloc(100*sizeof(int *));
    for(i=0;i<100;i++)
    {
                      *(p+i)=(int *)malloc(100*sizeof(int));
    }
    my_scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    my_scanf("%d",(*(p+i)+j));
                    }
    }
    for(i=0;i<m+n-1;i++)
    {
                        for(j=0;j<=i;j++)
                        {
                                        if((j<m)&&((i-j)<n)){
                                        if(i==0)
                                        {
                                                my_printf("%d",*(*(p+j)+i-j));
                                        }
                                        else
                                        {
                                                my_printf("\n%d",*(*(p+j)+i-j));
                                        }}
                        }
    }
        return 0;
}