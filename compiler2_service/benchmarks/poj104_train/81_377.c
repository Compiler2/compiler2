#include <header.h>

int main_bench()
{
 int jiaohuan(int *p,int ,int);
 int a[5][5],n,m,i,c;
 int *p;
 p=a[0];
 for (i=0;i<25;i++,p++)
 
  my_scanf("%d",&*p);
 my_scanf("%d%d",&n,&m);
 p=a[0];
 c=jiaohuan(p,n,m);
 
 if(c==0)my_printf("error");
 else if(c==1)
 {
  p=a[0];
  for (i=0;i<25;i++,p++)
 
 
  {
	  if(i%5==0)my_printf("\n");
	  else my_printf(" ");
  my_printf("%d",*p);
  }
  
 }

 return 0;
}
int jiaohuan(int *p,int n,int m)
{
 int t,i;
 if(m<5&&n<5)
 {
  for(i=0;i<5;i++)
  {
  t=*(p+n*5+i);
  *(p+n*5+i)=*(p+m*5+i);
  *(p+m*5+i)=t;
  }
  return 1;
 }
 else return 0;
}

 

