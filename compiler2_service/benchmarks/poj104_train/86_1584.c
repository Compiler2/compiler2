#define NUM_ITER 1091

#include <header.h>

int main_bench(){
	int m[1000],a[1000][30],i,j,b,c=0,n;
	my_scanf("%d",&n);

	for(i=0;i<n;i++){
		my_scanf("%d",&m[i]);
		for(j=0;j<m[i];j++){
			my_scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<n;i++){
            j=0;
		for(b=1;b<=60;b++){
			c++;
		   if(c==a[i][j]){
			   b+=3;
			   j++;
		   }
		}
		my_printf("%d\n",c);
		c=0;
	}

	return 0;
}
