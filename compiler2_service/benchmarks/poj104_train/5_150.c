#include <header.h>


int main_bench()
{
	char z[2][650];
	double res;
	my_scanf("%lf",&res);
	my_scanf("%s",z[0]);
	my_scanf("%s",z[1]);
	int n=strlen(z[0]);
	int n2=strlen(z[1]);
	res=res*1.0*n;
	int h=0,refer=0;
	for(int i=0;i<n;i++)
	{
		if(z[0][i]!='A' && z[0][i]!='T' && z[0][i]!='G' && z[0][i]!='C') 
		{
			my_printf("error");
			refer=1;
			break;
		}
		 else if(z[1][i]!='A' && z[1][i]!='T' && z[1][i]!='G' && z[1][i]!='C')
		{
			my_printf("error");
			refer=1;
			break;
		}
		else if(z[0][i]==z[1][i])
		{
			h++;
		}
	}
	if(refer==0){
		if(n!=n2) my_printf("error");
		else if(h>=res)
		{
			my_printf("yes");
		}
		else
		{
			my_printf("no");
		}
	}
	return 0;
}
