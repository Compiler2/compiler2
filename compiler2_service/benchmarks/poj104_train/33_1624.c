#define NUM_ITER 24258

#include <header.h>

int main_bench(){
    int n,len;
    my_scanf("%d",&n);
    char zfc[1000][256];
    for (int a=0;a<n;a++){
        my_scanf("%s",zfc[a]);
    }
    for(int b=0;b<n;b++){
        len=strlen(zfc[b]);
        for(int c=0;c<len;c++){
            if(zfc[b][c]=='A'){zfc[b][c]='T';}else
            if(zfc[b][c]=='T'){zfc[b][c]='A';}else
            if(zfc[b][c]=='C'){zfc[b][c]='G';}else
            if(zfc[b][c]=='G'){zfc[b][c]='C';}
        }
    }
   for (int a=0;a<n-1;a++){
        my_printf("%s\n",zfc[a]);
    }
     my_printf("%s",zfc[n-1]);
    return 0;
}


