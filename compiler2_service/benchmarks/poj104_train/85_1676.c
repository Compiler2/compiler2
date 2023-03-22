#include <header.h>

int main_bench(){
    char a[1000][21];
    int b,i,k;
    my_scanf("%d",&b);
    for(i=0;i<b;i++){

            my_scanf("%s",&a[i]);

    }
    for(i=0;i<b;i++){
        if(a[i][0]=='_'||(a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')){
            for(k=1;a[i][k]!='\0';k++){
                if(a[i][k]=='_'||(a[i][k]>='a'&&a[i][k]<='z')||(a[i][k]>='A'&&a[i][k]<='Z')||(a[i][k]>='0'&&a[i][k]<='9'))
                    continue;
                else
                    break;
            }
            if(a[i][k]!='\0')
                my_printf("no\n");
            else
                my_printf("yes\n");
        }
        else
            my_printf("no\n");
    }
return 0;
}
