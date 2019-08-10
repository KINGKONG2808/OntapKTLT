#include <iostream>
#include "string.h"
using namespace std;

void nhap(string &s){cout << "Nhap vao chuoi: "; getline(cin, s);}

void xuat(string s){cout << "Chuoi vua nhap: " << s << endl;}

int kiTu(string s){
    int dem = 0;
    for(int i=0; i<s.length(); i++){if(s[i]<48 || s[i]>57) dem++;}
    return dem;
}

void thayTheKyTu(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]==' ' && s[i+1]!=' '){
            if(65<=s[i+1] && s[i+1]<=90) continue;
            else {if(97<=s[i+1] && s[i+1]<122) s[i+1]-=32;}
        }
        if(97<=s[0] && s[0]<122) s[0]-=32;
    }
    cout << "Chuoi sau khi thay the tat ca chu cai dau: " << s << endl;
}

int main(){
    string s;
    nhap(s); xuat(s);
    cout << "So ky tu khong phai la so trong chuoi: " << kiTu(s) << endl;
    thayTheKyTu(s);
    return 0;
}