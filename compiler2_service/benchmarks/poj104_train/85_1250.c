#define NUM_ITER 37777

#include <header.h>

int main_bench() {
   int n,result,i;
   char zfc[21];
   my_scanf("%d",&n);
   while(n--){
     my_scanf("%s",zfc);
     if((zfc[0]>='A'&&zfc[0]<='Z')||(zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]=='_')){
       for(i=1;zfc[i]!='\0';i++){
          if((zfc[i]>='A'&&zfc[i]<='Z')||(zfc[i]>='a'&&zfc[i]<='z')||(zfc[i]=='_')||(zfc[i]>='0'&&zfc[i]<='9')){
              result=1;
          }else{
              result=0;
              break;         
          }
        }
     }else{
        result=0;
     }
     if(result==1){
        my_printf("yes\n");
     }else{
        my_printf("no\n");
     }
   }
   return 0;
}       