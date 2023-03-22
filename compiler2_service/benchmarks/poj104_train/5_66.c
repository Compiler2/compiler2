#define NUM_ITER 905937

#include <header.h>

int main_bench()
{
	int i,q=1;
	double s=0.0,len,res,req;
	char a[1000],b[1000];
	my_scanf("%lf",&req);
	my_scanf("%s",a);
	my_scanf("%s",b);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')
			q=0;
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
			q=0;
	}
	if(q==0) my_printf("error\n");
	else if(q!=0)
	{
		for(i=0;i<len;i++)
		{
		  if(a[i]==b[i])
		  {
			s++;
		  }
	}
	res=s/len*1.0;
	if(req<res) 
	my_printf("yes\n");
	else my_printf("no\n");
	}
		return 0;
}