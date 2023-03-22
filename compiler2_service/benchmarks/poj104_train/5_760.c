#define NUM_ITER 981484

#include <header.h>

int main_bench(){
	int n,i,m=0;
	double j;
	char a[2000],b[2000];
	my_scanf("%lf%s%s",&j,a,b);
	if(strlen(a)!=strlen(b)){
		my_printf("error");
		return 0;
	}else{
		n=strlen(a);
		for(i=0;i<n;i++){
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
				my_printf("error");
				return 0;
			}
		}
	    for(i=0;i<n;i++){
		    if(a[i]==b[i])
			    m++;
		}
	    if(1.0*m/n>j)
			my_printf("yes");
		else
			my_printf("no");
	}
    return 0;
}