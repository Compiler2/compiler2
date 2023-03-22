#define NUM_ITER 84415

#include <header.h>

int main_bench(){
   int n,i,j,m,h,k;
   int s[30]={0};
   my_scanf("%d",&h);
 for(k=0;k<h;k++){
   my_scanf("%d",&n);
   if(n!=0){
   for(i=0;i<n;i++){
    my_scanf("%d",&s[i]);}
   if(s[n-1]+(n-1)*3<60&&s[n-1]+n*3<=60){
    m=60-n*3;}
	else { 
	   for(j=0;j<n;j++){
	       if(s[j]+j*3<=60&&s[j]+(j+1)*3>=60){
			     m=s[j];break;}else if(s[j]+j*3>60){m=60-j*3;break;}}}
	my_printf("%d\n",m);}else{ my_printf("60\n");}}
	return 0;
	}
		