#define NUM_ITER 34517

#include <header.h>

int main_bench(){
int n,result=0;
char x[1000][21];
my_scanf("%d",&n);
 for(int i=0;i<n;i++){
    my_scanf("%s",x[i]);
 }
  for(int j=0;j<n;j++){
    if(((x[j][0]>='a')&&(x[j][0]<='z'))||((x[j][0]>='A')&&(x[j][0]<='Z'))||(x[j][0]=='_')){
      for(int k=1;x[j][k]!='\0';k++){
        if(((x[j][k]>='a')&&(x[j][k]<='z'))||((x[j][k]>='0')&&(x[j][k]<='9'))||((x[j][k]>='A')&&(x[j][k]<='Z'))||(x[j][k]=='_')) {
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
