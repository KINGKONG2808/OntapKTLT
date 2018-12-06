#include <iostream>
#include "math.h"

using namespace std;

int main(){
        int x;
        cout << "x = "; cin >> x;
        cout << "F(x) = " << (float)(x*x + (float)exp(fabs(x)) + sin(x)*sin(x))/pow(x*x+1, 0.2) << endl;
        return 0;
}
