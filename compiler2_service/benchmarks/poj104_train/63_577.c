#define NUM_ITER 31

#include <header.h>

int main_bench()
{
    int A[100][100],B[100][100],C[100][100];
    int i,j,k;
    int x1,x2,y1,y2;
    my_scanf("%d %d",&x1,&y1);
    for(i=0;i<x1;i++)
       for(j=0;j<y1;j++)
            my_scanf("%d",&A[i][j]);
    my_scanf("%d %d",&x2,&y2);
    for(i=0;i<x2;i++)
       for(j=0;j<y2;j++)
            my_scanf("%d",&B[i][j]);
    for(i=0;i<x1;i++)
    {
       for(j=0;j<y2;j++)
       {
               C[i][j]=0;
               for(k=0;k<y1;k++)
               C[i][j]=A[i][k]*B[k][j]+C[i][j];
               if(j==0) my_printf("%d",C[i][j]);
               else     my_printf(" %d",C[i][j]);
       }
       my_printf("\n");
    }
    getchar();
    getchar();
}
             
