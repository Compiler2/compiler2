#define NUM_ITER 822334

#include <header.h>

int main_bench(){
	double k,j;
	int i,o;
	char a[500],b[500];
	my_scanf("%lf",&k);
	my_scanf("%s",&a);
	my_scanf("%s",&b);
	int l=strlen(a);
	int p=strlen(b);
	o=0;
	for(i=0;i<l;i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
			p+=500;
		}
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			p+=500;
		}
		if(a[i]==b[i])
			o++;
	}
	if(l!=p) my_printf("error");
	else {j=1.0*o/l;
		if(j>k) my_printf("yes");
		else my_printf("no");
	}
	return 0;
}