#define NUM_ITER 21747

#include <header.h>

int main_bench(){
char A[1000][300],B[300]={'\0'};
int n,a,i,b;
my_scanf("%d",&n);
for(i=0;i<n;i++){
   my_scanf("%s",A[i]);
   a=strlen(A[i]);
   for(b=0;b<a;b++){
       if(A[i][b]=='T'){
         B[b]='A';}
else if(A[i][b]=='A'){
         B[b]='T';} 
else if(A[i][b]=='G'){
         B[b]='C';} 
else if(A[i][b]=='C'){
         B[b]='G';}
      }
    B[b]='\0';
    my_printf("%s\n",B);
   }
return 0;
}