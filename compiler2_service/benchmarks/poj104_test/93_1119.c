#include <header.h>

int main_bench(){
int n,q1,q2,q3;
my_scanf("%d",&n);
q1=0;
q2=0;
q3=0;
if (n%3==0) q1=1;
if (n%5==0) q2=1;
if (n%7==0) q3=1;
if ((q1==0)&&(q2==0)&&(q3==0)) my_printf("n");
else{ 
if (q1+q2+q3==3) 
 my_printf("3 5 7");
if (q1+q2+q3==2) {
	if (q1==0) my_printf("5 7");
	if (q2==0) my_printf("3 7");
	if (q3==0) my_printf("3 5");
}
if (q1+q2+q3==1){
if (q1==1) my_printf("3");
if (q2==1) my_printf("5");
if (q3==1) my_printf("7");
}
}
return 0;
}
