#define NUM_ITER 192864

#include <header.h>

int main_bench() {
long int a,b,c,d,e;
my_scanf ("%d%d%d",&a,&b,&c);
if(((a%4==0)&&(a%100!=0))||(a%400==0))
{a=a-1;a=a%2800;
	d=a/400*146097+(a%400)/100*36524+(a%100)/4*1461+(a%4)*365+c;
	for(int i=1;i<=b;i++){
		if((i==2)||(i==6)||(i==8)||(i==9)||(i==11)||(i==4))
		{
			d+=31;}
else if (i==3){d+=29;}
else if (i==1){d=d;}
else {d+=30;}}}
else {a=a-1;a=a%2800;
	d=a/400*146097+(a%400)/100*36524+(a%100)/4*1461+(a%4)*365+c;for(int i=1;i<=b;i++){
	if((i==2)||(i==4)||(i==8)||(i==9)||(i==11)||(i==6)){d+=31;}
else if (i==3){d+=28;}
else if (i==1){d=d;}
else {d+=30;}
}}
e=d%7;
if(e==1){my_printf("Mon.");}
else if(e==2){my_printf("Tue.");}
else if(e==3){my_printf("Wed.");}
else if(e==4){my_printf("Thu.");}
else if(e==5){my_printf("Fri.");}
else if(e==6){my_printf("Sat.");}
else if(e==0){my_printf("Sun.");}



return 0;
}
