#define NUM_ITER 228052

#include <header.h>

int main_bench(){
    int a,b,c;
	int n;
    c=0;
	my_scanf("%d",&n);
	for(a=0;10*a<=n;a++)
	{
		for(b=0;b<=9&&(10*a+b)<=n;b++)
		{
			if(a!=7&&b!=7&&(10*a+b)%7!=0)
			{
                c+=((10*a+b)*(10*a+b));
			}
		}
	}
	my_printf("%d",c);
	return 0;
}