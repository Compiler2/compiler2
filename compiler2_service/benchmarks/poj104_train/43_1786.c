#define NUM_ITER 54234

#include <header.h>

int main_bench(){
	int m,i,j,t,k;
	my_scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2){
		for(j=3;j<i;j=j+2)
			if(i%j==0)
				break;
		if(j<i)
			continue;
		else{
			t=m-i;
			for(k=3;k<t;k=k+2)
				if(t%k==0)
					break;
			if(k==t)
				my_printf("%d %d\n",i,t);
		}
	}
	return 0;
}