#define NUM_ITER 561

#include <header.h>


int main_bench()
{int array[100][100];
int row,col,i,j,rowmin,rowmax,colmin,colmax;
my_scanf("%d%d",&row,&col);
for(i=0;i<row;i++)
for(j=0;j<col;j++)
my_scanf("%d",&array[i][j]);
rowmin=0;
rowmax=row-1;
colmin=0;
colmax=col-1;
while(colmin<colmax&&rowmin<rowmax){
for(i=colmin;i<colmax;i++)        
my_printf("%d\n",array[rowmin][i]); 
for(i=rowmin;i<rowmax;i++)
my_printf("%d\n",array[i][colmax]);       
for(i=colmax;i>colmin;i--)
my_printf("%d\n",array[rowmax][i]);
for(i=rowmax;i>rowmin;i--)
my_printf("%d\n",array[i][colmin]);
rowmin++;
rowmax--;
colmin++;
colmax--;}
if(rowmin==rowmax&&colmin<colmax)
{for(i=colmin;i<=colmax;i++)
my_printf("%d\n",array[rowmin][i]);}
else if(rowmin<rowmax&&colmin==colmax)
{for(i=rowmin;i<=rowmax;i++)
my_printf("%d\n",array[i][colmin]);
     }
else if(rowmin==rowmax&&colmin==colmax)
my_printf("%d\n",array[rowmin][colmax]);
  
  return 0;
}
