#define NUM_ITER 878879

#include <header.h>

int main_bench()
{
	char a[500],b[500];
	int len,lmn,sum=0,i,flag=1;
	double n;
	my_scanf("%lf",&n);
	my_scanf("%s%s",a,b);
	len=strlen(a);
	lmn=strlen(b);
	if(len!=lmn)
	{
		my_printf("error");
	}
else

for(i=0;i<len;i++)
{
  if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
{ flag=0;
  my_printf("error");
break;
}
}

if(len==lmn&&flag==1)
{
for(i=0;i<len;i++)
{
	if(a[i]==b[i])
		sum+=1;
}
if((double)sum/len>n)
my_printf("yes");
else
my_printf("no");
}


	return 0;
}