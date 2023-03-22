#define NUM_ITER 81007

#include <header.h>

int main_bench()
{
	int n,s=0,m;
	my_scanf("%d",&m);
	for(n=1;n<=m;n++){
		if(n%7!=0&&n/10!=7&&(n-(n/10*10))!=7){
              s=s+n*n;
		  }
	}
		  my_printf("%d\n",s);
     return 0;
}

