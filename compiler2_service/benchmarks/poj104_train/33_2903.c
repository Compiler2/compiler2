#include <header.h>


int main_bench()
{	int i,len,n;
	char str[256],str2[256];
	my_scanf("%d",&n);
	while(n>0)
	{
		my_scanf("%s",str);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(str[i]=='A')
				str2[i]='T';
			if(str[i]=='T')
				str2[i]='A';
			if(str[i]=='C')
				str2[i]='G';
			if(str[i]=='G')
				str2[i]='C';
		}
		str2[len]='\0';
		my_printf("%s\n",str2);

		n--;
	}

	return 0;
}

