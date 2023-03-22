#define NUM_ITER 27689

#include <header.h>

int main_bench()
{
	int t,i,len,j,a=0,b=1;
	char zfc[100];
	my_scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		my_scanf("%s",zfc);
		len=strlen(zfc);
		for(a=0;a<len;a++)
		{
			for(j=a+1;j<len;j++)
			{
				if(zfc[a]==zfc[j])
				{
					b=0;
					zfc[j]='0';
					break;
				}
				else if(zfc[a]!='0')
					b=1;
			}
			if(b==1)
			{
				break;
			}
			else if(a==len)
			{
				b=0;
				break;
			}
		}
		if(b==1)
		{
			my_printf("%c\n",zfc[a]);
		}
		else
			my_printf("no");
	}

	return 0;
}
