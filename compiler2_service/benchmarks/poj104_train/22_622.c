#define NUM_ITER 99746

#include <header.h>


main_bench(){ int i,j,a[300],n=1,temp; 
char c; my_scanf("%d",&a[1]); 
while((c=getchar())!='\n') { n++; my_scanf("%d",&a[n]); } if(n==1) { my_printf("No"); } else { for(i=1;i<n;i++) { for(j=1;j<n;j++) { if(a[j]<a[j+1]) { temp=a[j]; a[j]=a[j+1]; a[j+1]=temp; } } } for(i=2;i<=n;i++) { if(a[i]<a[1])break; } if(i<=n) { my_printf("%d",a[i]); } else { my_printf("No"); } }}