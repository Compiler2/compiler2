#define NUM_ITER 842263

#include <header.h>

int main_bench(){
   char a[501],b[501];
   int i,time=0;
   double n,p,l,j,k,same=0;
   my_scanf("%lf",&n);
   my_scanf("%s",&a);
   my_scanf("%s",&b);
   j=strlen(a);
   k=strlen(b);
   for(i=0;i<j;i++){
	   if(!(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')){
		   my_printf("error");
		   time++;
		   break;
	   }
   }
   for(i=0;i<k;i++){
	   if((!(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G'))&&time==0){
		   my_printf("error");
		   time++;
		   break;
	   }
   }
   if(j!=k&&time==0){
	   my_printf("error");
	   time++;
   }
   if(time==0){
	   for(i=0;i<j;i++){
		   if(a[i]==b[i]){
			   same++;
		   }
	   }
	   l=strlen(a);
	   p=same/l;
	   if(p>n){
		   my_printf("yes");
	   }else{
		   my_printf("no");
	   }
   }
   return 0;
}