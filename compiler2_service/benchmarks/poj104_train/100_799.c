#define NUM_ITER 505794

#include <header.h>

int main_bench()
{
	char zfc[300],*p;
	my_scanf("%s",zfc);
	int a=0;
	char i;
    for(p=zfc;*p!='\0';p++)
	{
		if(*p>='a'&&*p<='z')
			a=a+1;	
	}
	if(a==0)
	my_printf("No");
	a=0;
	for(i=97;i<=123;i++)
	{
		for(p=zfc;*p!='\0';p++)
		{
			if(*p==i)
				a+=1;
		}
	if(a==0)
		continue;
	my_printf("%c=%d\n",i,a);
	a=0;
	}

return 0;


}