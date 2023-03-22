#include <header.h>

int main_bench(){
    int n,i,m,k,p;
    my_scanf("%d",&n);
    char zfc[n][21],a,b;
    for(i=0;i<n;i++){
        my_scanf("%s",zfc[i]);
        m=strlen(zfc[i]);
        p=0;
      for(k=0;k<m;k++){
        if (k==0){if(zfc[i][k]=='_'||(zfc[i][k]>='a'&&zfc[i][k]<='z')||(zfc[i][k]>='A'&&zfc[i][k]<='Z')){
            p++;
        }}
        if(k!=0) {
           if((zfc[i][k]>='0'&&zfc[i][k]<='9')||(zfc[i][k]>='a'&&zfc[i][k]<='z')||(zfc[i][k]>='A'&&zfc[i][k]<='Z'||zfc[i][k]=='_')){p++;}
        }   
       }   
             if(p==m){my_printf("yes\n");}
             else{my_printf("no\n");}
             
      }
             
        
        return 0;
        
    
}



