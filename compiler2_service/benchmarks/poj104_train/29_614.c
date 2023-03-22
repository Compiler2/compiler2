#include <header.h>

int main_bench()
{
	int m,n,i,j,fm1=1,fm2=1,fm;
	float s[1000]={0};
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		fm1=1;
                  fm2=1;
                  my_scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			fm=fm1+fm2;
			s[i]+=(float)fm/fm2;
                           fm1=fm2;
                           fm2=fm; 
		}
	}
	for(i=0;i<m;i++)
	{
		my_printf("%.3f\n",s[i]);
	}
	return 0;
}
