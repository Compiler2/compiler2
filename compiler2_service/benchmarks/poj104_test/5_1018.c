#include <header.h>

int main_bench(){
	int b,c,i,j1,j;
	double a,m,n;
	char s1[100],s2[100];
	c=0;
	my_scanf("%lf",&a);
	my_scanf("%s",s1);
	my_scanf("%s",s2);
	if(strlen(s1)!=strlen(s2)){
		my_printf("error");
		return 0;
	}else{
		for(i=0;s1[i]!='\0';i++){
			if(s1[i]!='A'&&s1[i]!='G'&&s1[i]!='C'&&s1[i]!='T'||s2[i]!='A'&&s2[i]!='G'&&s2[i]!='C'&&s2[i]!='T'){
				my_printf("error");
				return 0;
			}else{
				if(s1[i]==s2[i]){
					c++;
				}
			}
		}
	}
	m=1.0*strlen(s1);
	n=1.0*c;
	if(n/m>a){
		my_printf("yes");
	}else{
		my_printf("no");
	}
		return 0;
}
