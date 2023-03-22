#include <header.h>

int main_bench(){
    int m,n,i,j,a[100000]={0},w[10000],z=0,s=0;
    my_scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
     {
        for(j=2;j<i;j++)
          {
              if(i%j==0)
              { a[i]++;
                  break;
               }
            }
      }
   for(i=m;i<=n;i++)
    {
       if(a[i]==0)
       {   int k,b,c=0;
		   k=i;
		   while(k>0)
		   {
		   b=k%10;
		   
		   k=k/10;
		    c=c*10+b;
		   }
		   if(c==i)
		   {
			 z=z+1;
		     w[z]=c;
			 s=s+1;

		   }
		   else continue;
	  }
   }
   if(z==0)
	   my_printf("no");
   else
   {
   for(z=1;z<s;z++)
     {	  
			   my_printf("%d,",w[z]);
   }
  my_printf("%d",w[s]);
   }
return 0;
}

