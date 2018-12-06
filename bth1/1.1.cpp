#include <iostream>
#include "math.h"

using namespace std;

int main(){
        int a, b;
        cout << "a = "; cin >> a;
        cout << "b = "; cin >> b;

        cout << "Tong hai so la: " << a+b << endl;
        cout << "Hieu hai so la: " << a-b << endl;
        cout << "Tich hai so la: " << a*b << endl;
        cout << "Thuong hai so la: " << (float)a/b << endl;
        cout << "Dong du hai so la: " << a%b << endl;

        return 0;
}
