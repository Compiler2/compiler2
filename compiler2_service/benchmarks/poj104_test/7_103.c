#define NUM_ITER 998401

#include <header.h>

int main_bench()
{
	char s[256],a[256],b[256];
	int l1,i,j,n;
	int flag;
	my_scanf("%s",s);
	my_scanf("%s",a);
	my_scanf("%s",b);
	l1=strlen(a);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==a[0])
		{
			flag=1;
			for(j=i+1;j<(i+l1);j++)
			{
				if (s[j]!=a[j-i])
					flag=0;
				else 
				    flag=1;
			}
			if(flag==1)
			{
				for(n=0;n<i;n++)
					my_printf("%c",s[n]);
				my_printf("%s",b);
				for(n=i+l1;s[n]!='\0';n++)
					my_printf("%c",s[n]);
				return 0;
			}
		}
	}
	my_printf("%s",s);
	return 0;
}