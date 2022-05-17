#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int a[n];
  for(int i;i < n; i++) {
    a[i] = rand() % 10;
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
