#include <iostream>
#include <math.h>
#include <chrono>
#include <iomanip>
#include <omp.h>

using namespace std;
using namespace chrono;

// Function to calculate summands
float summand(int k){
  return -(1/3)
