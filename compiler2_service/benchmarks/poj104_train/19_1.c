#define NUM_ITER 873858

#include <header.h>


int main_bench() {
  char buf1[100];
  char buf2[100];
  char buf3[100];
  char *tmp;
  gets(buf1);
  gets(buf2);
  gets(buf3);
  tmp = buf1;
  while ((*tmp) != 0) {
    if (strncmp(tmp, buf2, strlen(buf2)) == 0) {
      if ((tmp == buf1 || *(tmp-1) == ' ')) {
        my_printf("%s", buf3);
        tmp += strlen(buf2);
      } else {
        my_printf("%c", *tmp);
        ++tmp;
      }
    }
    else {
      my_printf("%c", *tmp);
      ++tmp;
    }
  }
  return 0;
}
