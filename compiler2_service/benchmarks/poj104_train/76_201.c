#define NUM_ITER 4838

#include <header.h>

int main_bench(){
int n,i,j,min,max,have_a_gap=0; 

my_scanf("%d",&n);     

struct Space{
int left,right;
} spaces[n],temp;          

for(i=0;i<n;i++)
{
    my_scanf("%d %d",&spaces[i].left,&spaces[i].right);    
}

for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1-i;j++)
    {
        if(spaces[j].left>spaces[j+1].left)
        {
            temp=spaces[j];
            spaces[j]=spaces[j+1];
            spaces[j+1]=temp;
        }
    }
}

min=spaces[0].left;
max=spaces[0].right;


for(i=0;i<n-1;i++)
{
    if(max<(spaces[i+1].left))    
    {
        have_a_gap=1;
        my_printf("no");
        break;
    }
    else                            
    {
        if(spaces[i+1].right>max) max=spaces[i+1].right;
    }
}

if(have_a_gap==0) my_printf("%d %d",min,max);

return 0;
}