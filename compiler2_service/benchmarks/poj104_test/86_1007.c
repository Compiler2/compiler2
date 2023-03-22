#include <header.h>

int main_bench() 
{ 
int n,m,c;

my_scanf("%d",&n);
while(n--)
{
my_scanf("%d",&m);
int*shuzu=(int*)malloc(sizeof(int)*m);
c=0;
for(int i=0;i<m;i++)
{
my_scanf("%d",&shuzu[i]);
if(c+shuzu[i]<60)
if(c+shuzu[i]+3<60)
c+=3;
else
c=60-shuzu[i];
}
free(shuzu);
my_printf("%d\n",60-c);
}
return 0; 
}