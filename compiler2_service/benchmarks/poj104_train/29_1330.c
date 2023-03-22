#include <header.h>

double sum(int n);
int main_bench(){
  int m,i;
  int sz[100];
  double result=0;
  my_scanf("%d",&m);
  for(i=1;i<=m;i++){
    my_scanf("%d",&sz[i]);}
  for(i=1;i<=m;i++){
    result=sum(sz[i]);
    my_printf("%.3lf\n",result);}
  return 0;
}

double sum(int n){
  int i;
  double a,b,c,d=0,r;
  a=1;
  b=2;
  for(i=1;i<=n;i++){
    r=b/a;
	c=a;
    a=b;
	b=c+a;
	d=d+r;



  }
  return d;

}