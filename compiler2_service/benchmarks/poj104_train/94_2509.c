#define NUM_ITER 9332

#include <header.h>

int main_bench()
{int s[500],N,sum=-1,z[500],m=0,a,b;
my_scanf("%d\n",&N);
for(int i=0;i<N;i++){
    my_scanf("%d",&(s[i]));
    }
for(int i=0;i<N;i++){
    if( s[i]%2==1){
        sum=sum+1;
    z[sum]=s[i];
    m=m+1;
    }
}
    for(int k=0;k<m;k++){
        for (int j=0;j<m-1;j++){
            a=z[j];
            b=z[j+1];
            if (z[j]>z[j+1]){
              z[j]=b;
              z[j+1]=a;
            }
}
}
 for(int j=0;j<m-1;j++){
        my_printf("%d,",z[j]);
    }
    my_printf("%d",z[m-1]);
        return 0;

}

