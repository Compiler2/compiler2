#define NUM_ITER 676

#include <header.h>

int main_bench()
{
	int n, i=0, j=0, e, f,count=0, num, m, c, d;
    my_scanf("%d", &n);
	count = 0;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			my_scanf("%d", &m);
	          if((m==0)&&(count==0)){
                  c = i;
				  d = j;
				  count = 1;
			  }
			  else if(m==0){
				  e = i;
				  f = j;
			  }
		}
	}
	num = (e - c - 1)*(f - d - 1);
	my_printf("%d", num);
	return 0;
}