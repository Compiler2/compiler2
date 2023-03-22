#define NUM_ITER 927272

#include <header.h>


int main_bench(){
    char str[256],a[100],b[100];
    int i,j,h;
    int n,m,result=0;
    int count;
    gets(str);
    my_scanf("%s%s",a,b);
    n=strlen(str);
    m=strlen(a);
    for(i=0;i<n;i++){
                     count=0;
                     if(str[i]==a[0]){
                                      h=i;
                                      for(j=0;j<m;j++){
                                                       if(str[h+j]==a[j]){
                                                                          count++;
                                                                          }
                                                       }
                                                       if(count==m){
                                                                    my_printf("%s",b);
                                                                    result=1;
                                                                    break;
                                                       }
                                                       if(count!=m){
                                                                    my_printf("%c",str[i]);
                                                       }
                                      }
                     else my_printf("%c",str[i]);
                     if(result==1)
                     break;
                     }
    for(i=h+m;i<n;i++){
                         my_printf("%c",str[i]);
                         }

  
    return 0;
}
                                    
