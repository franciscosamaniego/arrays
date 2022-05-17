#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int list[n];
for (int i = 0; i < n; i++) {
  list[i] = rand() % 100;
  printf("%d ", list[i]);
}
printf("\n");

double sum = 0.0;
for(int i = 0; i < n; i++) {
  sum += list[i];
}
printf("%.2f\n", sum/n);



  //a[0] = 6;
  //a[1] = 5;
  //a[2] = 2;
  //printf("%d\n", a[6]);

  //int a[] = {6,5,2,-2,3,7,10};
  return 0;
}
