
#include <stdio.h>

int
main ()
{
  int n, i, a[1000], small;
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  small = a[0];
  for (i = 0; i < n; i++)
    {
      if (a[i] < small)
	small = a[i];
    }
  printf ("%d", small);
  return 0;
}
