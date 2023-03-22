#define NUM_ITER 7402

#include <header.h>

int main_bench()
{
    int num,j,i,n,max,count,a[100];
	
    char s[100][10];
    my_scanf("%d",&num);
    for( i = 0;i < num;i++)
    {
      my_scanf("%s %d",s[i],&a[i]);
    }
	n = 0;
    for(count = 0;count < num;count++)
    {
       max = 59;
       for(i = 0;i<num; i++)
      { 
        if(a[i] > max&&a[i] < 200)
        {
                max = a[i];
                j = i;
         }
      }
	   if(max == 59)
		   break;
      my_printf("%s\n", s[j]); 
	  a[j] = 300;
     }
     for( i = 0;i < num; i++)
     {
          if(a[i] < 60)
          my_printf("%s\n", s[i]); 
    }
    
    
    return 0;
}