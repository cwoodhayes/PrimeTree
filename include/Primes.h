/*
Header file containing prime numbers for use by the PrimeTree data structure.
*/

#ifndef PRIMES_H
#define PRIMES_H

#include <stdint.h>

namespace Primes {
    typedef uint32_t prime_t;

    extern prime_t primes[10001];
};

#endif