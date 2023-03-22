#define NUM_ITER 7

#include <header.h>

int main_bench()
{    char a[1000000];
     int b[50000];
	 int t,i,j,k,n,l;
	 my_scanf("%d",&t);
	 for(i=0;i<t;i++)
	 {
       for (j=0;j<50000;j++)
       {b[j]=0;
       a[j]=0;}
        my_scanf("%s",a);
        l=strlen(a);
        
       for (k=0;k<l;k++)
       {
           for(n=0;n<l;n++)
           {
            if(a[k]==a[n])
            b[k]++;
           }
         if(b[k]==1)
         {my_printf("%c\n",a[k]);
         break;}
        if( k==l-1)
        my_printf("no\n");
     }
     }

    return 0;
}