#define NUM_ITER 29714

#include <header.h>

int main_bench(){
    char s[21];
    int n,i,j,p[100];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%s",s);
        p[i]=1;
        for(j=1;j<strlen(s);j++){
            if(s[0]=='_'||s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'){
                if(s[j]=='_'||s[j]>='a'&&s[j]<='z'||s[j]>='A'&&s[j]<='Z'||s[j]>='0'&&s[j]<='9'){
                    p[i]=1;
                }else{
                    p[i]=0;
                    break;
                }
            }else{  p[i]=0;
                    break;
            }
        }
    } 
       for(i=0;i<n;i++){
           if(p[i]){
               my_printf("yes\n");
           }else{
               my_printf("no\n");
           }
       }
       return 0;
}


