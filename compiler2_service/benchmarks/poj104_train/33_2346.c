#define NUM_ITER 19513

#include <header.h>

int main_bench()
{
	char x[1000];
	int i,changdu,n,t=0;
	my_scanf("%d",&n);
	while(t<n)
	{
		memset(x,0,sizeof(x));
		my_scanf("%s",x);
		changdu=strlen(x);
		for(i=0;i<changdu;i++)
		{
			if(x[i]=='A')my_printf("T");
			else if(x[i]=='T')my_printf("A");
			else if(x[i]=='C')my_printf("G");
			else if(x[i]=='G')my_printf("C");
		}
		my_printf("\n");
		changdu=i=0;
		t++;
	}
	return 0;
}