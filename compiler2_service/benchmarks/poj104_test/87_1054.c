#define NUM_ITER 1447

#include <header.h>

int main_bench(){
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],D[1000],m1,m2,m;
	for(int i=0;i<1000;i++)
	{
		my_scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&D[i],&e[i],&f[i]);
		d[i]=D[i]+12;
		if(a[i]==0&&b[i]==0&&c[i]==0&&D[i]==0&&e[i]==0&&f[i]==0)
		{
			break;
		}else{
		m1=3600*a[i]+60*b[i]+c[i];
		m2=3600*d[i]+60*e[i]+f[i];
		m=m2-m1;
		my_printf("%d\n",m);}
	}
	return 0;
}
