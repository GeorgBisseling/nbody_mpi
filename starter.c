#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// This generates a random system just for benchmarking purposes.
// For start conditions with astrophysical plausibility look
// up Plummer's Model or King's Model.

int n = -1;
double t = 0.0;

int main(int argc, char **argv)
{
  if (argc != 2) {
    fprintf(stderr, "Usage is:\n%s n\n", argv[0]);
    exit(-1);
    }

  n = atoi(argv[1]);

  if (n<1 || n>1000) {
    fprintf(stderr, "n must be between 1 and 1000 inclusively.\n");
    exit(-1);
  }

  fprintf(stderr, "Generating random system with %d bodies.\n", n);

  printf("%d\n", n);
  printf("%f\n", t);

  double mass = 1.0;
  double R = sqrt(n);

  int i;
  for(i=0; i<n; i++)
    {
      printf("%g ", mass);

      printf("%g ", (R*rand())/RAND_MAX );
      printf("%g ", (R*rand())/RAND_MAX );
      printf("%g ", (R*rand())/RAND_MAX );

      printf("%g ", (0.1*rand())/RAND_MAX );
      printf("%g ", (0.1*rand())/RAND_MAX );
      printf("%g ", (0.1*rand())/RAND_MAX );

      printf("\n");
   }


  return 0;
}
