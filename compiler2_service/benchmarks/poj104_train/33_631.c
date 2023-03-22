#define NUM_ITER 26117

#include <header.h>

int main_bench()
{
	int n,i,j;
	char s[256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s);
		int len=strlen(s);
		for(j=0;j<len;j++)
		{
			if(j!=len-1)
			{
				switch(s[j]){
				   case 'A':my_printf("%c",'T');break;
				   case 'T':my_printf("%c",'A');break;
				   case 'C':my_printf("%c",'G');break;
				   case 'G':my_printf("%c",'C');break;
				}
			}
			else
			{
				switch(s[j]){
				   case 'A':my_printf("%c\n",'T');break;
				   case 'T':my_printf("%c\n",'A');break;
				   case 'C':my_printf("%c\n",'G');break;
				   case 'G':my_printf("%c\n",'C');break;
				}
			}
		}
	}
	return 0;
}