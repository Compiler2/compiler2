#include <header.h>

int main_bench()
{
    int n,s,t,i=2;
	my_scanf("%d",&n);
	s=n;
	if(n==1)
		my_printf("End");
	else {
	while(i!=1){
		if(s%2==0){
			t=s/2;
			my_printf("%d/2=%d\n",s,t);
            s=t;
		}
        else{
            t=s*3+1;
			my_printf("%d*3+1=%d\n",s,t);
			s=t;
		}
		i=s;
	}
	my_printf("End\n");
	}
	return 0;
}

