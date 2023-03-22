#define NUM_ITER 968211

#include <header.h>

int main_bench(){
	int i,j,f=1;
	char a[2][255];
	double x,k,t=0;
	my_scanf("%lf",&x);
	for(i=0;i<2;i++){
		my_scanf("%s",a[i]);
	}
	k=strlen(a[0]);
	for(j=0;j<k;j++){
		    if((a[0][j]!='A'&&a[0][j]!='C'&&a[0][j]!='T'&&a[0][j]!='G')||(a[1][j]!='A'&&a[1][j]!='T'&&a[1][j]!='C'&&a[1][j]!='G')){my_printf("error");f=0;break;}
			if(a[0][j]==a[1][j]){t++;}
	}
	if(f==1){
		if(t/k>x){my_printf("yes");}
		else{my_printf("no");}
	}
	
	return 0;
}