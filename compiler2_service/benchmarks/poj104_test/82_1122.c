#define NUM_ITER 5343

#include <header.h>

int main_bench(){
    int n,k,m,g;
    int a[105],b[105];
    int e[105];
    int normal=0;
    my_scanf("%d",&n);
    int i,j=0;

    for(i=0;i<n;i++){
        my_scanf("%d %d",&a[i],&b[i]);
        }
    if(n==1){
        if(a[0]>=90&&a[0]<=140&&b[0]>=60&&b[0]<=90){
           my_printf("1");
           return 0;
           }else{
           my_printf("0");
           return 0;
           }
    }

    for(i=0;i<n;i++){
        if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90&&a[i+1]>=90&&a[i+1]<=140&&b[i+1]>=60&&b[i+1]<=90){
            normal++;
                  }
        else{
            if(i<n-1){
                if(normal==0){
                  e[j]=normal;
                  j++;
                  }
            else{
                e[j]=normal+1;
            normal=0;
            j++;
                
            }
            }
            
            else if(i==n-1){
                if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
                {e[j]=normal+1;
            
                }else{e[j]=0;}
            }
            
    
    }
    }




    for(k=1;k<=j;k++){
        for(i=0;i<j+1-k;i++){
            if(e[i]>e[i+1]){
                m=e[i+1];
                e[i+1]=e[i];
                e[i]=m;
                }
        }
    }
    if(e[j]==0)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
            {
                my_printf("1");
                return 0;
            }
        }
        my_printf("0");
        return 0;
    }
    my_printf("%d",e[j]);
    return 0;

}

