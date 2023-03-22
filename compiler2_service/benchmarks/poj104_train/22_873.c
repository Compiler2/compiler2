#define NUM_ITER 1455007

#include <header.h>

int main_bench()
{
char p;
int max,submax=-1,i,a;
my_scanf("%d",&a);
max=a;
my_scanf("%c",&p);
while(p==',')
{
my_scanf("%d",&a);
if(max<a)
{
submax=max;
max=a;
}
else if(submax<a&&a!=max)
{
submax=a;
}my_scanf("%c",&p);

}
if(submax==-1)
{
my_printf("No");
}
else
{
my_printf("%d",submax);
}
return 0;
}
