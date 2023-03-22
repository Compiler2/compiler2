#include <header.h>

int main_bench(){
int b[1000],n,k,i,j;
    my_scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)my_scanf("%d",&b[i]);
 for(i=0;i<n-1;i++){
	 for(j=i+1;j<n;j++){
		 if(b[i]+b[j]==k){my_printf("yes");break;}
		 if(i==n-2&&j==n-1){my_printf("no");}
	 }
	 if(b[i]+b[j]==k){break;}
 }
 
    return 0;
}