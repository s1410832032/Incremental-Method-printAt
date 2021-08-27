#include <iostream>
using namespace std;
void print_At(int n){
  for(int i=0;i<n;i++) cout << "@";
  cout << "\n";
}

int main() {
  for(int j=7 ; j>0 ; j--) print_At(j);
}