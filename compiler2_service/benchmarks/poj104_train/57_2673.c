#define NUM_ITER 33275

#include <header.h>

int main_bench()
{
int n,a;
char sz[100000];
my_scanf("%d",&n);
getchar();
for(int i=0;i<n;i++)
 {
   gets(sz);
   a=strlen(sz);
     if(sz[a-3]=='i'&&sz[a-2]=='n'&&sz[a-1]=='g'&&a!=3) 
       {sz[a-3]='\0';sz[a-2]='\0';sz[a-1]='\0';  puts(sz);  }
     else if(sz[a-2]=='e'&&sz[a-1]=='r'&&a!=2) 
            {sz[a-2]='\0';sz[a-1]='\0'; puts(sz);}
          else if(sz[a-2]=='l'&&sz[a-1]=='y'&&a!=2) 
                 {sz[a-2]='\0';sz[a-1]='\0'; puts(sz);}
  }
return 0;
}


