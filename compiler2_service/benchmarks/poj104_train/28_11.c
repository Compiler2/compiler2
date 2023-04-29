#define NUM_ITER 170285

#include <header.h>

int main_bench()
{
	char c;
	int word=0,len,i,l=0,ans[300];
	while (1)
	{
		my_scanf("%c",&c);
		if (c!=' '&&c!='\n'&&word==0)
			{
				word=1;
				len=1;
			}
			else if ((c==' '||c=='\n')&&word==1)
			{
				word=0;
				ans[l++]=len;
			}
			else len++;
		if (c=='\n') break;
	}
	for (i=0;i<l;i++)
	{
		if (i!=0) my_printf(",");
		my_printf("%d",ans[i]);
	}
	my_printf("\n");
	return 0;
}