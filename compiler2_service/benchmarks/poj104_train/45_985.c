#define NUM_ITER 433830

#include <header.h>


int main_bench(){
    char word[3][51];
    int i,j,a=0;
    int b=0;
    for (i=0;i<2;i++){
        my_scanf("%s",word[i]);
        }
    for(i=0;i<50;i++){
                      if(word[0][i]!='\0'){
                                        a++;
                                        }
                                        else{
                                             break;
                                             }
                                        }
    for(i=0;i<50;i++){
                      if(word[0][0]==word[1][i]){
                      for(j=0;j<a;j++){
                                       if(word[0][j]==word[1][i+j]){
                                                                    b++;
                                                                    }
                                                                    }
                                                                    if(b==a){
                                                                            my_printf("%d",i);  
                                                                            }
                                                                            else{
                                                                                 b=0;
                                                                                 } 
                                                                    }
                                                                    }
                                                                                          
                                                                                                                                      return 0;
                                                                                                                                            
                                                   }
                                        
    
