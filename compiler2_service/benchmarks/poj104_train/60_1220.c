#define NUM_ITER 4120

#include <header.h>

int main_bench()
{
	int i,j,c,n,k=0,b=0,x=0;
	int a[10000];
	my_scanf("%d",&n);
	for(i=2;i<=n;i++){
		b = 0;
		for(j=2;j<i;j++){
			if(i%j!=0){
				b++;
			}
		}
		if(b==i-2){
			a[k]=i;
			k++;
		}
	}
	for(c=0;c<k-1;c++){
		if(a[c+1]-a[c]==2){
			my_printf("%d %d\n",a[c],a[c+1]);
		}else{
                    x++;
                  }
	}
         if(x==k-1){
                my_printf("empty");
         }
	return 0;
}

