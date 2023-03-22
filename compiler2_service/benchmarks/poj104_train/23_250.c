#define NUM_ITER 1277411

#include <header.h>

int main_bench()
{
	char str[100],str2[100];int i,j,a;char c;
	gets(str);
	for(j=0;j<100&&((c=str[j])!='\0');j++)
	{}
	j--;
	for(i=j;i>=0;i--)
	{
		if(str[i]==' ')
		{
			for(a=0;a<j-i;a++)
			{
				str2[a]=str[i+1+a];
				my_printf("%c",str2[a]);
			}
			my_printf(" ");
			j=i-1;i=j;
		}
		if(i==0)
		{
			for(a=0;a<=j;a++)
			{
				str2[a]=str[a];my_printf("%c",str2[a]);
			}
		}
	}
	my_printf("\n");
}