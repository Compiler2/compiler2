#define NUM_ITER 1057

#include <header.h>

int main_bench()
{
    int n,i=0,x;
    my_scanf("%d",&n);
    int age[100];
    char num[100][10];
    for(i=0;i<n;i++)
    {
      my_scanf("%s %d",num[i],&age[i]);
      if (age[i]<60)
      age[i]=0;
    }
    loop:for(i=0;i<n;i++)
    {  
      x=0;
      if (age[i]>=60)                  
       {   for(int j=0;j<n;j++)
            {  
               if(age[j]>age[i])
                    x=x+1;}
           if (x==0)
           {my_printf("%s\n",num[i]);
             age[i]=1;
             goto loop;}
       }                  
    }
     for(i=0;i<n;i++)
     {
      if (age[i]==0)
      my_printf("%s\n",num[i]);                
     } 
     getchar();
     getchar();
}  