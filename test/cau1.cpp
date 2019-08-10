#include <iostream>
#include "math.h"
using namespace std;

void nhap(int &n, float &x){
    cout << "Nhap so nguyen duong n: "; cin >> n;
    cout << "Nhap so thuc x: "; cin >> x;
}

float tinhS(int n, float x){
    float s = 0;
    if (n>=2 && x!=0){for (int i=2; i<=n; i++) s+=(float)sqrt(x*x)/i;}
    else {s=n*n*x;}
    return s;
}

int main(){
    int n; float x;
    nhap(n, x);
    cout << "Gia tri bieu thuc S = " << tinhS(n, x) << endl;
    return 0;
}