#define NUM_ITER 39620

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int a[200],b[200];
	int i,t=0,h=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		if(a[i]==b[i]){
		t=t+0;
		h=h+0;
		continue;
		}
		if((a[i]==0 && b[i]==1) || (a[i]==1 && b[i]==2) ||(a[i]==2 && b[i]==0)){
			t++;
			continue;
		}else{
			h++;
			continue;
		}
	}
	if(t>h)my_printf("A");
	if(t<h)my_printf("B");
	if(t==h)my_printf("Tie");

	return 0;
}