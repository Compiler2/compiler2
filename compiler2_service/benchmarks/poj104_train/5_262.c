#define NUM_ITER 920913

#include <header.h>

int main_bench()
{
	int i,len1,len2;
	double n,j=0,e=0;
	char s[501],a[501];
	my_scanf("%lf",&n);
	my_scanf("%s",s);
    my_scanf("%s",a);
	len1=strlen(s);
	len2=strlen(a);
	if(len1!=len2){
		my_printf("error");
		return 0;
	}
	for(i=0;i<len1;i++){
		if((s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G')||(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')){
			my_printf("error");
			return 0;
		}
		if((s[i]=='A'||s[i]=='T'||s[i]=='C'||s[i]=='G'||a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&s[i]==a[i]){
			j=j+1;
		}
	}
	e=j/len1;
    if(e>n){
		my_printf("yes");
	}else if(e<=n){
		my_printf("no");
	}
    return 0;
}

