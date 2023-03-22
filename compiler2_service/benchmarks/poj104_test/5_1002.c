#include <header.h>



int main_bench()
{
	int i,a;
	int b=0;
	double n,k;
	char l1[500];
	char l2[500];
	a=0;
    my_scanf("%lf",&n);
	my_scanf("%s",l1);
	my_scanf("%s",l2);
	for(i=0;i<strlen(l1);i++){
			if(l1[i]<'A'||l1[i]>'Z'||l2[i]<'A'||l2[i]>'Z'){
				b=1;
			}
		}
	if(strlen(l1)!=strlen(l2)||b==1){
		my_printf("error");
	}else{
		for(i=0;i<strlen(l1);i++){
			if(l1[i]==l2[i]){
				a++;
			}
		}
		k=1.0*a/strlen(l1);
		if(k>n){
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}
	return 0;
}