#include <header.h>

int main_bench()
{
int row,col;
int i,j,m,span=0;
my_scanf("%d%d",&row,&col);
int array[100][100];
for(i=0;i<row;i++)
   for(j=0;j<col;j++)
    my_scanf("%d",&array[i][j]);
   for (m=0;;m++)
   {
    for (i=m;i<col-m;i++)
    {
     my_printf("%d\n",array[m][i]);
     span++;
    }
    my_printf("\n");
    if(span==row*col)break;
    for (j=m+1;j<row-m;j++)
    {
     my_printf("%d\n",array[j][col-m-1]);
     span++;
    }
    my_printf("\n");
    if(span==row*col)break;
    for (i=col-2-m;i>=m;i--)
    {
     my_printf("%d\n",array[row-m-1][i]);
     span++;
    }
    my_printf("\n");
    if(span==row*col)break;
    for (j=row-2-m;j>m;j--)
    {
     my_printf("%d\n",array[j][m]);
     span++;
    }
    my_printf("\n");
    if(span==row*col)break;
   }
   return 0;
}

