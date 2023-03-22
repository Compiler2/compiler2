#define NUM_ITER 779

#include <header.h>

   int main_bench(){
       int n;
        my_scanf("%d",&n);
       char zfc[n][256];
       for(int i=0;i<n;i++){
           my_scanf("%s",zfc[i]);
       }
       for(int i=0;i<n;i++){
           for(int m=0;m<256;m++){
               if(zfc[i][m]=='A'){zfc[i][m]='T';}
               else if(zfc[i][m]=='T'){zfc[i][m]='A';}
               else if(zfc[i][m]=='C'){zfc[i][m]='G';}
               else if(zfc[i][m]=='G'){zfc[i][m]='C';}
           }
       }
       for(int i=0;i<n;i++){
           my_printf("%s\n",zfc[i]);
       }
       return 0;
   }
