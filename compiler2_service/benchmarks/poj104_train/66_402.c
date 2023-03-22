#define NUM_ITER 66089

#include <header.h>

int main_bench(){
	int y,m,d,date,a,i,k;
	my_scanf("%d %d %d",&y,&m,&d);
	y=y%2800;
	date=0;
	for(i=1;i<y;i++){
		if((i%400==0)||(i%4==0&&i%100!=0)){
			date+=366;
		}else{
			date+=365;
		}
	}
    for(k=1;k<m;k++){
				if((k==1)||(k==3)||(k==5)||(k==7)||(k==8)||(k==10)||(k==12)){
					date+=31;
				}else if((k==4)||(k==6)||(k==9)||(k==11)){
					date+=30;
				}else if(k==2){
					if((y%400==0)||(y%4==0&&y%100!=0)){
						date+=29;
					}else{
						date+=28;
					}
				}
		}
        date+=d;
		a=date%7;
        if(a==1){
			my_printf("Mon.");
		}else if(a==2){
			my_printf("Tue.");
		}else if(a==3){
			my_printf("Wed.");
		}else if(a==4){
			my_printf("Thu.");
		}else if(a==5){
	 	    my_printf("Fri.");
		}else if(a==6){
			my_printf("Sat.");
		}else{
			my_printf("Sun.");
		}
		return 0;
	}