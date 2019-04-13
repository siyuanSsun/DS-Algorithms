#ifndef PRIMES_H
#define PRIMES_H

#include <vector>
#include <bitset>


/**
 * @brief find all the prime numbers less than n;
 * 
 * @param n the ceilling where all prime numbers should be less than;
 * @param primes vector that stores all the prime numbers;
 * 
 * @return none
 */
void SieveOfEratosthenes(int n, std::vector<int> &primes);

/**
 * @brief find all the prime factors of a given n
 * 
 * @param n the given n
 * @param primes vector storing all the prime numbers that are less than n;
 * @param factors vector storing all the prime factors of the given n
 * 
 * @return none
 */
void PrimeFactorization(int n, std::vector<int> &primes, std::vector<int> &factors);

void display(std::vector<int> &vector);

#endif


