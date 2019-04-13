/**
 * Problem set: Distinct primes.
 * 
 * Description: A lucky number is a positive integer which has at least three distinct prime factors. 
 *              The first lucky number is 30=2x3x5; and the second one is 42=2x3x7.
 * 
 * Input: n + 1 lines. The first is an integer n indicates n lines. The following each line is a integer k.
 * Output: n lines. Output the k-th lucky number of each line.
 * Constrant: 1 <= n <= 20; 1 <= k <= 2000.
 * 
 * Sample:
 * Input: 
 *   2
 *   1
 *   2
 * 
 * Output:
 *   30
 *   42
 * 
 * Reference:
 *   https://www.spoj.com/problems/AMR11E/
 */


#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char* argv[])
{
  int n = 10000;

  // sieve's trick
  vector<int> primes(n);
  for (int i = 2; i < n; i++)
  {
    if (primes[i] == 0)
    {
      for (int j = i + i; j < n; j += i)
      {
        primes[j] += 1;
      }
    }
  }

  // filter lucky numbers
  vector<int> lucky;
  for (int i = 2; i < n; i++)
  {
    if (primes[i] >= 3)
    {
      lucky.push_back(i);
    }
  }

  int a, b;
  cin >> a;
  while (a--)
  {
    cin >> b;
    cout << lucky[b-1] << endl;
  }

  return 0;
}