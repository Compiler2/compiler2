#define NUM_ITER 924122

#include <header.h>

int main_bench(){
	int q,w,e=0,r=1,i;
	double a,b;
	char A[1000],B[1000];
	my_scanf("%lf",&a);
	my_scanf("%s",A);
	my_scanf("%s",B);
	q=strlen(A);
	w=strlen(B);


	if(q!=w){
		my_printf("error");
		r=-1;
	}else{
		for(i=0;A[i]!='\0';i++){
			
			if((A[i]!='T'&&A[i]!='C'&&A[i]!='A'&&A[i]!='G')||(B[i]!='T'&&B[i]!='C'&&B[i]!='A'&&B[i]!='G')){
				r=-1;
				my_printf("error");
				break;
			}else if(A[i]!=B[i]){
				continue;
			}else if(A[i]==B[i]){
				e++;
			}
		}
	}

	if(r==1){
		b=(e*1.0)/(q*1.0);

		if(b>a){
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}
	return 0;
}


