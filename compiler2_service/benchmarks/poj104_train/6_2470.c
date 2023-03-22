#include <header.h>

int main_bench()
{
    int *p[400],m,n,a,i,j,k,l,sum,counter,b,matrix[100][100];
    my_scanf("%d",&a);
    for(k=0;k<a;k++)
    {
                    sum=0;
                    counter=0;
                    my_scanf("%d %d",&m,&n);
                    for(i=0;i<m;i++)
                    {
                                    for(j=0;j<n;j++)
                                    {
                                                    my_scanf("%d",&matrix[i][j]);
                                                    if(i==0||i==m-1||j==0||j==n-1)
                                                    {
                                                              p[counter]=&matrix[i][j];
                                                              counter++;
                                                    }
                                    }
                    }
                    for(l=0;l<counter;l++)
                    {
                                          sum+=*p[l];
                    }
                    my_printf("%d\n",sum);
    }
    return 0;
} 