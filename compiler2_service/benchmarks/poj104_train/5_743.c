#include <header.h>

int main_bench(){
	double rate,realrate;
	char a[500],b[500];
	int len,lenb,yes=0;
	my_scanf("%lf",&rate);

	my_scanf("%s",a);
	my_scanf("%s",b);
		
	len=strlen(a);
	lenb=strlen(b);
	if(len!=lenb){
		my_printf("error");
		return 0;
	}

	for(int i=0;a[i]!='\0';i++){
            if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
			    my_printf("error");
				return 0;
			}

            if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
			    my_printf("error");
			    return 0;
			}
	        if(a[i]==b[i]){
			    yes++;
			}
	}
    realrate=1.0*yes/len;
	if(realrate>=rate)
		my_printf("yes");
	else my_printf("no");
		
	return 0;
}