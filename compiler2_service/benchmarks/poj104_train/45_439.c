#define NUM_ITER 1157344

#include <header.h>

int main_bench()
{
	int i=0,k=1,re;
	char s[50],w[50],*p,*q;
	p=w;
	q=s;
	my_scanf("%s",s);
	my_scanf("%s",w);
	for(;*(p+i)!='\0';i++)
	{
		if(*(p+i)==*q)
		{
			re=i;
			while(*q!='\0')
			{
				if(*(p+i)!=*q)
				{
					k=0;
					break;
				}
				q++;i++;
			}
		
			if(k)
			{
				my_printf("%d",re);
				break;
			}
		}
	}
}

