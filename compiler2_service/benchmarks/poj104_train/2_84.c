#define NUM_ITER 733

#include <header.h>


int main_bench(){
    int n,i,j,k,b[999],max=0,a[27],x;
    char w,c[999][26],d[27];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
                     my_scanf("%d %s",&b[i],c[i]);
                     }
    for(i=0;i<27;i++)
    {a[i]=0;}
    for(i=0;i<n;i++){
                     for(j=0;j<26;j++){
                                      for(k=65;k<91;k++){
                                                         if(c[i][j]==k)
                                                         a[k-64]++;
                                                         }
                                      }
                     }
    for(i=1;i<27;i++){
                      if(a[i]>max)
                      {max=a[i];
                      x=i;}
                      }
    w=x+64;
    my_printf("%c\n",w);
    my_printf("%d\n",max);
    for(i=0;i<n;i++){
                     for(j=0;j<26;j++){
                                       if(c[i][j]==x+64)
                                       {my_printf("%d\n",b[i]);
                                       break;}
                                       }
                     }
    return 0;
}
    