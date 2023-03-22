#include <header.h>

int main_bench(){
	int n,a[200],b[200],x,y,i;
	my_scanf("%d",&n);
	x=0;
	y=0;
	for(i=0;i<n;i++){
		my_scanf("\n%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==b[i]-1||a[i]-b[i]==2){x++;}
		else if(a[i]-b[i]==1||b[i]-a[i]==2){y++;}
	}
	if(x>y){my_printf("A");}
	else if(x<y){my_printf("B");}
	else if(x=y){my_printf("Tie");}
	return 0;
}