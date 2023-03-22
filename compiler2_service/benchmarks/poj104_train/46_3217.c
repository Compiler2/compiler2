#define NUM_ITER 588

#include <header.h>

int main_bench()
{
int m1[100][100],i,j,k,a,b,c=0,d,e,x=-1;
my_scanf("%d %d\n",&a,&b);
e=a;d=b;
for(i=0;i<a;i++)
{
  for(j=0;j<b-1;j++){
    my_scanf("%d",&m1[i][j]);}
    my_scanf("%d\n",&m1[i][b-1]);
}
for(k=1;k<100000;k++){
x=x+1;
for(j=x;j<b-x;j++)
{
my_printf("%d\n",m1[x][j]);
c+=1;
}
if(c==d*e)break;
for(i=x+1;i<a-x;i++)
{
my_printf("%d\n",m1[i][b-x-1]);
c+=1;
}
if(c==d*e)break;
for(j=2+x;j<b+1-x;j++)
{
my_printf("%d\n",m1[a-1-x][b-j]);
c+=1;
}
if(c==d*e)break;
for(i=2+x;i<a-x;i++)
{
my_printf("%d\n",m1[a-i][x]);
c+=1;
}
if(c==e*d)break;
}
return 0;
}
