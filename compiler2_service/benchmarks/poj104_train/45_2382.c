#define NUM_ITER 1091253

#include <header.h>


int main_bench()
{
	char zfc1[50],zfc2[50];
	my_scanf("%s",&zfc1);
	my_scanf("%s",&zfc2);

	int len1,len2;
	len1=strlen(zfc1);
	len2=strlen(zfc2);

	int i,j;
	int time=0;
	int re;
	for(i=0;i<=len2-len1;i++)
	{
		for(j=0;j<len1;j++)
		{
			if(zfc1[j]==zfc2[j+i])
			{
				time++;
			}
		}
		if(time==len1)
		{
			re=i;
			break;
		}
		time=0;
	}
	my_printf("%d\n",re);
	return 0;
}