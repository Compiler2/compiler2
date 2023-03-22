#include <header.h>

int main_bench(){
    int i,j,n,b[100]={0};
    char s[100][21];
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){
        my_scanf("%s",s[i]); 
        for(j=0;s[i][j]!=0;j++){
            if ((s[i][0]=='_')||(s[i][0]>='A'&&s[i][0]<='Z')||(s[i][0]>='a'&&s[i][0]<='z')){
                if((s[i][j]=='_')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='0'&&s[i][j]<='9'&&j>0)){
                    continue;
                }else{
                    b[i]++;
                    break;
                }
            }else{
                b[i]++;
                break;
            }
        }
    }
    for(i=1;i<=n;i++){
        if(b[i]>0){
            my_printf("no\n");
        }else{
            my_printf("yes\n");
        }
    }
    return 0;
 }

