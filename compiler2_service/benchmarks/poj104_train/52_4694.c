#define NUM_ITER 46743

#include <header.h>


int main_bench()
{
     void change(int *p,int n,int m);
     int a[100],n,m,i,*p=a;
     my_scanf("%d%d",&n,&m);
     my_printf("\n");
     for(i=0;i<n;i++,p++)
         my_scanf("%d",p);
	 p=a;
     change(p,n,m);
}
    

void change(int *p,int n,int m)
{   
     int *i,*j,b[100];
     j=b;
     i=p;
     for(j=b,i=p;i<p+n;i++,j++)
     {
        
         if(i<p+n-m)
         *(j+m)=*i;
         else
          *(j-n+m)=*i;
     }
     for(j=b;j<b+n-1;j++)
	 { my_printf("%d ",*j);}
         my_printf("%d",*(b+n-1));

}