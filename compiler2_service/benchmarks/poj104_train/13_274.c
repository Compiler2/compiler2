#define NUM_ITER 7981

#include <header.h>


main_bench(){
       int input[20000],output[20000],n,i,j,outLen=1;
       my_scanf("%d",&n);
       for(i=0;i<n;i++){
           my_scanf("%d",&input[i]);
           output[outLen]=input[i];
           for(j=1;j<outLen;j++){
               if(input[i]==output[j]) outLen=outLen-1;
               
               
           }
           outLen=outLen+1;
       }
       
       for(i=1;i<outLen;i++){
           my_printf("%d",output[i]);
           if(i!=outLen-1) my_printf(" ");
       }
       
}