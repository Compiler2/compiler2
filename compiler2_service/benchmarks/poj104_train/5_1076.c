#define NUM_ITER 1051832

#include <header.h>

int main_bench(){
   char a[2][600];
   double n,m;
   my_scanf("%lf%s",&n,a[0]);
   my_scanf("%s",a[1]);
   int i, s=0;
   m=strlen(a[0]);
   for(i=0;i<m;i++){
	   if((a[0][i]!=65&&a[0][i]!=67&&a[0][i]!=71&&a[0][i]!=84)||(a[1][i]!=65&&a[1][i]!=67&&a[1][i]!=71&&a[1][i]!=84)){
		   my_printf("error");
		   s=-1;
		   break;
}
	   else if(a[0][i]==a[1][i])
		   s++;
   }

   if(s!=-1){
	double q;
	q=s*1.0/m;
	if(q>=n)
		my_printf("yes");
	else{
		my_printf("no");
	}
   }
	return 0;
}