#define NUM_ITER 852967

#include <header.h>

int main_bench()
{void pai(char s[],int n);
 char a[100],b[100];
 int c,d,e=0,i;
 my_scanf("%s %s",a,b);
 c=strlen(a);
 d=strlen(b);
 if(c!=d)
   my_printf("NO");
 else
   {pai(a,c);
   	pai(b,c);
   	for(i=0;i<=c-1;i++)
   	  {if(a[i]!=b[i])
   	  	 {e=1;
   	  	  break;
   	  	 }
   	  }
   	if(e==1)
   	  my_printf("NO");
   	else
   	  my_printf("YES");
   }
    
}

void pai(char s[],int n)
{int i,j,k;
 char t;
 for(i=0;i<n-1;i++)
    {k=i;
     for(j=i+1;j<n;j++)
        if(s[j]<s[k])
          k=j;
     t=s[k],s[k]=s[i],s[i]=t;
    }
}