#define NUM_ITER 589

#include <header.h>

int main_bench()
{
       int i,j,row,col,k;
       int a[100][100];
       my_scanf("%d%d",&row,&col);
       for(i=0;i<row;i++)
       {
               for(j=0;j<col;j++)
               {
                       my_scanf("%d",&(a[i][j]));
               }
       }
       for(k=0;k<((col+col%2)/2);k++)
       {
			if(k>row-k-1)continue;
			 for(i=k;i<col-k;i++)
                       {
                               my_printf("%d\n",a[k][i]);
                       }
			if(k+1>row-k-1)continue;
               for(j=k+1;j<=row-k-1;j++)
                       {
                               my_printf("%d\n",a[j][col-k-1]);
                       }
			if(col-k-2<k)continue;
               for(i=col-k-2;i>=k;i--)
                       {
                               my_printf("%d\n",a[row-k-1][i]);
                       }
               for(j=row-2-k;j>=k+1;j--)
                       {
                               my_printf("%d\n",a[j][k]);
                       }
       }
       return 0;
}

