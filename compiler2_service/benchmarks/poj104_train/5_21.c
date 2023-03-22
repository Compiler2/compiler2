#include <header.h>

int main_bench(){
	int i,k=0,la,lb;
	double n,s=0;
	char a[500],b[500];
	my_scanf("%lf",&n);
	my_scanf("%s%s",a,b);
	la=strlen(a),lb=strlen(b);
	if(la!=lb){
			k=2;
	}
	else{
		for(i=0;i<la;i++){
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='G'&&b[i]!='T'&&b[i]!='C')){
				k=2;
				break;
			}
		}
		if(k!=2){
			for(i=0;i<la;i++){
				if(a[i]==b[i]){
					s++;
				}
			}
			s=s/la;
			if(s<=n){
				k=1;
			}
			else k=0;
		}
	}
	if(k==1)
		my_printf("no");
	if(k==0) my_printf("yes");
	if(k==2) my_printf("error");
	return 0;
}
	


	
