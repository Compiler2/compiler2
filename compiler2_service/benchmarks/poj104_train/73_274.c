#define NUM_ITER 198837

#include <header.h>


int main_bench()
{int a[5][5],i,r,j,temp,tempi,tempj,flag=1,flag1=0;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	my_scanf("%d",&a[i][j]);

	for(i=0;i<5;i++)                                       
   {for(j=0,temp=a[i][0],tempi=i,tempj=0;j<5;j++)                      
   {if (a[i][j]>temp) {temp=a[i][j];tempi=i;tempj=j;}}
   flag=1;
   for(r=0;r<5;r++)
   if (a[tempi][tempj]>a[r][tempj]) flag=0;        
   if(flag==1){my_printf("%d %d %d",tempi+1,tempj+1,a[tempi][tempj]);flag1=1;}
   }
   if(flag1==0) my_printf("not found");}
   
   