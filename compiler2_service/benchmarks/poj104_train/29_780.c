#include <header.h>

int main_bench()
{
  int m,j,i,b[1000];
  double a[1000],s=0;
  my_scanf("%d",&m);
  for(j=0;j<m;j++){
    my_scanf("%d",&b[j]);
  }
  for(j=0;j<m;j++){
     for(i=0;i<b[j];i++){
        a[0]=2/1;
        a[i+1]=1+1/a[i];
        s+=a[i]; 
	 }
     my_printf("%.3lf\n",s);
	 s=0;
  }
  return 0;
}

