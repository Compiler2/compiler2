#include <header.h>

int main_bench(){
	int n,k,a[1000],b[1000],s=0,c,e=0,i;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		for(c=0;c<n;c++){
			if(a[i]+b[c]==k){
				my_printf("yes");
				e=1;
				break;
			}	}
		if(e==1){break;}
	}
    if(e==0){my_printf("no");}
   return 0;
	}