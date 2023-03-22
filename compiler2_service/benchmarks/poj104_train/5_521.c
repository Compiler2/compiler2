#include <header.h>

int main_bench()
{
	int i,sum=0,m,n;
	double x;
	my_scanf("%lf",&x);
	char c1[501],c2[501];
	my_scanf("%s",c1);
	my_scanf("%s",c2);
    m=strlen(c1);
	n=strlen(c2);
	if(m==n){
		for(i=0;i<m;i++){
			if((c1[i]!='A'&&c1[i]!='T'&&c1[i]!='C'&&c1[i]!='G')||(c2[i]!='A'&&c2[i]!='T'&&c2[i]!='C'&&c2[i]!='G')){
				sum++;
			}
		}
		if(sum!=0){
			my_printf("error");
		}else{
			for(i=0;i<m;i++){
				if(c1[i]==c2[i]){
					sum++;
				}
			}
			if((double)sum/m>x){
				my_printf("yes");
			}else{
				my_printf("no");
			}
		}
	}else if(m!=n){
		my_printf("error");
	}
	return 0;
}
