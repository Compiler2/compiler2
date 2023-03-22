#include <header.h>

int main_bench()
{
 int arr[100]={0};
 int n,i,s,j;
n=0;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  my_scanf("%d",&arr[i]);
 }
 int max=-10000;
 for(s=0;s<n;s++)
 {
  max=(max>=arr[s])?max:arr[s];
 }
 int secondMax=0;
 for(j=0;j<n;j++)
 {
  secondMax=(secondMax>=arr[j]||arr[j]==max)?secondMax:arr[j];
 }
 my_printf("%d\n",max);
 my_printf("%d",secondMax);
 return 0;
}