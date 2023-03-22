#define NUM_ITER 1198357

#include <header.h>

int main_bench()
{
	char str[100];
	int end,begin,len,i,j;
	gets(str);
	len=strlen(str);
	end=len-1;
	for (i=len;i>=0;i--)
		if (str[i]==' ' || i==0)
		{
			if (i==0) 
				begin=0;
			else
				begin=i+1;
			for (j=begin;j<=end;j++)
				my_printf("%c",str[j]);
			if (i!=0)
				my_printf(" ");
			end=i-1;
		}
	my_printf("\n");
	return 0;
}
	