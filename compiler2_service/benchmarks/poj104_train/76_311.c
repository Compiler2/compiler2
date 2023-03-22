#define NUM_ITER 4380

#include <header.h>


int main_bench(){
   int n,e;
   int s[50000][2];
   my_scanf("%d",&n);
   for(int i=0;i<=n-1;i++){
	   my_scanf("%d%d",&s[i][0],&s[i][1]);
   }
   for(int k=1;k<=n;k++){
	   for(int i=0;i<=n-k;i++){
		   if(s[i+1][0]>=s[i][0]){
			   e=s[i+1][0];
			   s[i+1][0]=s[i][0];
			   s[i][0]=e;
			   e=s[i+1][1];
			   s[i+1][1]=s[i][1];
			   s[i][1]=e;
		   }
	   }
   }
   for(int a=n-1;a>=1;a--){
	   if(s[a-1][0]>s[a][1]){
		   my_printf("no");
		   break;
	   }else{
		   s[a-1][0]=s[a][0];
		   if(s[a][1]>s[a-1][1]){
			   s[a-1][1]=s[a][1];
		   }


	   }
	   if(a==1){my_printf("%d %d",s[0][0],s[0][1]);}
   }

 return 0;}