#define NUM_ITER 575307

#include <header.h>

int main_bench(){
    int i,j,k,a[500]={0},b[500]={0},n,l,max;
    char s[500]={'\0'};
    char c[500][5]={'\0'};
    my_scanf("%d\n",&n);
    gets(s);
    l=strlen(s);
    for(i=0;i<=l-n;i++){
                       for(j=0;j<n;j++){
                                        c[i][j]=s[i+j];}}
    for(i=0;i<=l-n;i++){
                       for(j=i;j<=l-n;j++){
                                          if(strcmp(c[i],c[j])==0) a[i]++;
                                          }
                                          }
    max=a[0];
    for(i=0;i<l-n;i++){
                       if(a[i]>=max) max=a[i];}
    if(max==1) my_printf("NO");
    else{my_printf("%d\n",max);
          for(i=0;i<l-n;i++){
                       if(a[i]==max){ puts(c[i]);}}
                       }

}