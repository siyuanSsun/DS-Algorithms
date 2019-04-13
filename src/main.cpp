#include <iostream>
#include <stdlib.h>
#include "Math/primes.h"
using namespace std;
int main(int argc, char *argv[])
{
  
  if (argc == 1)
  {
    std::cout << "No argument provided" << std::endl;
    return -1;
  }
  

  int n = atoi(argv[1]);
  std::vector<int> primes;
  std::vector<int> factors;
  PrimeFactorization(n, primes, factors);
  display(factors);

  return 0;

}