#define NUM_ITER 30924

#include <header.h>

int main_bench(){
   int i,t,n;
   my_scanf("%d",&n);
   for(t=1;t<=n;t++){
                                       char zifu[400][400];
                                       my_scanf("%s",&zifu[t]);
                                       char das[400][400];
                                       int j=strlen(zifu[t]);
   if((zifu[t][j-2]=='e'&&zifu[t][j-1]=='r')||(zifu[t][j-2]=='l'&&zifu[t][j-1]=='y')){                                  
                                       for(i=0;i<j-2;i++){
                                                          das[t][i]=zifu[t][i];
                                                           }
                                       puts(das[t]);
                                       }
                                       else if(zifu[t][j-3]=='i'&&zifu[t][j-2]=='n'&&zifu[t][j-1]=='g'){
                                                                                                for(i=0;i<j-3;i++){
                                                                                                                   das[t][i]=zifu[t][i];
                                                                                                                     }
                                                                                                puts(das[t]);
                                                                                                }
                                       else{my_printf("%s\n",zifu[t]);}
                                      
                                       }
   
   return 0;}