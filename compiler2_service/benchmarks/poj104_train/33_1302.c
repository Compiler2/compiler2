#define NUM_ITER 25165

#include <header.h>

int main_bench(){
    int n,i,j;
    char s[10000][260];
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){
      my_scanf("%s",s[i]);
                     }
    for(i=1;i<=n;i++){
      for(j=0;s[i][j]!='\0';j++){
        if(s[i][j]=='A'){
           s[i][j]='T';
                      }
        else if(s[i][j]=='C'){
           s[i][j]='G';
                          }
        else if(s[i][j]=='G'){
           s[i][j]='C';
                          }                
        else if(s[i][j]=='T'){
           s[i][j]='A';
                          }             
                            }
         my_printf("%s\n",s[i]);  
                     }   
      return 0;
    }