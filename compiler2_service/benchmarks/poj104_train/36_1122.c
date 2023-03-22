#define NUM_ITER 853557

#include <header.h>

int main_bench()
{char b[200];
 char a[200];
 int acal[26]={0};int bcal[26]={0};
  int alen,blen,i=0;
 my_scanf("%s %s",&a,&b);
 alen=strlen(a);
 blen=strlen(b);
 if(alen!=blen)my_printf("NO");
 else
  { for(i=0;i<=alen-1;i++)
    { acal[a[i]-97]++;                          }
    for(i=0;i<=blen-1;i++)
    { bcal[b[i]-97]++;                          }
    for(i=0;i<=25;i++)
    { if(acal[i]!=bcal[i])
      break;}
    if(i==26)
    my_printf("YES");
    else
    my_printf("NO");
  }
  
 getchar();
 getchar();
}