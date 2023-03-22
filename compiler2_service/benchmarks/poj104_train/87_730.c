#define NUM_ITER 11841

#include <header.h>

int main_bench()
{
int a,b,c,d,e,f,s,i;
for(i=1;a!=0;i++){
my_scanf("%d" "%d" "%d" "%d" "%d" "%d",&a,&b,&c,&d,&e,&f);
if (a==0){
break;}
f=f-c;
if(e>=b){
	e=(e-b)*60;}
else if(e<b){
	e=(60+e-b)*60;
b=-1;}
if(b==-1){
	d=(11+d-a)*3600;}
else if(b!=-1){
	d=(12+d-a)*3600;}    
s=d+e+f;
my_printf("%d\n",s);}
return 0;
}