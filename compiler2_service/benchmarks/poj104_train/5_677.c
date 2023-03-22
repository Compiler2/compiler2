#include <header.h>

int main_bench(){
	int c,d,i;
	double q,p,e=0;
	my_scanf("%lf",&p);
	char a[501],b[501];
	my_scanf("%s",a);
	my_scanf("%s",b);
	c=strlen(a);
	d=strlen(b);
	if(c!=d)
		my_printf("error");
	else{
		for(i=0;i<d;i++){
			if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')
			{
				my_printf("error");
				break;
			}
			else if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
				my_printf("error");
			    break;
			}
			else if(a[i]==b[i])
				e++;
		}
		if(i==d){
			q=e/d;
			if(q>=p)
				my_printf("yes");
			else
				my_printf("no");
		}
	}
	return 0;
}