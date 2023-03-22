#define NUM_ITER 2227

#include <header.h>

int a[1000];
int l=0,x;
int fff(int w,int t);
int main_bench()
{
    int i,j,q,p,n,m,y;
    my_scanf("%d",&n);
    for(p=0;p<n;p++)
       {q=1;l=0;
        my_scanf("%d",&x);
        for(i=2;i<=x;i++)
           if(x%i==0)
             {a[q]=i;
             q++;
             }
        fff(q-1,1);
        my_printf("%d\n",l);
       }
}
int fff(int w,int t)
{
    int i,j,y,n,m,p;
    for(i=t;i<=w;i++)
       {if(x%a[i]==0)
          {x=x/a[i]; 
          if(x==1){l++;}
            if(x>1)
              fff(w,i);
           x=x*a[i];
          }
       }
}
