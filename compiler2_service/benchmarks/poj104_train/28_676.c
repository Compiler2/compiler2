#define NUM_ITER 1514663

#include <header.h>

int main_bench()
{
	int n[300] ;
	char a[30000];
	gets(a);
	int l = 0 , k = 0;
	for(int i = 0;;i++)
	{
		if((int)a[i] == 0)
		{
			n[l] = k;
			break;
		}
		else if((int)a[i] == 32)
		{
			n[l] = k;
			k = 0;
			l++;
		}
		else
		{
			k++;
		}
	}
	for(int j = 0;j<l;j++)
	{
		if(n[j] != 0)
		{
			my_printf("%d,",n[j]);
	
		}
	}
	my_printf("%d",n[l]);
	return 0;
}