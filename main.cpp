#include <iostream>
using namespace std;

// Unose se x i n, pronaći prvi broj dijeljiv brojem n počevši od cijelog broja x.

int main() {
  int x, n;
  int a = 1;

  cout<< "Unesite dva cijela broja: "<< endl;
  cin>> x >> n;

  while (a!=0){
   if (x<=n){
    if (n%x==0){
     cout<<"Prvi broj djeljiv sa "<< n << " je "<< x;
     a--;
    }
    else 
     x++;
   }
   else
    cout<< "Niti jedan broj veći od "<< x << " ili sam on nije dijeljiv sa "<< n;
    break;
  }
return 0;
}