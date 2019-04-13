#ifndef ARITHMETIC_H
#define ARITHMETIC_H

/**
 * @brief calculate the modulo m of power(x, y), i.e. (x ^ y) % m
 * 
 * @param x base
 * @param y exponent
 * @param m modulo
 * 
 * return (x ^ y) % m
 */
long long modularExponentiation(int x, int y, int m);

/**
 * @brief calculate the greatest common division of two given integers (GCD in short)
 * 
 * @param a the first given integer
 * @param b the second given integer
 * 
 * @return the greatest common divison of a and b
 */
int GCD(int a, int b);

/**
 * @brief calculate the least common multiple of two given integers (LCM in short)
 * 
 * @param a the first given integer
 * @param b the second given integer
 * 
 * @return the least common multiple of a and b
 */
int LCM(int a, int b);

#endif