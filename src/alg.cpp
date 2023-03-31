// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <cmath>


bool checkPrime(uint64_t value) {
// вставьте код функции
  for (uint64_t i = 2; i <= sqrt(value); ++i) {
    if (value % i == 0)
      return false;
  }
  return true;
  
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t c = 2;
    for (uint64_t i = 0; i < n; c++)
        if (checkPrime(c))
            i++;
    return (c - 1);
}


uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  uint64_t c = value + 1;
  while (true) {
    if (checkPrime(c))
      return c;
    else
      ++c;
  }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t s = 0;
  for (uint64_t n = hbound - 1; n > 1; --n) {
    if (checkPrime(n))
      s += n;
  }
  return s;
}
