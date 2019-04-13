#include "primes.h"
#include <iostream>

/**
 * @brief find all the prime numbers less than n.
 */
void SieveOfEratosthenes(int n, std::vector<int> &primes)
{
  if (n < 2)
  {
    return;
  }
  
  // primeset, if index is prime, primeset[index] equals 0;
  std::vector<int> primeset(n+1);
  primeset[0] = 1;
  primeset[1] = 1;

  
  for (int i = 2; i <= n; i++)
  {
    if (primeset[i] == 0)
    {
      primes.push_back(i);
      // attention here, for loop should be (int j = i*i; j <=n; j++), which is faster
      // but j will overflow when i is larger than 46349 (perhaps).
      for (int j = i + i; j <= n; j += i)
      {
        primeset[j] = 1;
      }
    }
  }

  return;
}

/**
 * @brief find all the prime factors given an integer n
 */
void PrimeFactorization(int n, std::vector<int> &primes, std::vector<int> &factors)
{
  if (n < 2)
  {
    return;
  }

  // step one: find all the prime numbers not larger than n
  SieveOfEratosthenes(n, primes);
  int index = 0;
  int prime = primes[index];

  // step two: find all the prime factors of given number n
  while(n > 1 && n >= prime * prime)
  {
    while (n % prime == 0)
    {
      n /= prime;
      factors.push_back(prime);
    }
    prime = primes[++index];
  }

  if (n != 1)
  {
    factors.push_back(n);
  }
  return;

}

/**
 * @brief print all the elements in a vector.
 */
void display(std::vector<int> &vector)
{
  if (!vector.size())
  {
    std::cout << "Vector is empty !" << std::endl;
  }

  for (int i = 0; i < vector.size(); i++)
  {
    std::cout << "The " << i << "th element is " << vector[i] << "." << std::endl;
  }

  return;
}
