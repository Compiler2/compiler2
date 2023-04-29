#define NUM_ITER 49

#include <header.h>

int main_bench()
{
    int n;
    int a,b;
    int i,j,k,l;
    int s;
    my_scanf("%d",&n);
    int *p=(int*)malloc(n*n*sizeof(int));
    int *q=(int*)malloc(n*n*sizeof(int));
    for(l=0;l<n*n;l++)
    {
        p[l]=0;
        q[l]=0;
    }

    for (k=0;k<n*n;k++)
    {
        my_scanf("%d %d",&a,&b);
       if(a==0&&b==0)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            if(a==i)
            {
                p[i]=p[i]+1;
            }
            if(b==i)
            {
                q[i]=q[i]+1;
            }

        }


    }
    for(j=0;j<n;j++)
        {
            if(p[j]==0&&q[j]==(n-1))
            {
                s=0;
                s++;
                my_printf("%d\n",j);
            }
        }
    if(s==0)
    {
        my_printf("NOT FOUND");
    }

    free(p);
    free(q);
    return 0;
}
