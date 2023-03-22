#include <header.h>

int main_bench(){
	int j,n,i,zu[100]={0},su[2][100],tu[100]={0};
 my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%d %d",&su[0][i],&su[1][i]);
if(su[0][i]<=140 && su[0][i]>=90 && su[1][i]>=60 && su[1][i]<=90)
zu[i]=1;
}
for(i=0;i<n;i++)
for(j=i;j<n;j++){
if(zu[j]==1)
tu[i]++;
else
break;}
for(i=0;i<n;i++)
if(tu[i]>tu[0])
tu[0]=tu[i];
my_printf("%d",tu[0]);
return 0;
}