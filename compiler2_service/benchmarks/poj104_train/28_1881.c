#define NUM_ITER 1209742

#include <header.h>

int main_bench(){
int num=0,x=0;
int  dcs[360];
char dc[6000];
gets(dc);
for (int i=0;i<strlen(dc);i++){
      if (dc[i]==' '){
           dcs[x]=num;
           x++;
           num=0;
      }
      else {
          num++;
      }
      if(i==strlen(dc)-1){
            dcs[x]=num;
            x++;
      }
}     
for (int j=0;j<x;j++){
      if (dcs[j]!=0){
          if (j!=x-1){
                 my_printf("%d,",dcs[j]);
          }
          else {
                 my_printf("%d",dcs[j]);
                 break;
          }
      }
}
return 0;
}