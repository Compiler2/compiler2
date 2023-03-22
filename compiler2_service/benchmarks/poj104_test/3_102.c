#include <header.h>

int main_bench()
{
  
  int n,m,i,l=0,t,j;
  int a[1000]={0};
  my_scanf("%d %d",&m,&n);
  for(i=0;i<m;i++)
     my_scanf("%d",&a[i]);
  for(i=0;i<m;i++){
     t=n-a[i];
    for(j=i+1;j<m;j++)
		if(a[j]==t){
        my_printf("yes");
	    l++;
		break;
		}
   if(l>0)
	   break;
  }
   if(l==0)
		my_printf("no");

return 0;
}