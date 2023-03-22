#define NUM_ITER 937474

#include <header.h>


main_bench(){
       char *p;
       int i,len;
       p=(char*)malloc(30);
       gets(p);
       len=strlen(p);
       for(i=0;i<len;i++){
           if(*(p+i)>=48&&*(p+i)<=57){
               my_printf("%c",*(p+i));
           }
           else if((*(p+i-1)>=48&&*(p+i-1)<=57)||*(p+i+1)=='\0'){
               my_printf("\n");
           }
       }
       my_printf("\n");
}
