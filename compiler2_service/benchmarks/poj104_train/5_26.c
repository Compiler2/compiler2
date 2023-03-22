#include <header.h>

int main_bench()
{
	int i,n=0,len1,len2;
	double p;
	char a[501],b[501];
	my_scanf("%lf",&p);
	my_scanf("%s",a);
	my_scanf("%s",b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1!=len2){
		my_printf("error");
		return 0;
	}
	for(i=0;i<len1;i++){
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
			my_printf("error");
			return 0;
		}
		if(a[i]==b[i])
			n++;
	}
	if((double)n/len1>p)
		my_printf("yes");
	else 
		my_printf("no");
	return 0;
}

