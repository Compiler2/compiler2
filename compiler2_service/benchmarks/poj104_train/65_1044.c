#include <header.h>

int main_bench(){
	int n;
	int a[300],b[300];
	my_scanf("%d",&n);
	int i,p=0,q=0;
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0&&b[i]==0){;}
		else if(a[i]==0&&b[i]==1){p++;}
		else if(a[i]==0&&b[i]==2){q++;}
		else if(a[i]==1&&b[i]==0){q++;}
		else if(a[i]==1&&b[i]==1){;}
		else if(a[i]==1&&b[i]==2){p++;}
		else if(a[i]==2&&b[i]==0){p++;}
		else if(a[i]==2&&b[i]==1){q++;}
		else if(a[i]==2&&b[i]==2){;}
	}
	if(p>q){my_printf("A");}
	else if(p<q){my_printf("B");}
	else if(p=q){my_printf("Tie");}
	return 0;
}