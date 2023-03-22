#define NUM_ITER 56373

#include <header.h>

int main_bench(){
	int n,i,s,a;
 s=0;
 my_scanf("%d",&n);
for(i=1;i<=n;i++)
{
		a=(i-i%10)/10;
	if(i%7==0)
      continue;
	else if(i%10==7){
	continue;
	
	}
	else if(a==7){
		continue;
	}
	s=s+i*i;
}
   my_printf("%d",s);
    return 0;
}

