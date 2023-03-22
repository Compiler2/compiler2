#define NUM_ITER 862434

#include <header.h>

int main_bench()
{
char a[600],b[600];
double n,x;
my_scanf("%lf\n",&n);
gets(a);
gets(b);
int i,j,a1,b1,xiangtong=0,zhengfou=1,y=0;
a1=strlen(a);
b1=strlen(b);
if(a1!=b1)
{my_printf("error");y=1;}
else
{
	for(i=0;i<a1;i++)
	{
	if(a[i]==b[i])
		xiangtong++;
    if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')
		zhengfou=0;
    if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
		zhengfou=0;
	}
}
if(zhengfou==0)
my_printf("error");
else
if(y!=1)
{
  x=xiangtong*1.0/a1;
  if(x<=n)
	  my_printf("no");
  else
	  my_printf("yes");

}
return 0;
}