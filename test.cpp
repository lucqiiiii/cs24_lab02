#include <iostream>
#include <ctime>
using namespace std;

void f(){
  clock_t begin = clock();
  int sum = 0;
  int n = 10000;
  for (int i = 0; i < n; ++i){
    for (int j = 0; j < n; ++j){
      ++sum;
    }
  }
  clock_t end = clock();
  double diff = double(end - begin) / CLOCKS_PER_SEC;
  cout << diff << endl;
}

int main(){
  f();
  return 0;
}
