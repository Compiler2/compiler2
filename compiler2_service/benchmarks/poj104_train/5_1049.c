#include <header.h>



int main_bench(){

	int i,a,b;

	double n=0,r;

	char x[500],y[500],z;

	my_scanf("%lf%c",&r,&z);

	gets(x);

	a=strlen(x);

	gets(y);

	b=strlen(y);

	if(a!=b){

		my_printf("error");

	}

	else{

		for(i=0;i<a;i++){

			if((x[i]!='A'&&x[i]!='T'&&x[i]!='C'&&x[i]!='G')||(y[i]!='A'&&y[i]!='T'&&y[i]!='C'&&y[i]!='G')){

				my_printf("error");

				n=-1;
				break;


			}

            else{

				if(x[i]==y[i]){

					n++;

				}

			}

		}
n=n/a;

	if(n>r){

		my_printf("yes");

	}

	else if(n>=0){

		my_printf("no");

	}
	}

	

	return 0;

}