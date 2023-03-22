#include <header.h>

int k,n;

char str[1000],c1,c2;

int main_bench(){
    int i,j,t=1;
    my_scanf("%s",str);
    n=strlen(str);
    c1=str[0];
    c2=str[n-1];
    
    for(i=t;i<n;i++){
        if(str[i]==c2){
            for(j=i-1;j>=0;j--){
                if(str[j]==c1){
                    my_printf("%d %d\n",j,i);
                    str[i]=' ';
                    str[j]=' ';
                    break;
                }
            }
        }
        t++;
    }

return 0;
}
