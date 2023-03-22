#define NUM_ITER 1344092

#include <header.h>

void pei(char a[250])
{
	int t=strlen(a);
	int i;
	for(i=0;i<t-1;i++)
	{
		if(a[i]=='}')
		{
			int s=i-1;
			while(a[s]=='0')
				s--;
			while(a[s]!='{')
				s--;
			a[s]='0';
			a[i]='0';
			my_printf("%d %d",s,i);
			my_printf("\n");
		}
		else
			if(a[i]==')')
			{
			int s=i-1;
			while(a[s]=='0')
				s--;
			while(a[s]!='(')
				s--;
			a[s]='0';
			a[i]='0';
			my_printf("%d %d",s,i);
			my_printf("\n");
		}
			else
				if(a[i]==']')
			{
			int s=i-1;
			while(a[s]=='0')
				s--;
			while(a[s]!='[')
				s--;
			a[s]='0';
			a[i]='0';
			my_printf("%d %d",s,i);
			my_printf("\n");
		}
				else
						if(a[i]=='>')
			{
			int s=i-1;
			while(a[s]=='0')
				s--;
			while(a[s]!='<')
				s--;
			a[s]='0';
			a[i]='0';
			my_printf("%d %d",s,i);
			my_printf("\n");
		}



	}
	i=0;
my_printf("%d %d",i,t-1);
}
int main_bench()
{
	char a[250];
	gets(a);
	pei(a);
}