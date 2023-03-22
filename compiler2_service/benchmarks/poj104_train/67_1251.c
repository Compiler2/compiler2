#define NUM_ITER 36184

#include <header.h>

int main_bench(){
int n,i,x,y;
double b,c;
struct s
 {
  int x;
  int y;
 };
struct s sz[100];
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
	my_scanf("%d%d",&x,&y);
	sz[i].x=x;
	sz[i].y=y;
}
b=sz[0].y *1.0 /sz[0].x; 
for(i=1;i<n;i++)
{
    c=sz[i].y *1.0 /sz[i].x; 
    if (c-b>0.05)
	{
        my_printf ("better\n");
	}
    else if (b-c>0.05)
	{
        my_printf("worse\n");
	}
	else
	{
		my_printf("same\n");
	}

}
return 0;
}