#define NUM_ITER 29471

#include <header.h>

int main_bench(){
int n,i,j,k=1,m=0,x=0;
    int cs[100],sz[100],a[100];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
      my_scanf("%d",&cs[i]);
      my_scanf("%d",&sz[i]);
    }
    for(i=0;i<n;i++){
      if(cs[i]<=140&&cs[i]>=90&&sz[i]<=90&&sz[i]>=60){
        a[i]=1;
      }else{
        a[i]=0;
      }
    }
    if(n==1){
      if(a[0]==1)
        m=1;
    }else{
      for(i=1;i<n;i++){
        j=i-1;
        if(a[j]==1&&a[i]==1){
          k++;
          if(k>m)
            m=k;
        }else{
          k=1;
          if(k>m)
            m=k;
        }
      }
    }
    for(i=0;i<n;i++){
      if(a[i]==1)
        x++;
    }
    if(x==0)
      m=0;
    my_printf("%d",m);
return 0;
}