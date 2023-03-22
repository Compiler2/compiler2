#define NUM_ITER 27532

#include <header.h>

int main_bench(){
    int len;
    char sp,word[300][20];
    for(int i=0;i<300;i++){
         my_scanf("%s%c",word[i],&sp);
         len=strlen(word[i]);
         if(len==0){
             break;
                      }
          if(i==0){ 
            my_printf("%d",len);
           }else{my_printf(",%d",len);}
         }
            return 0;
    } 


