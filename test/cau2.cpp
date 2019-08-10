#include <iostream>
using namespace std;

void nhap(int &n, float *&a){
    cout << "So phan tu cua mang: "; cin >> n;
    while (n < 5){cout << "Yeu cau nhap n>=5, moi nhap lai: "; cin >> n;}
    cout << "Nhap danh sach cac phan tu mang." << endl; a = new float[n];
    for (int i = 0; i < n; i++){cout << "a[" << i + 1 << "] = "; cin >> a[i];}
}

void xuat(int n, float *a){
    cout << "- Danh sach mang: ";
    for (int i = 0; i < n; i++){cout << a[i] << ", ";}
    cout << endl;
}

void hienThiPhanTuDuong(int n, float *a){
    float tong = 0; int dem = 0;
    for (int i = 0; i < n; i++) if (a[i] > 0){tong += a[i]; dem++;}
    if (dem == 0){cout << "Mang khong co phan tu duong nao." << endl;}
    else{
        cout << "- Danh sach cac so duong trong mang: ";
        for (int i = 0; i < n; i++) if (a[i] > 0){cout << a[i] << ", ";}
        cout << endl << "- Tong cac phan tu duong trong mang: " << tong << endl;
        cout << "- Trung binh cong cac phan tu duong trong mang: " << tong / dem << endl;
    }
}

void xoaPhanTu(int n, float *a){
    for (int i = 0; i < n; i++){
        if (a[i] < 0){
            for (int j = i; j < n; j++){a[j] = a[j + 1];}
            n--; i--;
        }
        a = (float *)realloc(a, n * sizeof(float));
    }
}

int main(){
    int n; float *a;
    nhap(n, a); xuat(n, a);
    hienThiPhanTuDuong(n, a);
    xoaPhanTu(n, a); xuat(n, a);
    return 0;
}