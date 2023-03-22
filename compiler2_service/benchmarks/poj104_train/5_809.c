#include <header.h>

int main_bench(){
int i,lem,len,q;
double p,l;
char m[501],n[501];
my_scanf("%lf\n",&p);
my_scanf("%s\n",m);
my_scanf("%s",n);
lem=strlen(m);
len=strlen(n);
if(lem!=len)
{
my_printf("error");
return 0;
}
else
q=len;
int r=0;
for(i=0;i<q;i++)
{
	if(((m[i]!='A')&&(m[i]!='T')&&(m[i]!='C')&&(m[i]!='G'))||((n[i]!='A')&&(n[i]!='T')&&(n[i]!='C')&&(n[i]!='G')))
	{
		my_printf("error");
		break;
	}
	else if(m[i]==n[i])
	{
		r++;
	}
}
if(i==q)
{l=1.0*r/q;
if(l>=p)
my_printf("yes");
else if(l<p)
my_printf("no");
}

return 0;
}
  
