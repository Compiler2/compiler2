#define NUM_ITER 1298022

#include <header.h>

int main_bench()
{
	char a[501];
	int i,k,len,l;
	gets(a);
	l=strlen(a);
	for(len=2;len<=l;len++)
	{
		for(i=0;i<=l-len;i++)
		{
			if(a[i]==a[i+len-1])
			{
				for(k=1;k<=len/2;k++)
				{
					if(a[k+i]!=a[i+len-1-k])
						break;
				}
				if(k>len/2)
				{
					for(k=i;k<i+len;k++)
						my_printf("%c",a[k]);
					my_printf("\n");
				}
			}
		}
	}
	return 0;
}