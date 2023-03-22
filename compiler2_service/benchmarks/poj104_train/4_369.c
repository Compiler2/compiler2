#define NUM_ITER 564

#include <header.h>

int main_bench()
{int a[100][100],row,col,i,j,k;
 my_scanf("%d%d",&row,&col);
 for(i=0;i<row;i++)
	 for(j=0;j<col;j++)
		 my_scanf("%d",&a[i][j]);
if(row==1)
{for(j=0;j<col;j++)
my_printf("%d\n",a[0][j]);

}
else
{	 for(j=0;j<col;j++)
 {   i=0;
     k=j;
	 while(k>=0&&i<row)
 {     my_printf("%d\n",a[i][k]);
	   k--;
	   i++;
 }
 }
 for(i=1;i<row-1;i++)
 {   j=col-1;
     k=i;
     while(j>=0&&k<row)
	 { my_printf("%d\n",a[k][j]);
	   j--;
	   k++;
	 }
 }
 my_printf("%d\n",a[row-1][col-1]);
}
}