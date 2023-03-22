#define NUM_ITER 1520

#include <header.h>

int m,n,a[1000]={0},b[1000]={0},c[1000]={0};
void du(){int i;for(i=0;i<m;i++)my_scanf("%d",&a[i]);for(i=0;i<n;i++)my_scanf("%d",&b[i]);}
void pai(){int j,k,l;
for(j=0;j<=m;j++){for(k=0;k<m-1;k++){if(a[k]>a[k+1]){l=a[k];a[k]=a[k+1];a[k+1]=l;}}}
for(j=0;j<=n;j++){for(k=0;k<n-1;k++){if(b[k]>b[k+1]){l=b[k];b[k]=b[k+1];b[k+1]=l;}}}}
void he(){int o,p;for(o=0;o<m;o++)c[o]=a[o];for(p=0;p<n;p++){c[o]=b[p];o++;}}
void shu(){int q;for(q=0;q<m+n;q++){my_printf("%d",c[q]);if(q!=m+n-1)my_printf(" ");else  my_printf("\n");}}
int main_bench()
{my_scanf("%d %d",&m,&n);du();pai();he();shu();return 0;}
