#define NUM_ITER 28231

#include <header.h>


int main_bench() {
int a=0,i,n,s1[100],s2[100],h=0,s3[100]={0},max=0;
my_scanf("%d",&n);
for ( i=0;i<n;i++) {
    my_scanf("%d %d",&s1[i],&s2[i]);
}
 for (i=0;i<n;i++) {
     if (s1[i]>=90&&s1[i]<=140&&s2[i]>=60&&s2[i]<=90) {
        s3[i]=1;
        h=1;
        max=1;
        }
        }
    for (int j=0;j<n;j++) {
        if (s3[j]==0) {
                    a++;  
                      }
                      if (a==n) {
                                my_printf("0");
                              
                                return 0;                                }
                      }
     for (i=0;i<n-1;i++) {
         if (s3[i]==1&&s3[i+1]==1) {
           h++;
           }
           if (h>max) {
           max=h;
           }
           if (s3[i+1]==0||s3[i]==0) {
             h=1;
             }
             }
              my_printf("%d",max);



return 0;
}
