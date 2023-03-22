#include <header.h>

int main_bench()
{
    double n,c;
    int b=0,p=1,i;
    my_scanf("%lf",&n);
    char a[2][501];
    my_scanf("%s",a[0]);
    my_scanf("%s",a[1]);
    for(i=0;i<501;i++){
                       if(a[0][i]=='\0'){
                                      if(a[1][i]!='\0'){
                                                     p=0;
                                                     }
                                     break;               
                                     }
                        if(a[0][i]!='A'&&a[0][i]!='T'&&a[0][i]!='C'&&a[0][i]!='G'){
                                                                               p=0;
                                                                               break;
                                                                               }
                        if(a[1][i]!='A'&&a[1][i]!='T'&&a[1][i]!='C'&&a[1][i]!='G'){
                                                                                   p=0;
                                                                                   break;
                                                                                   }
                       
                       if(a[0][i]==a[1][i]){
                                             b=b+1;
                                             }
                       }
    c=b*1.0/i;
    
    if(p==0){my_printf("error");}
    else{
         if(c>n){my_printf("yes");}
         else{
              my_printf("no");
              }
         }
         
    return 0;
         
    
    }