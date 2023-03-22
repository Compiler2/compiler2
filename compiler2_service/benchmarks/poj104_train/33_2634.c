#include <header.h>

int main_bench(){
    int n,i,h,len[100];
    char j[1000][3000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%s",j[i]);
    }
   
    
    for(i=0;i<n;i++){
        for(h=0;h<strlen(j[i]);h++){
            if(j[i][h]=='A'){j[i][h]='T';}else{
                if(j[i][h]=='T'){j[i][h]='A';}else{
                   if(j[i][h]=='C'){j[i][h]='G';}else{if(j[i][h]=='G'){j[i][h]='C';}}
                }
            }
        }
        
    }
    for(i=0;i<n-1;i++){my_printf("%s\n",j[i]);}
    my_printf("%s",j[n-1]);
    return 0;
}
     

