#define NUM_ITER 30041

#include <header.h>

int main_bench(){
    int n;
    int a[100]={0};
    my_scanf("%d\n",&n);
    char bsf[n][21];
    for (int i=0;i<n;i++){
        my_scanf("%s",(bsf[i]));
    }
    for (int i=0;i<n;i++){
        for(int m=0;bsf[i][m]!=0;m++){
        if((bsf[i][0]>='a'&&bsf[i][0]<='z')||(bsf[i][0]>='A'&&bsf[i][0]<='Z')||(bsf[i][0]=='_')){
         if((bsf[i][m]>='a'&&bsf[i][m]<='z')||(bsf[i][m]<='Z'&&bsf[i][m]>='A')||(bsf[i][m]>='0'&&bsf[i][m]<='9')||bsf[i][m]=='_'){
           continue;
        }else{
            a[i]++;
            break;
        }
      }else{
          a[i]++;
          break;
      }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            my_printf("no\n");
        }else{
            my_printf("yes\n");
        }
    }
return 0;  
}

