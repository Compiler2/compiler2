#include <header.h>

int main_bench(){
	int n,k;
         int c=0;
	int sz[1000];
		my_scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
	my_scanf("%d",&sz[i]);
	}
	for(int m=0;m<n-1;m++){
	   for(int j=m+1;j<n;j++){
               if(sz[m]+sz[j]==k){
                      c++;
                }
             }
       }
           if(c==0)  my_printf("no");
           if(c!=0) my_printf("yes");
	return 0;
	}


