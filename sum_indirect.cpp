#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

#include "sums.h"

void 
setup(int64_t N, int64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
   //initializing an array of length N to contain random numbers in the range 0..N-1 (hint: use lrand48() % N)
   for (int64_t i = 0; i < N; i++) {
      A[i] = rand() % N;
   }
}

int64_t
sum(int64_t N, int64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);
   int64_t sum = 0;
   int64_t index;

   for (int i = 0; i < N; i++) {
      index = A[i];
      sum += A[index];
   }

   return sum;
}

