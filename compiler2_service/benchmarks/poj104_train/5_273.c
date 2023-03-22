#define NUM_ITER 878228

#include <header.h>

int main_bench(){
	int l1,l2,l,n,i;
	double p,P;
	char a[501],b[501];
	my_scanf("%lf",&P);
	my_scanf("%s",a);
	my_scanf("%s",b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2){
	    l=l1;
		n=0;
		for(i=0;i<l;i++){
            if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){my_printf("error\n");return 0;}
			if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){my_printf("error\n");return 0;}
		}
	    for(i=0;i<l;i++){
			if(a[i]==b[i]){n++;}
		}
		p=1.0*n/l;
		if(p>P){my_printf("yes\n");}
		else {my_printf("no\n");}
	}
	else {my_printf("error\n");}

	return 0;
}


