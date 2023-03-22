#define NUM_ITER 3892

#include <header.h>

int main_bench()
{
	int n,k,i,j,a,b;
	int sz[1000],zz[1000];
         b=0;
	my_scanf("%d %d",&n,&k);
          for(i=0;i<n;i++){
		      my_scanf("%d",&sz[i]);
		  }
         i=0;
         j=0;
	     while(i<n&&j<n){
              zz[j]=sz[i];
              i++;
              j++;
        }	
         for(i=0;i<n;i++){
		     for(j=0;j<n;j++){
				 if(i==j){
					 continue;
				 }
			    if(sz[i]+zz[j]==k){
                                a=1;
				}else{
                                a=0;
                }
                if(a==1||b==1){
					b=1;
				}else{
					b=0;
				}
			 }
         }
         if(b==1){
	       my_printf("yes");
         }else{
           my_printf("no");
		 }
return 0;
}
