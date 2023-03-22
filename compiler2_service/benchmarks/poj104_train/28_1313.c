#define NUM_ITER 1519122

#include <header.h>

int main_bench()
{char str[9999];
long i,k,j,a[400];
gets(str);

j=0;
i=0; 
k=0;
while(str[i]!='\0')
{
   if(str[i]==' ')
     {
        while(str[i+1]==' ')
        {i++;}
        my_printf("%d,",a[j]),j++,k=0,i++;
      }
  else 
      i++,k++,a[j]=k;
}
my_printf("%d",a[j]);

}