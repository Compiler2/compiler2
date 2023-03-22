#define NUM_ITER 877239

#include <header.h>

int main_bench()
{
	int i,n,l1,l2,j,k=1;
	char d[2][501];
	double g,e,m;
	my_scanf("%lf",&g);
	my_scanf("%s",d[0]);
	my_scanf("%s",d[1]);
	l1=strlen(d[0]);
	l2=strlen(d[1]);
	if(l1!=l2){
		my_printf("error");
	}else{
		for(j=0;j<2;j++){
			for(i=0;i<l1;i++){
				if(d[j][i]!='A'&&d[j][i]!='T'&&d[j][i]!='C'&&d[j][i]!='G'){
					k=0;
					break;
				}
				if(k==0){
					break;
				}
			}
		}
		if(k==1){
			for(i=0;i<l1;i++){
				if(d[0][i]==d[1][i]){
					e++;
				}
			}
		}
	}
	if(l1==l2){
		if(k==1){
			m=1.0*e/l1;
			if(m>g){
				my_printf("yes");
			}else{
				my_printf("no");
			}
		}else{
			my_printf("error");
		}
	}
	return 0;
}
