#include <header.h>

int main_bench()
{
int flag(char x[100],char y[100]);
char stro[100],strt[100];
int f;
my_scanf("%s%s",stro,strt);
f=flag(stro,strt);
if(f==0)
my_printf("YES");
else
my_printf("NO");
}

int flag(char x[100],char y[100])
{
	int i,j,c,m,n;
	m=strlen(x);
	n=strlen(y);
	if(m!=n)
		c=1;
	else
	{
		for(i=0,c=m;i<m;i++)
			for(j=0;j<n;j++)
				if(x[i]==y[j])
				{
					x[i]=0;
					y[j]=0;
					c--;
					break;
				}
				}
	return(c);
}
