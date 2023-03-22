#include <header.h>

int main_bench()
{
	int i,awin,bwin,n;
	int a[220],b[220];
	my_scanf("%d",&n);
	awin=0;
	bwin=0;
	for(i=1;i<=n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0&&b[i]==2){
			bwin++;
		}else{
			if(a[i]==2&&b[i]==0){
				awin++;
			}else{
				if(a[i]>b[i]){
					bwin++;
				}else{
					if(b[i]>a[i]){
						awin++;
					}else{
						continue;
					}
				}
			}
		}
	}
	if(awin>bwin){
		my_printf("A");
	}else{
		if(bwin>awin){
			my_printf("B");
		}else{
			my_printf("Tie");
		}
	}
	return 0;
}