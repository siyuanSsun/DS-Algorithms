## **Prime Number Problem Sets**
----

### 1.Primes in a Range
- **Description**: 
  <br> Find all the prime numbers in a given range [a, b].
- **Basic idea**: 
  <br> First we use Sieve of Eratosthenes algorithm to find all the prime numbers not larger than b; 
  <br> Then we filter out all the prime numbers less than a.
- **My implementation**:
  <br> <a href="../src/Math/primes.cpp"> Prime in a Range. </a>

### 2.Distinct Primes
- **Description**:
  <br> A lucky number is a positive integer which has at least three distinct prime factors. The first lucky number is 30=2x3x5; and the second one is 42=2x3x7. Given an interger n, you should find the n-th lucky number and output it.
- **Basic idea**
  <br> Use sieve's trick. For each prime number, find all the non-prime numbers that obtain it as a factor. Then add one to the number of its distinct primes factors.
- **My implementation**
  <br> <a href="Math/DistinctPrimes.cpp"> Distinct Primes </a>

