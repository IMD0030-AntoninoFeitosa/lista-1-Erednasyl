#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n ){
  std::vector<unsigned int> fib;
  
  unsigned int fib0 = 0;
  unsigned int fibS0 = 1;
  unsigned int result;
  while (n > fibS0){
      result = fib0 + fibS0;
      fib.push_back(fibS0);
      fib0=fibS0;
      fibS0=result;
  }
  fib.shrink_to_fit();
  return std::vector<unsigned int>{fib};
}
