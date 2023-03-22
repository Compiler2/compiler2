#define NUM_ITER 13664

#include <header.h>

int main_bench(){
     int a,b,c,d,e,f,h,i;
	 for(i=0;i<10000;i++){
	 my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	 if(a!=0){
	 h=(d+12-a)*3600+(e-b)*60+f-c;
	 my_printf("%d\n",h);}
	 else {break;}
	 }
     return 0;
}