#include <iostream>
#include "math.h"

using namespace std;

int main(){
  float x1, x2, x3, y1, y2, y3;
  cout << "x1 = ";  cin >> x1;
  cout << "y1 = ";  cin >> y1;
  cout << "x2 = ";  cin >> x2;
  cout << "y2 = ";  cin >> y2;
  cout << "x3 = ";  cin >> x3;
  cout << "y3 = ";  cin >> y3;

  float x = (x1 + x2 + x3)/3;
  float y = (y1 + y2 + y3)/3;
  cout << "Toa do trong tam la: K( " << x << ", " << y << ")" << endl;

  float inter = sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y))+sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y))+sqrt((x3-x)*(x3-x)+(y3-y)*(y3-y));
  cout << "Do do Inter cua ba diem A, B, C la: " << inter << endl;

  return 0;
}
