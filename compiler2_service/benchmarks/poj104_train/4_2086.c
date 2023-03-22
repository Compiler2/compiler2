#define NUM_ITER 522

#include <header.h>

int main_bench()
{
int n[100][100],i,j,a,b,x;
my_scanf("%d %d",&a,&b);
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
my_scanf("%d",&n[i][j]);
}
for(int m=0;m<b;m++)
{
    int c=0;
    for(i=m;i>=0&&c<a;i--,c++)
        my_printf("%d\n",n[c][i]);
}
 int y; 

for(x=1;x<a;x++)
{   
     y=b-1;
    for(j=x;j<a&&y>=0;j++,y--)
     my_printf("%d\n",n[j][y]);
 }
int z;
my_scanf("%d",&z);
return 0;
}



