#define NUM_ITER 21476

#include <header.h>


int main_bench(){
   int n,i,j,p;
   my_scanf("%d\n",&n);
   char str[22];
   for (i=0;i<n;i++){
      gets(str);
      p=0;
      for (j=0;str[j]!='\0';j++){
         if (j==0){
            if (str[j]>='a'&&str[j]<='z'){p++;}
            else if (str[j]>='A'&&str[j]<='Z'){p++;}
            else if (str[j]=='_'){p++;}
            else {p=p;}
         }
         if (j!=0){
            if (str[j]>='a'&&str[j]<='z'){p++;}
            else if (str[j]>='A'&&str[j]<='Z'){p++;}
            else if (str[j]=='_'){p++;}
            else if (str[j]>='0'&&str[j]<='9'){p++;}
            else {p=p;}  
         }
      }
      if (p==j){my_printf("yes\n");}
      else {my_printf("no\n");}
   }
   return 0;
}