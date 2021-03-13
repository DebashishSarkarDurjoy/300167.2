#include <stdio.h>
#define NROWS 10
#define NCOLS 20
#define NELTS NROWS * NCOLS

int main(void) {
  int a[NROWS][NCOLS], k;

  for (k = 0; k < NELTS; k++)
    (*a)[k] = 0;

  for (k = 0; k < NELTS; k++) printf("%d ", *((*a) + k) );

  return 0;
}
