#define NUM_ITER 1073

#include <header.h>

int main_bench() 
{ 
int n,m,k,c;

my_scanf("%d",&n);
while(n--)
{
my_scanf("%d",&m);
int*shuzu=(int*)malloc(sizeof(int)*m);
c=0;
for(int i=0;i<m;i++)
{
my_scanf("%d",&k);
if(c+k<60)
if(c+k+3<60)
c+=3;
else
c=60-k;
}
my_printf("%d\n",60-c);

}
return 0; 
}