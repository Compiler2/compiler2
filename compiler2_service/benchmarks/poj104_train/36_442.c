#define NUM_ITER 1067451

#include <header.h>



int search(char a[],char b[],int i,int x)
{
    int q;    
    for(q=0;q<=x-1;q++)
    {if(b[q]==a[i])
    {b[q]='0';
    return(q);}
    }
    return(-1);
}
    
int main_bench()
{
  
    char a[30],b[30];
    int m,i,j,z,n;
    my_scanf("%s",a);
    my_scanf("%s",b);
m=strlen(a);
n=strlen(b);
if(m!=n)
my_printf("NO\n");
else
    {for(i=0;i<=m-1;i++)
    {z=search(a,b,i,m);
    if(z==-1)
      {my_printf("NO\n");
       break;}
    }
    if(z!=-1)
    my_printf("YES\n"); } 
    
  

  return 0;
}

  
  