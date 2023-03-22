#define NUM_ITER 33525

#include <header.h>

int main_bench(){
    char s[100][20];
    int i,j,n;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%s",s[i]);
        for(j=0;s[i][j]!='\0';j++){
            if(!((s[i][j]=='_')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='0'&&s[i][j]<='9'&&j>0))){
                break;
            }
        }
        if(s[i][j]=='\0'){
            my_printf("yes\n");
        }else{my_printf("no\n");}
    }
    return 0;
}
