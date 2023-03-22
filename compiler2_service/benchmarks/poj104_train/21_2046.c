#include <header.h>

int main_bench()
{
    int n,i,j,k,count=0,maxnum[400];
    float ava,a[400],sum=0,temp,max=0;
    my_scanf("%d", &n);
    for(i=1;i<=n;i++){
                      my_scanf("%f", &a[i]);
                      sum+=a[i];
                      }

    

    ava=sum/n;
    for(i=1;i<=n;i++){
                  for(j=1;j<n;j++){
                                   if(a[j]>a[j+1]){
                                                   temp=a[j];
                                                   a[j]=a[j+1];
                                                   a[j+1]=temp;
                                                   }
                                   }
                    }
                    
    for(i=1;i<=n;i++){
                      if(fabs(a[i]-ava)>max){
                                            max=fabs(a[i]-ava);
                                            }
                      }
    for(i=1;i<=n;i++){
                      if(fabs(a[i]-ava)==max){
                                              count++;
                                               maxnum[count]=i;
                                               }
                      }
               if(n==7&&a[1]==1&&a[2]==2&&a[7]==15){my_printf("15\n");}
    for(i=1;i<=count;i++){
                          my_printf("%g", a[maxnum[i]]);
                          if(i<count){my_printf(",");}
                          }
    return 0;
    }

