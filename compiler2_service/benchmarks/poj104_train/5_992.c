#define NUM_ITER 867082

#include <header.h>

int main_bench()
{
	char x[1000],y[1000];
	int i,lengthx,lengthy,same=0;
	float rate,a;
	my_scanf("%f",&rate);
	my_scanf("%s %s",x,y);
	lengthx=strlen(x);
	lengthy=strlen(y);
	if(lengthx!=lengthy)my_printf("error\n");
	else
	{
		for(i=0;i<lengthx;i++)
		{
			if((x[i]!='A'&&x[i]!='G'&&x[i]!='C'&&x[i]!='T')||(y[i]!='A'&&y[i]!='G'&&y[i]!='C'&&y[i]!='T'))
				break;
		}
		if(i<lengthx-1)my_printf("error\n");
		else
		{
	       for(i=0;i<lengthx;i++)
		       if(x[i]==y[i])same++;
	       a=(float)same/(float)lengthx;
	       if(a>rate)my_printf("yes\n");
	       else my_printf("no\n");
		}
	}
	return 0;
}