#define NUM_ITER 1260839

#include <header.h>

int main_bench()
{
	int k,i;                
	char a[6];              
	for(i=1;i<=5;i++)       
	{
		a[i]=getchar();
		if(a[i]=='\n')
			break;
	}
	i=i-1;                 
	for(k=i;k>=1;k--)      
		my_printf("%c",a[k]);
	return 0;
}