#define NUM_ITER 29910

#include <header.h>

int main_bench(){
    int n,i,a;
    my_scanf("%d",&n);
    int l[n];
    char dc[n][33];
    for(i=0;i<n;i++){
        my_scanf("%s",&dc[i]);
        l[i]=strlen(dc[i]);
    }
    for(i=0;i<n;i++){
        if(dc[i][l[i]-1]=='r'){dc[i][l[i]-1]=0;dc[i][l[i]-2]=0;}
        else if(dc[i][l[i]-1]=='y'){dc[i][l[i]-1]=0;dc[i][l[i]-2]=0;}
        else if(dc[i][l[i]-1]=='g'){dc[i][l[i]-1]=0;dc[i][l[i]-2]=0;dc[i][l[i]-3]=0;}
    }
    for(i=0;i<n;i++){
        my_printf("%s\n",dc[i]);
    }
    return 0;
}