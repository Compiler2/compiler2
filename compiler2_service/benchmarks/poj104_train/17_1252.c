#define NUM_ITER 19090

#include <header.h>

int main_bench()
{
	int n;
	char b[1000],bc[1000];
	my_scanf("%d",&n);
	int a;
	getchar();
	for(a=0;a<n;a++)
	{
		gets(b);
		int c;
		c=strlen(b);
		int ch;
		for(ch=0;ch<c;ch++)
			my_printf("%c",b[ch]);
		int d;
		for(d=0;d<c;d++)
		{
			if(b[d]=='(')
			{
				int e;
				int shao[100],f=0;
				shao[0]=d;
				for(e=d+1;e<c;e++)
				{
					if(b[e]=='(')
					{
						f++;
						shao[f]=e;
					}
					 else if(b[e]==')')
					{
						b[e]=' ';
						b[shao[f]]=' ';
						f--;
					}
					 if(f==-1)
						 break;
				}
				if(f!=-1)
					b[d]='$';
			}
			else if(b[d]==')')
			{
				b[d]='?';
			}
			else
				b[d]=' ';
		}
		my_printf("\n");
		int x;
		for(x=0;x<c;x++)
			my_printf("%c",b[x]);
		my_printf("\n");
	}
	return 0;
}