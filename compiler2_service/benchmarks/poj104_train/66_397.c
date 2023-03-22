#define NUM_ITER 196545

#include <header.h>

int main_bench(){
int a,b,c,m=0,g,k;
    my_scanf("%d%d%d",&a,&b,&c);
	for(int i=1;i<b;i++){
		if(i==2){
	             if(a%400==0||(a%100!=0&&a%4==0)){
			                                      m+=29;}
                 else{
                      m+=28;}}
	    else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			m+=31;}
		else if(i==4||i==6||i==9||i==11){
			m+=30;}}
     k=a-1;
     m=m+c+k*1+k/4+k/400-k/100;
     g=m%7;
	 switch (g){
	 case 0:{my_printf("Sun.");break;}
     case 1:{my_printf("Mon.");break;}
     case 2:{my_printf("Tue.");break;}
     case 3:{my_printf("Wen.");break;}
     case 4:{my_printf("Thu.");break;}
     case 5:{my_printf("Fri.");break;}
     case 6:{my_printf("Sat.");break;}}


return 0;
}

