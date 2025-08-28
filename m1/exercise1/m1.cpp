#include "m1.hpp"

int main(int argc, char *argv[]) {

  std::vector<int> v = {-3, 1, 0, 2, -4, 3, 7, -2, 5};
  int k = 3;
  int result = sum_positive(&v, k);

  std::cout << result << std::endl;

  return 0;
}

int sum_positive(std::vector<int> *v, int k) {
  int i = 0;
  int sum = 0;

  for(int j = 0; j < v->size(); j++) {
    if(v->at(j) <= 0) continue;
    else {
      sum += v->at(j);
      i++;
    }

    if (i == k) break;
  }

  return sum;
}
