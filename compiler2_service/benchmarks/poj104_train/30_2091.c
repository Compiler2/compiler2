#define NUM_ITER 195653

#include <header.h>

int main_bench()
{
	int n;
	int i=0;
	int cont=0;
	my_scanf("%d", &n);
	while(i<n)
	{
		i++;
		if (i%7==0||i==17||i==27||i==37||i==47||i==57||i==67||i==87||i==97||i==71||i==72||i==73||i==74||i==75||i==76||i==78||i==79) continue;
			cont=cont+i*i;
	}
	my_printf("%d", cont);
    return 0;
}
