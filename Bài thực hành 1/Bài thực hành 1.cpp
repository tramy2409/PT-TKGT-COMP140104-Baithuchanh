#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define max 20
using namespace std;

float horner (float heso[], int n, float c) {
    int i; 
    float p = heso[0];
    for(int i = 1; i <=n; i++)
        p = p*c + heso[i];
        return p;
}

int main() {
    int i, n;
    float x, heso[max];
    cout << "Nhap vao bac n = ";
    cin >> n;
    cout << "Nhap vao he so da thuc: " <<endl;
    for(int i = 0; i <= n ; i++) {
        cout << "heso["<<i<<"] = "; 
        cin >> heso[i];
    }
    
    cout << "Nhap vao gia tri c can tinh: ";
    cin >> x;
    
    cout << "Gia tri cua da thuc can tim la: ";
    cout << fixed << setprecision (3) << horner(heso, n, x);
    return 0;
}