#include <header.h>

int main_bench()
{
	int m,n[100],i,p;
	float a,s[100],b;
	my_scanf("%d",&m);
	for(i=1;i<m;i++){
		my_scanf("%d\n",&n[i]);}
	my_scanf("%d",&n[m]);
	
	for(i=1;i<=m;i++){
		if(n[i]==0)my_printf("0");
		else 
			for(p=1,a=2.0,b=0;p<=n[i];p++){
				b=b+a;a=1+1.0/a;
			s[i]=b;}
	}
    for(i=1;i<=m;i++){my_printf("%.3f\n",s[i]);}}
