#define NUM_ITER 10927

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f;
	int m,n,s;
	my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
	  m=a*3600+b*60+c;
	  n=(d+12)*3600+e*60+f;
	  s=n-m;
	  my_printf("%d\n",s);
      my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

	}

	return 0;
}



