#define NUM_ITER 500

#include <header.h>

int row,col,*a;
int main_bench()
{
void out(int i,int j,int k);
int i;
my_scanf("%d %d",&row,&col);
a=(int *)malloc(row*col*sizeof(int));
for(i=0;i<row*col;i++)
my_scanf("%d",&a[i]);
my_printf("%d",a[0]);
for(i=1;i<col;i++)
out(i,i,0);
for(i=1;i<row;i++)
out(i,col-1,i);

return 0;
}

void out(int i,int j,int k)
{
while(j!=-1&&k!=row)
{
my_printf("\n%d",*(a+k*col+j));
j--;k++;
}
}