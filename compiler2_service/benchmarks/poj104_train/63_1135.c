#define NUM_ITER 49

#include <header.h>


int main_bench()
{
    int a[100][100],b[100][100],c[100][100]={0};
    int m,d,n;
    int i,j,k;
    
    my_scanf("%d %d",&m,&d);
    for(i=0; i<m; i++)
        for(j=0; j<d; j++)
            my_scanf("%d",&a[i][j]);
    my_scanf("%d %d",&d,&n);
    
    for(i=0; i<d; i++)
        for(j=0; j<n; j++)
            my_scanf("%d",&b[i][j]);

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            for(k=0; k<d; k++)
                c[i][j]+=a[i][k]*b[k][j];

    for(i=0; i<m; i++)
    {
        for(j=0; j<n-1; j++)
        {
            my_printf("%d ",c[i][j]);
        }
        my_printf("%d\n",c[i][j]);
    }
}
