#define NUM_ITER 26343

#include <header.h>

int main_bench(){
int n,i,j;
my_scanf("%d",&n);
char a[n][1000];
for(i=0;i<n;i++){
   my_scanf("%s",a[i]);
   }
for(i=0;i<n;i++){
    for(j=0;a[i][j]!='\0';j++){
       if(a[i][j]=='A'){
          my_printf("T");
          }
       if(a[i][j]=='C'){
          my_printf("G");
          }
       if(a[i][j]=='G'){
          my_printf("C");
          }
       if(a[i][j]=='T'){
          my_printf("A");
          }
       }
    if(a[i][j]=='\0')
    my_printf("\n");
    }
my_scanf("%d",&i);
return 0;
}

