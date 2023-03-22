#define NUM_ITER 21817

#include <header.h>

int main_bench(){
    int n,i,m,e,p;
    my_scanf("%d",&n);
    char zfc[n][256];
    for(i=0;i<n;i++){
        my_scanf("%s",zfc[i]);
        p=strlen(zfc[i]);
        for(m=0;m<p;m++){
          if(zfc[i][m]=='A'){zfc[i][m]='T';}
     else if(zfc[i][m]=='C'){zfc[i][m]='G';}
     else if(zfc[i][m]=='G'){zfc[i][m]='C';}
     else if(zfc[i][m]=='T'){zfc[i][m]='A';}}
     
     my_printf("%s\n",zfc[i]);
     my_printf("\n");
    }
    
return 0;
}



