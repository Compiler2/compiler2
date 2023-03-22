#define NUM_ITER 32765

#include <header.h>

int main_bench(){
	int n,i,j=0,r=0;
	int l[100];
	int s[3][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&s[0][i],&s[1][i]);
	}
	for(i=0;i<n;i++){
		if((s[0][i]<=140)&&(s[0][i]>=90)&&(s[1][i]<=90)&&(s[1][i]>=60)){
			s[2][i]=1;
		}else{
			s[2][i]=0;
		}
	}
   for(i=0;i<n-1;i++){
	   if(s[2][i]==1){
		   r++;
	   }
	   if(s[2][i]==0){
			   l[j]=r;
			   j++;
			   r=0;
		   }
   }
	   if(i==n-1){
		   if(s[2][i]==1){
		   r++;
            l[j]=r;
	   }
	   if(s[2][i]==0){
			   l[j]=r;
		   }

   }
   int max=0;
   for(i=0;i<=j;i++){
	   if(max<l[i]){
		   max=l[i];
	      }
   }
   my_printf("%d",max);
   return 0;
}