#include <header.h>

int main_bench()
{
	int n;
	double s=2;
	my_scanf("%d",&n);
	int i;
	if(n==0){
		s=1;
	}
	if(n==1){
		s=2;
	}
	if(n>=2){	
	  for(i=2;i<=n;i++){
		  s=s*2;
	  }
	}
	my_printf("%.0lf",s);
	return 0;
}
