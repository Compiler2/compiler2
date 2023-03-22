#include <header.h>

int main_bench(){
	double rate;
	char a[501],b[501];
	my_scanf("%lf",&rate);
	my_scanf("%s%s",a,b);
	int lena,lenb;
	lena=strlen(a);
	lenb=strlen(b);
	int sum=0;
	int zq=0;
	if(lena==lenb){
		int i;
		
		
		for(i=0;i<lena;i++){
			if(a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C'||b[i]=='A'||b[i]=='T'||b[i]=='G'||b[i]=='C'){
				if(a[i]==b[i]){
					sum++;
				}
				zq++;
			
		
			}else{
				my_printf("error");
				break;
			}
		}
	}else{
		my_printf("error");
	}
	double r;
	r=1.0*sum/lena;
	if(zq==lena){
		if(r>rate){
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}
	return 0;
}

	
