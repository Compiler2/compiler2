#define NUM_ITER 871532

#include <header.h>

int main_bench(){
int i,j,k=0;
 double m,n,s;
 char a[500],b[500];
 my_scanf("%lf",&m);
 my_scanf("%s",a);
 my_scanf("%s",b);
 if(strlen(a)==strlen(b)){
                          
 
 for(i=0,j=0;i<strlen(a);i++){
                              if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
                                                                                                                            k=1;
                                                                                                                             
                                                                                                                             }else{
                                                                                                                                   
                          if(a[i]==b[i]){
                                        j++;
                                        }
                                        }
                                        }
                                        if(k==0){
                                                 
                                        n=0.1*strlen(a);
                                         s=j*0.1/n;
                                         if(s>m){
                                                 my_printf("yes");
                                                 }else{
                                                       my_printf("no");
                                                       }
                                                       }else{
                                                             my_printf("error");
                                                             }
                                                             }else{
                                                             my_printf("error");
                                                             }
return 0;
}
                                                             