#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a[10][10], b[10][10], ketqua[10][10];
    int m, n, p, q, i, j, k;
    
    cout << "Nhap so dong va cot cho ma tran A: ";
    cin >> m >> n;
    
    cout << "Nhap so dong va cot cho ma tran B: ";
    cin >> p >> q;
    
    //kiểm tra dòng A có bằng cột B không
    if(n == p)
    {
        cout << "Nhap ma tran A: "<<endl;
        for(i = 0; i < m; ++i)
        {
            for(j = 0;j < n; ++j)
            {
                cin >> a[i][j];
            }
        }
        
        cout << "Nhap ma tran B: "<<endl;
        for(i = 0;i < p; ++i)
        {
            for(j = 0;j < q;++j)
            {
                cin >> b[i][j];
                
            }
        }
        
        cout << "Ket qua cua phep nhan: "<<endl;
        for(i = 0; i < m; ++i)
        {
            for(j = 0; j < q; ++j)
            {
                 ketqua[i][j] = 0;
                for(k = 0; k < n; ++k)
                    ketqua[i][j] = ketqua[i][j]+(a[i][k]*b[k][j]);
                        cout << ketqua[i][j] << " ";
                       
            }
            
            cout << endl;
        }
    }
    else
    {
        cout << "Không thể thực hiện phép nhân ma trận!";
    }
 
    return 0;
}