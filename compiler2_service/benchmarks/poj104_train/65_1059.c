#include <header.h>

int main_bench()
{
	int n,a[200],b[200],i,x=0,y=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		if(a[i]==0){
			if(b[i]==1){
				x++;
			}else if(b[i]==2){
				y++;
			}
		}else if(a[i]==1){
			if(b[i]==2){
				x++;
			}else if(b[i]==0){
				y++;
			}
		}else if(a[i]==2){
			if(b[i]==0){
				x++;
			}else if(b[i]==1){
				y++;
			}
		}
	}
	if(x>y){
		my_printf("A");
	}else if(x<y){
		my_printf("B");
	}else{
		my_printf("Tie");
	}
	return 0;
}