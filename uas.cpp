#include <iostream>
#include <math.h>  

using namespace std;

int main () {

cout << "Nama : Dea Amelia Azzahra" << endl;
cout << "Nrp  : 152021185" << endl;
cout << "UTS PEMROGRAMAN DASAR" << endl;
cout << "=======================================" << endl;

float n,x[100],y[100],xy,x2,sigmax,sigmay,r,koef,pow;

    cout << "Input Banyaknya n : " ;
    cin >> n;
 

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan Nilai x ke-" << i << " : ";
        cin >> x[i];
        cout << "Masukkan Nilai y ke-" << i << " : ";
        cin >> y[i];
  }

  sigmax = 0;
  for (int i = 1; i <= n; i++) {
    sigmax = sigmax + x[i];
  }

  sigmay = 0;
  for (int i = 1; i <= n; i++) {
    sigmay = sigmay + x[i];
  }

        cout << "Nilai Korelasi r = " << r << endl;

        for (int i = 1; i <= n; i++) {
          cout << "Nilai Koefisiensi Determinasi = " << koef << endl;
          koef = (r * r) * 1;
        }
        
  return 0;
}