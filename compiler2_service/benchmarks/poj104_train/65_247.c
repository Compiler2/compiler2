#define NUM_ITER 29438

#include <header.h>

int main_bench(){
    int n,i,k,l;
    my_scanf("%d\n",&n);
    int sz[n][2];
    for (i=0;i<n;i++){
        for(k=0;k<2;k++){
        my_scanf("%d",&sz[i][k]);
        }
       }
       l=0;
    for (i=0;i<n;i++){
        
       if(((sz[i][0])-(sz[i][1])==-1)||((sz[i][0])-(sz[i][1])==2)){
                                                            l++;
                                                            }
       if((sz[i][0])-(sz[i][1])==0){
                                   l+=0;
                                   }
       if((sz[i][0])-(sz[i][1])==1||(sz[i][0])-(sz[i][1])==-2){
                                                            l--;
                                                             }
                                                             }
                                                      if(l>0){
                                                              my_printf("A");
                                                              }else if(l==0){
                                                                    my_printf("Tie");}
                                                                    else {
                                                                         my_printf("B");
                                                                         }                                                                               
    return 0;
}