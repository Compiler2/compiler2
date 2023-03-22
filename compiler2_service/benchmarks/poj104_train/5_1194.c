#include <header.h>

int main_bench()
{
	double m=0.0;
         int t,i,r;
	double n;
	my_scanf("%lf",&n);
	char z[100],c[100];
	my_scanf("%s",z);
	my_scanf("%s",c);
	t=strlen(z);
	r=strlen(c);
	if(t!=r){
		my_printf("error");
	}
	else{
		for(i=0;i<t;i++){
			if((z[i]!='A'&&z[i]!='T'&&z[i]!='C'&&z[i]!='G')||(c[i]!='A'&&c[i]!='T'&&c[i]!='C'&&c[i]!='G')){
				my_printf("error");
				return 0;
			}
			if(z[i]==c[i]){
				m++;
			}
		}
		if(1.0*m/t>n){
			my_printf("yes");
		}
                  else{
                           my_printf("no");
                  }
	}
	return 0;
}