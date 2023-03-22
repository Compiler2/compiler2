#include <header.h>


int main_bench(){ 
	int i,n;
	int sz[100];
	double x,y,z,p;
	int b1=0;
	int b2=0;
	int b3=0;
	int b4=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&(sz[i]));
	}
    i=0;
	while (i<n){
		if((sz[i])<=18){
			b1++;
		}else if((sz[i])<=35){
				b2++;
		}else if((sz[i])<=60){
					b3++;
		}else{
               b4++;
		}
		i++;
	}
     x=1.00*b1/n*100;
	 y=1.0000*b2/n*100;
	 z=1.0000*b3/n*100;
	 p=1.0000*b4/n*100;
	 my_printf("1-18: %.2lf%\n",x);
     my_printf("19-35: %.2lf%\n",y);
     my_printf("36-60: %.2lf%\n",z);
     my_printf("60??: %.2lf%\n",p);


	 return 0;
}
