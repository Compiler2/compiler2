#define NUM_ITER 6466

#include <header.h>

int main_bench(){
	int n,a,b,c,i,j,m,sz[100];
	my_scanf("%d",&m);
	for(j=0;j<m;j++){
	    my_scanf("%d",&n);
	    a=1;
	    b=1;
	    if(n==1||n==2){
		    c=1;
		}else if(n>=3){
	        for(i=3;i<=n;i++){
		        c=a+b;
		        a=b;
		        b=c;
			}
		}
	    sz[j]=c;
	}
	for(j=0;j<m;j++){
		my_printf("%d\n",sz[j]);
	}
	return 0;
}