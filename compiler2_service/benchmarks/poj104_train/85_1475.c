#define NUM_ITER 25826

#include <header.h>



int main_bench() {
    int n, i, j;
    char data[100][21];
    int num[100]={0};
    my_scanf("%d" ,&n);
    for(i=0;i<n;i++) {
        my_scanf("%s", data[i]);
    }
    for(i=0;i<n;i++) {
        if(data[i][0]<='9'&&data[i][0]>='0') {
                num[i]++;
            continue;
            }
        for(j=0;data[i][j]!='\0';j++) {
            if((data[i][j]<='Z'&&data[i][j]>='A')||(data[i][j]>='a'&&data[i][j]<='z')||(data[i][j]>='0'&&data[i][j]<='9')||data[i][j]=='_') {}
            else {
                num[i]++;
            }
        }
    }
    for(i=0;i<n;i++) {
        if(num[i]!=0) {
            my_printf("no\n");
        } else {
            my_printf("yes\n");
        }
    }
    return 0 ;
}
        