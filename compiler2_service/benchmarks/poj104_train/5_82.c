#define NUM_ITER 862365

#include <header.h>

int main_bench(){
	double r,x;
	int l,l1,l2,i,j,t=0,flag=0;
	char a[100],b[100];
	my_scanf("%lf",&r);
	my_scanf("%s",a);
    my_scanf("%s",b);
	l1=strlen(a);
	l2=strlen(b);
    for(i=0;i<l1;i++){
		if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G'){
			continue;
		}
		else{
			flag=1;
		}
	}
    for(j=0;j<l2;j++){
		if(b[j]=='A'||b[j]=='T'||b[j]=='C'||b[j]=='G'){
			continue;
		}
		else{
			flag=1;
		}
	}
	if(l1!=l2||flag==1){
		my_printf("error");
		return 0;
	}
	else{
        l=l1;
		for(i=0;i<l;i++){
			if(a[i]==b[i]){
				t=t+1;
			}
		}
		x=(double)t/l;
		if(x>r){
			my_printf("yes");
		}
		else{
			my_printf("no");
		}
	}
	return 0;
}