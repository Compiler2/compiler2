#define NUM_ITER 971124

#include <header.h>

int main_bench(){
int i,k;
char jz[2][1001];
 k=0;
 gets(jz[0]);
 for(i=0;i<strlen(jz[0]);i++){
  if(jz[0][i]!=' '||jz[0][i]==' '&& jz[0][i-1]!=' '){
   jz[1][k]=jz[0][i];
   k++;
}
}
jz[1][k]='\0';
my_printf("%s",jz[1]);
return 0;
}