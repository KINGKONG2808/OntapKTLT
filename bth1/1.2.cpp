#include <iostream>

using namespace std;

int main(){
        int n;
        cout << "nhap n = ";  cin >> n;
        int nghin = n/1000;
        int tram = (n%1000)/100;
        int chuc = (n%100)/10;
        int dvi = n%10;
        cout << "So ban vua nhap la: " << nghin << " nghin " << tram << " tram " << chuc << " chuc " << dvi << " donvi." <<endl;
        return 0;
}
