#define NUM_ITER 31185

#include <header.h>

int main_bench()
{                         
int n,i,a=0,b=0,c=0;
int y[1000][2]={{1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1}};
my_scanf("%d",&n);                                            
for(i=0;i<=n-1;i++)
my_scanf("%d%d\n",&y[i][1],&y[i][2]);           
for(i=0;i<=n-1;i++)
 {if(( y[i][1]==0&&y[i][2]==1)||(y[i][1]==1&&y[i][2]==2)||(y[i][1]==2&&y[i][2]==0))
   a=a+1;
else if(y[i][1]==y[i][2])
   c=c+1;
else b=b+1;}
if(a>b) my_printf("A\n");
else if(a<b)my_printf("B\n");
else my_printf("Tie\n");
}
   