#define NUM_ITER 63500

#include <header.h>


void insert(int *ma,int tem)
{
if (tem>ma[0]){ ma[1]=ma[0];ma[0]=tem;}
else if (tem>ma[1]){ ma[1]=tem;}
}


int main_bench()
{
int n,i;
int temp,max[2]={0,0};
my_scanf("%d",&n);
for (i=1;i<=n;i++){
     my_scanf("%d",&temp);
     if (temp>max[0]){ max[1]=max[0];max[0]=temp;}
     else if (temp>max[1]){ max[1]=temp;}
     }
 my_printf("%d\n%d",max[0],max[1]);
return 0;
}
