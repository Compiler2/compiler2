#include <header.h>

int main_bench()
{
	int b,y,m,d,w; 
         my_scanf("%d%d%d",&y,&m,&d);
         if(m==1){
         m=13;
         y--;}
         if(m==2){
         m=14;
         y--;}
	b=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
        	if(b==1){
		my_printf("Mon.");
	}
	if(b==2){
		my_printf("Tue.");
	}
	if(b==3){
		my_printf("Wed.");
	}
	if(b==4){
		my_printf("Thu.");
	}
	if(b==5){
		my_printf("Fri.");
	}
	if(b==6){
		my_printf("Sat.");
	}
	if(b==0){
		my_printf("Sun.");
	}
return 0;
}


