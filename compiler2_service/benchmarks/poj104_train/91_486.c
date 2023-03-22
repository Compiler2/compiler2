#define NUM_ITER 1187424

#include <header.h>

int main_bench()
{
      char a[101],b[101];
      gets(a);
      
      int i;
      for(i = 0;i < strlen(a);i++)
      b[i] = a[i] + a[(i+1) % strlen(a)];
      
      b[strlen(a)] = 0;
      puts(b);
      return 0;
}
