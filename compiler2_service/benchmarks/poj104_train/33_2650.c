#define NUM_ITER 21645

#include <header.h>

int main_bench(){
    int i,n,k,len;
    char jj[1000][256];
     my_scanf("%d",&n);
     for(i=0;i<n;i++){
      my_scanf("%s",jj[i]);
      
      len=strlen(jj[i]);
      for(k=0;k<len;k++){
       if(jj[i][k]=='A'){
          jj[i][k]='T';               } 
       else if(jj[i][k]=='T'){
          jj[i][k]='A';               
                         } 
        else if(jj[i][k]=='C'){
          jj[i][k]='G';                                      
                         }
        else if(jj[i][k]=='G'){
          jj[i][k]='C';                                   
                      }
                      }
                      }
     for(i=0;i<n;i++){
       my_printf("%s",jj[i]);
        my_printf("\n");             
                      } 
                      my_scanf("%d",&k);                
     return 0;              
    }
