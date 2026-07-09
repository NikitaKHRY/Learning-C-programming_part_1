#include <stdio.h>

int main() {
  int N, M;
  double percent;
  printf ("The number of interviewed persons:");
  scanf ("%d", &N );
  printf ("People who vote for a party:");
  scanf ("%d", &M );
  percent = (100*M)/N;
  printf("Result: %.0f", percent);
  getchar ( );
  return 0;
}
