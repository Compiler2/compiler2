#define NUM_ITER 37398

#include <header.h>

int main_bench(){
	int c=0,d=0,i,n,a[200],b[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
    for(i=0;i<n;i++){
		if(a[i]==0&&b[i]==1||a[i]==1&&b[i]==2||a[i]==2&&b[i]==0) c++;
		else if(a[i]==b[i]){
			c=c;d=d;
		}else d++;
	}
	if(c>d) my_printf("A");
	else if(c<d) my_printf("B");
	else my_printf("Tie");
	return 0;
}