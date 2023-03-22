#define NUM_ITER 22034

#include <header.h>

int main_bench()
{
	int n,l,i;char c[10];
	char str[256];
	my_scanf("%d",&n);gets(c);
	while(n--)
	{
		memset(str,0,sizeof(str));
		gets(str);
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			switch(str[i])
			{
			case'A':my_printf("T");break;
			case'T':my_printf("A");break;
			case'C':my_printf("G");break;
			case'G':my_printf("C");break;
			}
		}
		my_printf("\n");
	}
}
