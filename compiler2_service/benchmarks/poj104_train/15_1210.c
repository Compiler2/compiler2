#define NUM_ITER 678

#include <header.h>

int main_bench(){
  	int n,s[100][100],x;
	my_scanf("%d",&n);
    int a1=n-1,a2=0,b1=n-1,b2=0;
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			my_scanf("%d",&s[i][j]);
            if(s[i][j]==0){
				if(i<a1)
					a1=i;
				if(i>a2)
					a2=i;
				if(j<b1)
					b1=j;
				if(j>b2)
					b2=j;
			}
        }
	}
	x=(b2-b1-1)*(a2-a1-1);
	my_printf("%d",x);
	return 0;
}