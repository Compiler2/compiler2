#define NUM_ITER 32244

#include <header.h>

int main_bench(){
    int n,time[200][2],A=0,B=0;
    my_scanf("%d",&n);
    for(int a=0;a<n;a++){
        my_scanf("%d %d",&(time[a][0]),&(time[a][1]));
    }
    for(int a=0;a<n;a++){
        if((time[a][0]==0&&time[a][1]==2)){
               B++;
           }
           if(time[a][0]>time[a][1]&&(time[a][0]!=2||time[a][1]!=0)){
                 B++;
           }
          if((time[a][1]==0&&time[a][0]==2)){
               A++;
           }
          if(time[a][1]>time[a][0]&&(time[a][1]!=2||time[a][0]!=0)){
               A++;
           }
    }
    if(A==B){my_printf("Tie");}
    if(A>B){my_printf("A");}
    if(A<B){my_printf("B");}
    return 0;
}