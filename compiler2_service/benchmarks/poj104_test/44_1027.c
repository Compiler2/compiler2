#define NUM_ITER 529411

#include <header.h>

int main_bench()
{
int a[6];
int i;
int reverse(int num);
for(i=0;i<6;i++)
my_scanf("%d",&a[i]);
for(i=0;i<6;i++)
my_printf("%d\n",reverse(a[i]));
return 0;
}
int reverse(int z)
{
int b=0;
if(z>=10||z<=-10)
{
while(z>=10||z<=-10)
	{
        b=b*10+z%10;
		z/=10;
	}
	b=b*10+z;
return (b);
}
else 
{
b=z;
return(b);
}
}
