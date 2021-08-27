#include <iostream>
using namespace std;

void print_Triangular(int st,int ed,int n){
  for(int a=0 ; a<n ; a++){
    for (int j=st ; j<=ed ; j++){
      for (int k=0 ; k<j ; k++) cout << j;  
      cout << "\n";
    }
    for (int j=(ed-1) ; j>=st ; j--){
      for (int k=0 ; k<j ; k++) cout << j;  
      cout << "\n";
    }
  }
}

int ex1(void) {
  print_Triangular(1,3,2);
  return 0;
}