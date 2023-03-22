#include <header.h>


int trans(int a[5][5],int n,int m)
{int *pi,*pj,i,c;

 if(n<=4&&n>=0&&m<=4&&n>=0) 
 {
  pi=*(a+n);
  pj=*(a+m);
  for(i=0;i<5;i++)
  {c=*pi;
  *pi=*pj;
  *pj=c;
  pi++;
  pj++;
  }
  return 1;
 }
else return 0;
}
   

main_bench()
{
 int a[5][5],n,m,*p;
 p=*a;
 for(n=0;n<5;n++) 
	 for(m=0;m<5;m++)
	 {my_scanf("%d",p);
	  p++;
	 }
p=*a;
my_scanf("%d %d",&n,&m);
	 if(trans(a,n,m))
	 {  
	    for(n=0;n<5;n++)
		{
         for(m=0;m<4;m++)
		 {my_printf("%d ",*p);p++;}
		 my_printf("%d\n",*p);p++;
		 
		}
	    
	 }
	 else my_printf("error\n");
}