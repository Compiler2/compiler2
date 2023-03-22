#define NUM_ITER 1548094

#include <header.h>

int main_bench()
{
	char children[100];
	gets(children);
	int boys[50],i,top=0;
	boys[0] = 0;
	for(i=1; children[i]; i++)
		if(children[i] == children[0])
			boys[++top] = i;
		else
			my_printf("%d %d\n", boys[top--], i);
	return 0;
}