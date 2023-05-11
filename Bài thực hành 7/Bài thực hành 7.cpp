#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int a[20];
bool KT(int x,int y) { //x,y là vị trí mà quân hậu sẽ đặt vào
    for(int i = 1; i < x ;i++)
    if(a[i] == y || abs(i-x) == abs(a[i] - y) )
    //a[i] == y dùng để kiểm tra xem quân hậu này có nằm cùng một cột với các quân hậu trước đó.
    //abs(i - x) == abs( a[i] - y ) dùng để kiểm tra xem quân hậu này có nằm trên đường chéo của các quân hậu trước đó hay không
        return false;
    //Nếu kiểm tra hết các trường hợp vẫn không sai thì trả về true
    return true;
}
 
void Xuat(int n){
    //in ra một kết quả
    for(int i=1;i<=n;i++)
        cout << a[i] << " ";
        cout << endl;
}
 
void Try(int i,int n){
    for(int j = 1;j<=n;j++){
    // thử đặt quân hậu vào các cột từ 1 đến n
    if(KT(i,j)){
    //nếu cách đặt này thỏa mãn thì lưu lại vị trí
        a[i] = j;
    //nếu đặt xong quân hậu thứ n thì xuất ra một kết quả
    if(i==n) 
        Xuat(n);
    Try(i+1,n);
    }
    }
}
 
int main(){
    int n;
    cout << "Nhap so quan hau: ";
    cin >> n;
    Try(1,n);
    return 0;
}