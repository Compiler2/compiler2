#define NUM_ITER 1338347

#include <header.h>

int main_bench(){
   int n,i,j=0;
   char a[5000]; 
   gets(a);
   n=strlen(a);
   for(i=0;i<n;i++){
       if(a[i]!=' '){
           j++;
           if(i==n-1){my_printf("%d",j);}
       }
       else if(j!=0){
           my_printf("%d,",j);
           j=0;
       }
   }
return 0;
}