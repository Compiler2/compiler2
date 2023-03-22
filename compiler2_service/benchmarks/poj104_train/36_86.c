#define NUM_ITER 977367

#include <header.h>

int main_bench()
{
	char str1[50],str2[50],*p;
	int a,b,i,j,c[20],d=0;
	my_scanf("%s%s",&str1,&str2);
	a=strlen(str1);
	b=strlen(str2);
p=str2;
	if(a==b)
	{{for(i=0;i<a;i++)
	{c[i]=0;
		for(p=str2;p<a+str2;p++)
	{if(str1[i]==*p)
		{c[i]=1;continue;}
		}
	}}
for(i=0;i<a;i++)
	{if(c[i]==0)
{d=1;break;}}
if(d==1)
{my_printf("NO");}
else
my_printf("YES");
}
	else
		my_printf("NO");
}
