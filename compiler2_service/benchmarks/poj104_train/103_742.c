#define NUM_ITER 1318853

#include <header.h>

int main_bench()
{
	char x[1000];
	int i,changdu,num=0;
	my_scanf("%s",x);
	changdu=strlen(x);
	for(i=0;i<changdu;i++)
	{
		if(x[i]>='a'&&x[i]<='z')
			x[i]-=32;
	}
	if(changdu==1)my_printf("(%c,%d)",x[0],1);
	for(i=0;i<changdu-1;i++)
	{
		if(x[i]==x[i+1])num++;
		if(x[i]!=x[i+1])
		{
			my_printf("(%c,%d)",x[i],++num);
			num=0;
		}
		if((x[i]==x[i+1])&&(i==changdu-2))my_printf("(%c,%d)",x[i],++num);
		if((x[i]!=x[i+1])&&(i==changdu-2))my_printf("(%c,%d)",x[i+1],1);
	}
	my_printf("\n");
	return 0;
}