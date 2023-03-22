#define NUM_ITER 38

#include <header.h>

int main_bench(){
    int a[50000], b[50000], n, s[50000];
    
    my_scanf("%d\n", &n);
    for(int i=0;i<n;i++){
        my_scanf("%d %d", &a[i], &b[i]);
    }
int c=a[0];
int d=b[0];
for(int i=0;i<n;i++){
  if(c>a[i]){
     c=a[i];
     }
  if(d<b[i]){
     d=b[i];
     }
for(int m=c;m<=d;m++){
   s[m]=1;
   for(int i=0;i<n;i++){
       if(m>=a[i]&&m<b[i]){
          s[m]=0;
          }
    }
 }
}
int result=0;
for(int m=c;m<d;m++){
    result+=s[m];
}
if(result==0){
my_printf("%d %d",c,d);
}else{
my_printf("no");
}
return 0;
}

   
