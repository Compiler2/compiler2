#define NUM_ITER 32484

#include <header.h>

int main_bench()
{
      int n;
      my_scanf("%d",&n);
      char word[n][20];
      int i,sum=0;
      my_scanf("%s",word[0]);
      sum+=strlen(word[0])+1;
      for(i=1;i<n;i++){
              my_scanf("%s",&word[i]); 
              sum+=strlen(word[i]);
              if(sum>80){
                      my_printf("%s\n",word[i-1]);
                      sum=strlen(word[i])+1;
               }
               else{
                      my_printf("%s ",word[i-1]);
                      sum+=1;
              }
      }
      my_printf("%s",word[n-1]);
}   