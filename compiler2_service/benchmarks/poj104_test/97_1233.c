#include <header.h>

int main_bench(){
	int s,a=0,b=0,c=0,d=0,e=0,f=0;
	my_scanf("%d",&s);
	if(s/100!=0){
		a=s/100;
		s=s-(s/100*100);
	}
	if(s/50!=0){
        b=s/50;
		s=s-(s/50*50);
	}
	if(s/20!=0){
        c=s/20;
		s=s-(s/20*20);
	}
	if(s/10!=0){
        d=s/10;
		s=s-(s/10*10);
	}
	if(s/5!=0){
        e=s/5;
		s=s-(s/5*5);
	}
    f=s;
	my_printf("%d\n",a);
    my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
	my_printf("%d\n",f);
	return 0;
}
