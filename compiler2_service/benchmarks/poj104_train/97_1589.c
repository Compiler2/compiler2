#include <header.h>

int main_bench()
{  
	int n,m,p;
	int hun,fif,twenty,ten,five,one;
	
	my_scanf("%d",&n);
    hun=n/100;
	n=n%100;

	if(n>=50){
		fif=1;
		m=n-50;
	}
	else if(n<50){
		fif=0;
		m=n;
	}
	twenty=m/20;
	m=m%20;
	if(m>=10){
		ten=1;
		p=m-10;
	}
	else if(m<10){
		ten=0;
		p=m;
	}
	if(p>=5){
		five=1;
		one=p-5;
	}
	else if(p<5){
		five=0;
		one=p;
	}

	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",hun,fif,twenty,ten,five,one);
	 
	return 0;
}

