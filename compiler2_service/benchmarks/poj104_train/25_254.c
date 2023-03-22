#define NUM_ITER 8694

#include <header.h>

int main_bench(){
    int n;
    int result[32]={0};
    int carry=0;
    int i,j,key=0;
    my_scanf("%d",&n);
    if(n==0){
       my_printf("1"); 
    }else{
       result[0]=1;
       for(i=1;i<=n;i++){
           for(j=0;j<32;j++){
               result[j]=result[j]*2+carry;
               carry=0;
               if(result[j]>=10){
               result[j]=result[j]-10;
               carry=1;
               }
           }
       }
       for(i=31;i>=0;i--){
               if(result[i]!=0){
               my_printf("%d",result[i]);
               i--;
               break;
               }
       }
       for(;i>=0;i--){              
               my_printf("%d",result[i]);
       }
    }
	
	return 0;
}