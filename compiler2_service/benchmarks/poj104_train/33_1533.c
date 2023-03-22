#include <header.h>

char peidui(char x);
char peidui(char x){
   char s;
   s=0;
   if(x=='A'){s='T';}
   if(x=='T'){s='A';}
   if(x=='C'){s='G';}
   if(x=='G'){s='C';}
   return s;
} 
int main_bench(){
   int n,i,j,len;
   char jianji[256];
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
   len=0;
   my_scanf("%s",jianji);
   len=strlen(jianji);
   for(j=0;j<len;j++){
   my_printf("%c",peidui(jianji[j]));
               }
   my_printf("\n");
   }
   
   return 0;
}