
#include <stdio.h>

int
main ()
{
  int n, i, a[1000], lar;
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  lar = a[0];
  for (i = 0; i < n; i++)
    {
      if (a[i] > lar)
	lar = a[i];
    }
  printf ("%d", lar);
  return 0;
}
