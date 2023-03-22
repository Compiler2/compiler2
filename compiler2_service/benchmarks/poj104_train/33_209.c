#include <header.h>


int main_bench()
{
	int i,j,len,n;
	char ch,str[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",str);
		len=strlen(str);
		for(j=0;j<len;j++)
		{
			
			switch(str[j])
			{
			case 'A':
				str[j]='T';
				break;
			case 'T':
				str[j]='A';
				break;
			case 'C':
				str[j]='G';
				break;
			case 'G':
				str[j]='C';
				break;
			}
		}
		my_printf("%s",str);
                my_printf("\n");
                
	}
	return 0;
}
