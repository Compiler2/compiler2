#include <header.h>

int main_bench(){
    int i,n,k,s;
    my_scanf("%d",&n);
    char zfc[100][21];
    for(i=0;i<n;i++){
        my_scanf("%s",zfc[i]);
        if(zfc[i][0]==95||(zfc[i][0]>=65&&zfc[i][0]<=90)||(zfc[i][0]>=97&&zfc[i][0]<=122)){
            s=0;
            for(k=0;k<strlen(zfc[i]);k++){              
                if((zfc[i][k]>=48&&zfc[i][k]<=57)||(zfc[i][k]==95)||(zfc[i][k]>=65&&zfc[i][k]<=90)||(zfc[i][k]>=97&&zfc[i][k]<=122))
                s++;
                
            }  
            if(s==strlen(zfc[i])){
                    my_printf("yes\n");
                }else{my_printf("no\n");}
        }
        else{my_printf("no\n");}
    }
  return 0;  
}
 




