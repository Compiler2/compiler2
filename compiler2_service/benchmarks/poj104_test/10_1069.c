#define NUM_ITER 5769

#include <header.h>

int main_bench()
{
      int k;
      int j=0;
      int max=0;
      int i,m;
      my_scanf("%d",&k);
      int height[k],b[k];
      while(j<k){
                 my_scanf("%d",&height[j]);
                 j++;
                 }
      j=j-1;
      while(j>=0){
                  for(i=j+1;i<k;i++){
                                     if(height[i]<=height[j]&&b[i]>max) 
                                        max=b[i];
                                     }
                  b[j]=max+1;
                  max=0;
                  j--;
                  }
      for(i=0;i<k;i++){
                       if(b[i]>max) 
                          max=b[i];
                       }
      my_printf("%d",max);
}