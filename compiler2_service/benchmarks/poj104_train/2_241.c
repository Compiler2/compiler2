#define NUM_ITER 1073

#include <header.h>

int main_bench()
{
    int n,i,j,k;
    my_scanf("%d\n",&n);
    
    struct book
    {
    int num;
    char name[26];
     }book[999];

    for(i=0;i<n;i++)
    { my_scanf("%d %s\n",&book[i].num,book[i].name);
     }

    struct author
    {
    char l;
    int count;
     }au[26];

    for(i=0;i<26;i++)
    { au[i].l=65+i;
      au[i].count=0;
     }

    for(i=0;i<26;i++)
    { for(j=0;j<n;j++)
        {  for(k=0;k<26;k++)
             {if(au[i].l==book[j].name[k])
                 {au[i].count++;
                  break;
                  }
             }    
         }
    }

    int max=0;
    for(i=1;i<26;i++)
    { if(au[max].count<au[i].count)
           max=i;
     }
    my_printf("%c\n%d\n",au[max].l,au[max].count);

    for(j=0;j<n;j++)
    { for(k=0;k<26;k++)
      {
       if(au[max].l==book[j].name[k])
          { my_printf("%d\n",book[j].num);
            break;
           }
       }
     }
    return 0;
}
