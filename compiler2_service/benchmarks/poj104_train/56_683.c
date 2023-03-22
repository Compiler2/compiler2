#include <header.h>

long fang(long x);  
 int main_bench() 
 
 { 
 
 
 
 long sum,a,b,i,t,s,p; 
 
 sum=0; 
 
 my_scanf("%d",&a); 
 
 i=4; 
 
 p=10000; 
 
 s=a/p; 
 
 
 
 while(s==0) 
 
 { 

 i=i-1; 
 
 p=fang(i); 
 
 s=a/p; 
 
 } 
 
 
 
 t=i; 
 
 
 
 while(t>=0) 
 
 { 
 
 b=a%10; 
 
 a=a/10; 
 
 sum=sum+fang(t)*b; 
 
 t=t-1; 
 
 }
 
 
 
 my_printf("%d",sum); 
 
 } 
 
 
 
 long fang(long x) 
 
 { 
 
 long i,y; 
 
 i=1; 
 
 y=1; 
 
 while(i++<=x)     
 
 y=y*10; 
 
 return(y); 
 
 } 