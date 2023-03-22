#include <header.h>


int ss(int p)
{
   int x;
   if(p==2)return 1;
   else
   {
     for(x=2;x<p;x++)
	 {
	 if(p%x==0)break;
	 }
     if(x>=p)return 1;
	 else return 0;
   }
}


int huiwen(int p,int q)
{
  if(p==0)return q;
  else huiwen(p/10,q*10+p%10);

}




int main_bench()
{
   int m,n,coun=0;
   my_scanf("%d %d",&m,&n);
   int i,ci,temp;
   for(i=m;i<=n;i++)
   {  ci=0;
	   temp=huiwen(i,ci);
      if(ss(i)==1&&(temp==i))
	  {coun++;
	  if(coun==1)my_printf("%d",i);
	  if(coun>1)my_printf(",%d",i);
	  }
   
   }
  if(coun==0)my_printf("no\n");
}