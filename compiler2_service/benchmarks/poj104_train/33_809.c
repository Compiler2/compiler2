#define NUM_ITER 28514

#include <header.h>

int main_bench(){
     char d[260];
  int i=0,j=0,n;
  char A,T,G,C;
  my_scanf("%d",&n);
  for(j=0;j<n;j++){
      my_scanf("%s",d);
  for(i=0;d[i]!='\0';i++){
   if(d[i]=='A')     {d[i]='T';}
   else if(d[i]=='T'){d[i]='A';}
   else if(d[i]=='G'){d[i]='C';}
   else if(d[i]=='C'){d[i]='G';}
  }
  my_printf("%s\n",d);
  }
     return 0;
}
 