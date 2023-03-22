#include <header.h>

int main_bench(){
    int n,m,i,j,max=0;
    int c[501]={0};
    char a[501];
    char b[501][6]={0};
    my_scanf("%d",&n);
    my_scanf("%s",a);
    m=strlen(a);
    for(j=0;j<=m-n;j++){
    for(i=0;i<n;i++){
                     b[j][i]=a[i+j];                 
                     }
    }
    for(j=0;j<=m-n;j++){
                        for(i=j+1;i<=m-n;i++){
                                              if(strcmp(b[i],b[j])==0){
                                                                       c[j]++;                         
                                              }                      
                        }
    }
    for(i=0;i<=m-n;i++){
                       if(c[i]>c[max]){
                                       max=i;
                       }                   
    }
    if(c[max]==0){my_printf("NO");}
    if(c[max]!=0){
    my_printf("%d\n",c[max]+1);
    for(j=0;j<=m-n;j++){
                       if(c[j]==c[max]){
                                       for(i=0;i<n;i++){
                                       my_printf("%c",b[j][i]);                                    
                                       }
                     my_printf("\n");
                     }
    }} 
    return 0;
    }