#include <header.h>

int h(char s[1000]){
	int i;
	for (i=0;i<strlen(s);i++){
		if (s[i]!='A'&&s[i]!='G'&&s[i]!='T'&&s[i]!='C'){
			i=1;
			break;
		}
	}
    if(i!=1){
		i=0;
	}
	return i;
}
int main_bench() {
	double c,d,e ;
	int j;
	char a[1000],b[1000];
    my_scanf("%lf",&c);
	my_scanf("%s",a);
	my_scanf("%s",b);
	if (strlen(a)!=strlen(b)){
		my_printf("error");
	}
	else if(h(a)||h(b)){
		my_printf("error");
	}
	else {
		e=0;
		for (j=0;j<strlen(a);j++){
			if (a[j]==b[j]){
				e++;
			}
		}
		d=e/strlen(a);
		if (d>=c){
			my_printf("yes");
		}
		else {
			my_printf("no");
		}
	}
	return 0;
}

