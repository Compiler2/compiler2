#define NUM_ITER 23856

#include <header.h>

int main_bench(){
  int n,i,j;
  char range[10000][256];
  char vice[10000][256];
  int lenth[10000];
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
     my_scanf("%s",range[i]); 
     lenth[i]=strlen(range[i]);           
  }   
  for(i=0;i<n;i++){
   for(j=0;j<lenth[i];j++){
    if(range[i][j]=='A'){vice[i][j]='T';}
    if(range[i][j]=='T'){vice[i][j]='A';}
    if(range[i][j]=='C'){vice[i][j]='G';}
    if(range[i][j]=='G'){vice[i][j]='C';}                                       
   }                 
  } 
  for(i=0;i<n-1;i++){
    my_printf("%s\n",vice[i]);                 
  } 
    my_printf("%s",vice[n-1]);
    return 0;
}