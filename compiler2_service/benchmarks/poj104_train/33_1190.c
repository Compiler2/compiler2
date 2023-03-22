#include <header.h>

int main_bench(){
    char a[256],b[256];
    int n,i,j,k;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
      my_scanf("%s",a);
      k=strlen(a);
      for(j=0;j<=k;j++){
        if(a[j]=='A'){
           b[j]='T';
        }else if(a[j]=='T'){
           b[j]='A';
        }else if(a[j]=='C'){
           b[j]='G';
        }else if(a[j]=='G'){
           b[j]='C';
        }else if(a[j]=='\0'){
           b[j]='\0';
        }
      }
      my_printf("%s\n",b);
    }
    return 0;
}
    
              
          
