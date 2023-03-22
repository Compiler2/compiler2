#define NUM_ITER 35536

#include <header.h>

int main_bench()
{
 int a,b,max=0,t=0,n,i;
 my_scanf("%d",&n);
 for(i=1;i<n;i++){
	my_scanf("%d %d",&a,&b);
	if(a>=90&&a<=140&&b>=60&&b<=90){t++;}
	else{
		if(t>=max){max=t;}
		t=0;
	}
	}
 my_scanf("%d %d",&a,&b);
 if(a>=90&&a<=140&&b>=60&&b<=90){t++;}
 if(t>=max){max=t;}
  my_printf("%d",max);
 return 0;
}
