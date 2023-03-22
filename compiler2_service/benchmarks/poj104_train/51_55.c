#define NUM_ITER 1137258

#include <header.h>


int main_bench(){
   char z[1000],x[20];
   int i,j,k,l;
   int n,h[1000],p;
   my_scanf("%d",&n);
   my_scanf("%s",z);
   int len=strlen(z);
   for(i=0;i<=len-n;i++)
   {
	   h[i]=0;
	   for(j=i;j<i+n;j++)
	   {
		   x[j-i]=z[j];
	   }
	   x[n]=0;
	   for(j=i;j<len;j++)
	   {
		   p=0;
		   for(k=j;k<j+n;k++)
		   {
			   if(x[k-j]==z[k])
				   p++;
		   }
		   if(p==n)
			   h[i]++;
	   }
   }
   int count,dount,m=0;
   for(i=0;i<len-n+1;i++)
   {
       count=0;
	   dount=0;
	   for(j=0;j<len-n+1;j++)
	   {
		   if(h[i]>=h[j])
			   count++;
		   if(h[i]>h[j])
			   dount++;
	   }
	   if(count==len-n+1&&dount!=0)
	   {
		   my_printf("%d\n",h[i]);
		   m++;
	       break;
	   }
   }   
   for(i=0;i<len-n+1;i++)
   {
	   count=0;
	   dount=0;
	   for(j=0;j<len-n+1;j++)
	   {
		   if(h[i]>=h[j])
			   count++;
		   if(h[i]>h[j])
			   dount++;
	   }
	   if(dount!=0&&count==len-n+1)
	   {
		   for(j=0;j<n;j++)
		   {
			   x[j]=z[j+i];
		   }
		   x[n]=0;
		   my_printf("%s\n",x);
	   }
   }
   if(m==0)
	   my_printf("NO");
   return 0;
}