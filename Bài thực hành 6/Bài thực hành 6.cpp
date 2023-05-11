#include<iostream>
using namespace std;
void Tower(int n , char a, char b, char c ){
    if(n==1){
        cout<<"\t"<<a<<"---->"<<c<<endl; //nếu n = 1 thì dịch chuyển từ A -> C
    return;
    }
    //Nếu n > 1 thì thực hiện lần lượt
    Tower(n-1,a,c,b); //Bước 1: Dịch chuyển n-1 đĩa từ A -> B
    Tower(1,a,b,c); //Bước 2: Dịch chuyển đĩa thứ n từ A -> C
    Tower(n-1,b,a,c); //Bước 3: Dịch chuyển n-1 đĩa từ B->C
}
int main(){
    char a='A', b='B', c='C';
    int n;
    cout<<"Nhap so dia: ";
    cin>>n;
    Tower(n,a,b,c);
}