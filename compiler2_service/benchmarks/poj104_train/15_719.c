#define NUM_ITER 561

#include <header.h>

int main_bench()
{
   int n;
   my_scanf("%d\n",&n);
   int a[n][n];
   int i,j;
   int e,b,c,d,s;
   for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           my_scanf("%d",&a[i][j]);
}
   my_scanf("\n");
}
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(a[i][j]==0){e=i;b=j;}
}
}
         for(i=n-1;i>=0;i--){
        for(j=n-1;j>=0;j--){
           if(a[i][j]==0){c=i;d=j;}
}
}
     s=(c-e+1)*(d-b+1);
     my_printf("%d",s);
}

