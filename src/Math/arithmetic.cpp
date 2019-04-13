#include "arithmetic.h"

/**
 * @brief calculate (x ^ y) % m, when x, y, m are extremely large
 */
long long modularExponentiation(int x, int y, int m)
{
  if (y == 0)
  {
    return 1;
  }

  x = x % m;
  long long result = 1;
  while (y > 0)
  {
    if (y % 2 == 1)
    {
      result = (result * x) % m;
    }

    x = (x * x) % m;
    y /= 2;
  }

  return result;
}