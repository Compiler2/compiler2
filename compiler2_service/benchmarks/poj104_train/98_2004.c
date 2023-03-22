#define NUM_ITER 29166

#include <header.h>

int main_bench(){
 char s[1000][40];
 int n,i;
 my_scanf("%d",&n);getchar();
 for(i=0;i<n;i++){
     my_scanf("%s",s[i]);getchar();
     }
  int h=strlen(s[0]);
  my_printf("%s",s[0]);
  for(i=1;i<n;i++){
     h+=strlen(s[i])+1;
     if(h<=80){
           my_printf(" %s",s[i]);getchar();
     }else{
           h=strlen(s[i]);
           my_printf("\n");getchar();
           my_printf("%s",s[i]);
           }
  }
    return 0;
} 