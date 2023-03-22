#define NUM_ITER 24978

#include <header.h>

int main_bench(){
    char bz[100][500];
    int n,i,j,l;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%s",bz[i]);
                     }
    for(i=0;i<n;i++){
                     l=strlen(bz[i]);
                     for(j=0;j<l;j++){
                                      if(bz[i][l-2]=='e'){bz[i][l-2]='\0';}
                                      else if(bz[i][l-2]=='l'){bz[i][l-2]='\0';}
                                      else if(bz[i][l-2]=='n'){bz[i][l-3]='\0';}
                                      }
                     if(i!=n-1){my_printf("%s\n",bz[i]);}
                     else{my_printf("%s",bz[i]);}
                     }
    return 0;
    }
