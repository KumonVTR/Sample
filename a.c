#include<stdio.h>

int main(void) {
  int t;
  int k;

  t = 0;
  k = 0;
  puts("int ? > ");
  scanf("%d", &t);

  puts("int ? > ");
  scanf("%d", &k);

  printf("[%d]\n", k*t);

  return 0;
}
