#define NUM_ITER 1060574

#include <header.h>


int main_bench(){
    char a[50],b[50];
    int count[50];
    my_scanf("%s%s",a,b);
    int n=strlen(a);
    int m=strlen(b);
    int i,j,k=0,l,o,result;
    for(i=0;i<m;i++){
                     if(a[0]==b[i]){
                                    count[k]=i;
                                    k++;
                                    }
                     }
    for(o=0;o<k;o++){
                     l=0;
                     for(j=0;j<n;j++){
                                      if(a[j]==b[count[o]+j]){
                                                              l++;
                                                              }
                                      if(l==n-1){
                                                 my_printf("%d",count[o]);
                                                 result=1;
                                                 }
                                      }
                     if(result==1)
                     break;
                     }
    
    return 0;
}
                                    