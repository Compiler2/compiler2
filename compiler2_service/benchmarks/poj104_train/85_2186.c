#define NUM_ITER 34851

#include <header.h>

int main_bench(){
int n,i,m,result=0;
char bsf[1000][21];
my_scanf("%d",&n);
 for(i=0;i<n;i++){
    my_scanf("%s",bsf[i]);
 }
  for(i=0;i<n;i++){
    if(((bsf[i][0]>='a')&&(bsf[i][0]<='z'))||((bsf[i][0]>='A')&&(bsf[i][0]<='Z'))||(bsf[i][0]=='_')){
      for(m=1;bsf[i][m]!='\0';m++){
        if(((bsf[i][m]>='a')&&(bsf[i][m]<='z'))||((bsf[i][m]>='0')&&(bsf[i][m]<='9'))||((bsf[i][m]>='A')&&(bsf[i][m]<='Z'))||(bsf[i][m]=='_')) {
        }
        else{
            result=1;
        }
      }
    }
     else{
          result=1;
      }
   if(result==0){my_printf("yes\n");}else{my_printf("no\n");};
  result=0;
  }
 return 0;
}

