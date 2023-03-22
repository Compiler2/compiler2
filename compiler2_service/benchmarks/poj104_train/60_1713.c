#include <header.h>

int issushu(int x);
int main_bench()
{

 int n,i,s[10000],j=0,p=0;
 my_scanf("%d",&n);
 
 for(i=2;i<=n;i++)
   {
     if(issushu(i))
      {
        s[j]=i;
        j++;
        
      }
   }

      for(int m=1;m<=j-1;m++)
        {if(s[m]-s[m-1]==2)
           {my_printf("%d %d\n",s[m-1],s[m]);{p++;}}
        }
   if(p==0){my_printf("empty");}     
           
     
 int y;
 my_scanf("%d",&y) ;   
        
 return 0;
}
int issushu(int x)
{    int result;
    for(int k=2;k<=x-1;k++)
      {
       if(x%k==0){result=0;{break;}}
       else{result=1;}
      }
      return result ;
}




