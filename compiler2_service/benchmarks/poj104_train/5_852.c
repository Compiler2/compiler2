#include <header.h>

int main_bench(){
    double n,p;
    int i;
    int k=0,s=0;
    char zfc1[500],zfc2[500];
    my_scanf("%lf",&n);
    my_scanf("%s",zfc1);
    my_scanf("%s",zfc2);
    int a=strlen(zfc1),b=strlen(zfc2);
    if(a!=b){
        my_printf("error");
      }else {for(i=0;i<a;i++)
      {if((zfc1[i]=='A'||zfc1[i]=='T'||zfc1[i]=='C'||zfc1[i]=='G')&&(zfc2[i]=='A'||zfc2[i]=='T'||zfc2[i]=='C'||zfc2[i]=='G')){
      s++;
      } if(zfc1[i]==zfc2[i]){
                k++;
            }}
    if(s==a) {     
        p=1.0*k/a;
        if(p>n){my_printf("yes");}
        else{my_printf("no");}
    }else{my_printf("error");}
    
}return 0;
}

