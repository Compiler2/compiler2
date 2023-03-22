#define NUM_ITER 913896

#include <header.h>

int main_bench(){
	int i,m=0;
	float k=0,n;
	char a[502],b[502];
	my_scanf("%f",&n);
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0;i<(strlen(a));i++){
		if(strlen(a)!=strlen(b)){
			m=0;
			break;
		}
		if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G'){
			m++;
			if(a[i]==b[i]){
				k++;
			}
		}else{
			m=0;
			break;
		}
	}
	if(m==0){
		my_printf("error");
	}else{
	    if((k/(strlen(a)*1.00))>n){
		    my_printf("yes");
		}else{
		    my_printf("no");
		}
	}

	return 0;
}

