#define NUM_ITER 756512

#include <header.h>

int main_bench(){
    int i,j;
    double n=0,biao,l=1,len;
    char shuzu[3][501];
    my_scanf("%lf",&biao); 
    for(i=0;i<3;i++){
        my_scanf("%s",shuzu[i]);          
                  }
    len=1.0*strlen(shuzu[0]);
     if(strlen(shuzu[0])-strlen(shuzu[1])){ 
            my_printf("error"); 
           }
     else{                    
         for(i=0;i<len;i++){
             if(!((shuzu[0][i]=='A'||shuzu[0][i]=='G'||shuzu[0][i]=='C'||shuzu[0][i]=='T')&&(shuzu[1][i]=='A'||shuzu[1][i]=='G'||shuzu[1][i]=='C'||shuzu[1][i]=='T'))){
                   l=0;                                                                                                                                                   }
             if(shuzu[0][i]==shuzu[1][i])
                   n++;
                          }
        if(l){                  
           if((n/len)>biao)
               my_printf("yes");
           else
               my_printf("no");
           
               }
        else
           my_printf("error");
          }    
    return 0;
}