#include <header.h>

int main_bench(){
	int n,i,j,e=0;

	my_scanf("%d",&n);
    for(i=3;i<=n;i++){
		for(j=2;j<=i;j++){
			if(i%j==0) break;
		}
		if(j==i){
			i=i-2;
	      for(j=2;j<=i;j++){
			if(i%j==0) break;
		  }
		  if(j==i){
			  my_printf("%d %d\n",i,i+2);
			  e++;
		  }
		  i=i+2;
		}
	}
	if(e==0) my_printf("empty\n");



	return 0;
}