#define NUM_ITER 901273

#include <header.h>

int main_bench()
{
	double m;
	my_scanf("%lf",&m);
	char a[500],b[500];
	my_scanf("%s%s",a,b);
	int ci=0;
	int pan=0;
	int aa=strlen(a),bb=strlen(b);
	if(aa!=bb)
	{
		my_printf("error");
	}
	else
	{
		int i;
		for(i=0;i<aa;i++)
		{
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'))
			{
				my_printf("error");
				pan=1;
				break;
			}
			else
				if(a[i]==b[i])
			{
				ci++;
			}
		}
	   double bi=(double)ci/aa;
	  if(pan==0)
	  {
	    if(bi>=m)
		{
		my_printf("yes");
		}
	    else
		{
		my_printf("no");
		}
	  }
	}




	return 0;
}
