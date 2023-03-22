#define NUM_ITER 1196108

#include <header.h>

int main_bench()
{
	char s1[50];
	char s2[50];
	int i,k,x=0,m;
	char c;
	my_scanf("%s",s1);
	my_scanf("%s",s2);
	for(i=0;(c=s2[i])!='\0';i++)
	{
		if(s1[0]==s2[i])
		{
			for(k=i+1;k<strlen(s1);k++)
			{
				if(s1[k-i]!=s2[k])
				{
					x=1;
				}
			}
			if(x!=1)
			{
				m=i;
				break;
			}
		}
	}
	my_printf("%d",m);
	return 0;
}