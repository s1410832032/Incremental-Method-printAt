#include <iostream>
using namespace std;
void print_At(int n){
  for(int i=0;i<n;i++) cout << "@";
  cout << "\n";
}

int main() {
  for(int j=7 ; j>0 ; j--) print_At(j);
  //UVa 488
  for(int a=0 ; a<2 ; a++){
    for (int j=1 ; j<=3 ; j++){
          for (int k=0 ; k<j ; k++) cout << j;  
          cout << "\n";
    }
    for (int j=(3-1) ; j>=1 ; j--){
      for (int k=0 ; k<j ; k++) cout << j;  
        cout << "\n";
    }
  }
}