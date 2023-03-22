#define NUM_ITER 901056

#include <header.h>

int main_bench(){
	double n,m;
	int i,a,b,c,d,e;
	char w[501],f[501];
	my_scanf("%lf",&n);
	my_scanf("%s%s",w,f);
	a=0;
	b=0;
	c=strlen(w);
	d=strlen(f);
	e=0;
	if(c!=d){
		e=1;
	}	
	else{	
		for (i=0;i<c;i++){
			if(!(w[i]=='A'||w[i]=='C'||w[i]=='T'||w[i]=='G')){
			e=1;
			break;
			}
		}
		for (i=0;i<d;i++){
			if(!(f[i]=='A'||f[i]=='C'||f[i]=='T'||f[i]=='G')){
			e=1;
			break;
			}
		}
	}
	if (e==1){my_printf("error");
	}
	else{
		for(i=0;i<d;i++){
			if(w[i]==f[i]){
			a++;
			}
			b++;
		}
		m=1.0*a/b;
		if(m>=n){my_printf("yes");
		}
		else if(m<n){my_printf("no");
		}
	}
	return 0;
}



