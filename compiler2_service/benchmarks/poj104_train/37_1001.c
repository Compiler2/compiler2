#define NUM_ITER 5520

#include <header.h>


int main_bench()
{
    int t,i,j,k,n,num=0,m,mmin,times=0;
    char s[100000];
    my_scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++){
                     gets(s);
                     n=strlen(s);
                     mmin=n;
                     times=0;
                     for(j='a';j<='z';j++){
                                           for(k=0;k<n;k++){
                                                            if(s[k]==j){
                                                                        num++;
                                                                        }
                                                            }
                                           if(num==1){
                                                      times++;
                                                      for(k=0;k<n;k++){
                                                                       if(s[k]==j){
                                                                                  m=k;
                                                                                  break;
                                                                                  }
                                                                       }
                                                      if(m<mmin){
                                                                 mmin=m;
                                                                 }
                                                      }
                                           num=0;                                           
                                           }                     
                     if(times==0){
                                  my_printf("no\n");
                                  }
                     else{
                          my_printf("%c\n",s[mmin]);
                          }
                     
                     }    
  
    return 0;
    }