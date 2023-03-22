#define NUM_ITER 27

#include <header.h>

int main_bench()
{
    int N,**p,i,j,sum,m,n,l;
    my_scanf("%d",&N);
    for(l=0,sum=0;l<N;l++)
    {
        my_scanf("%d %d",&m,&n);
        p=(int**)malloc(m*sizeof(int*));
        for(i=0;i<m;i++)
        *(p+i)=(int*)malloc(n*sizeof(int));
        for(i=0;i<m;i++)
          for(j=0;j<n;j++)
            {
                my_scanf("%d",*(p+i)+j);
                if(i==0||j==0||i==m-1||j==n-1)
                sum+=*(*(p+i)+j);
            }
            my_printf("%d\n",sum);
            sum=0;
    }
}
