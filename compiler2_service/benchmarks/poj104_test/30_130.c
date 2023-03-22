#include <header.h>



int main_bench()
{
	int s1=0,s2=0,i,j;
	int a,b;
	int n;
	my_scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		s1=s1+i*i;
	}
	

	for(j=1;j<=n;j++)
	{
		a=j%10;
     	b=j/10;


		if(a==7||b==7||j%7==0)
		{
			s2=s2+j*j;
		}
	}


	my_printf("%d",s1-s2);
	return 0;
}



