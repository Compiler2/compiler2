#define NUM_ITER 22724

#include <header.h>

int main_bench(){
  int n;
  char ml[300];
  my_scanf("%d",&n);
  int i;
  for(i=0;i<n;i++){
      my_scanf("%s",ml);
      int l=strlen(ml);
      for(int k=0;k<l;k++){
          if(ml[k]=='A'){ml[k]='T';}
          else if(ml[k]=='T'){ml[k]='A';}
          else if(ml[k]=='C'){ml[k]='G';}
          else if(ml[k]=='G'){ml[k]='C';}
      my_printf("%c",ml[k]);
      }
      my_printf("\n");
  }
  
  
    return 0;
}



