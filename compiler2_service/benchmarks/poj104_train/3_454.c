#include <header.h>

int main_bench(){
	 int n ,k,i,j,a=0;
	 int dk[1000];
	 my_scanf("%d %d",&n,&k);
           my_scanf("%d",&(dk[0]));
	 for(i=1;i<n;i++){
		 my_scanf(" %d",&(dk[i]));
	 }
	 for(i=0;i<n-1;i++){
		 for(j=i+1;j<n;j++){
			 if(dk[i]+dk[j]==k){
				 my_printf("yes");
				 return 0;
			 }
		 }
		 a+=1;
	 }
	 if(a==n-1) my_printf("no");
	return 0;

}

