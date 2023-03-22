#include <header.h>

int main_bench(){
	double m;
	char a[10000],b[10000];
	my_scanf("%lf",&m);
	my_scanf("%s",a);
	my_scanf("%s",b);
	int l=strlen(a),k=0;
	for(int i=0;i<l;i++){
		if((a[i]=='A'||a[i]=='G'||a[i]=='C'||a[i]=='T')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')){
		    if(a[i]==b[i]){
			   k++;
			}
		}else{
			my_printf("error");
			return 0;
		}
	}
	double j;
	j=1.0*k/l;
	if(j>m){
		my_printf("yes");
	}else{
		my_printf("no");
	}
	return 0;
}
