#define NUM_ITER 137624

#include <header.h>

int main_bench(){
char sz[100][20];
    int n,len[20];
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
      my_scanf("%s",sz[i]);
      len[i]=strlen(sz[i]);
    }
    for(int i=0;i<n;i++){
      if((sz[i][0]>='A'&&sz[i][0]<='Z')||(sz[i][0]>='a'&&sz[i][0]<='z')||(sz[i][0]=='_')){
        for(int j=1;j<=len[i];j++){
          if((sz[i][j]>='A'&&sz[i][j]<='Z')||(sz[i][j]>='a'&&sz[i][j]<='z')||(sz[i][j]=='_')||(sz[i][j]>='0'&&sz[i][j]<='9')){
            continue;
          }else if(sz[i][j]=='\0'){
            my_printf("yes\n");
            break;
          }else{
            my_printf("no\n");
            break;
          }
        }
      }else{
        my_printf("no\n");
      }
    }
return 0;
}