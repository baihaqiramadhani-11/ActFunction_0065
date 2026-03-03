#include<iostream>
using namespace std;

//deklarasi global
    float p,l;

void input(){
        cout << "masukkan panjang : " ;
        cin >> p;
        cout << "masukkan lebar : " ;
        cin >>l;
}
float LuasPersegi(floatx, float y){
    return x*y;
}
int Jumlah(int a, int b, int c){
    return a*b*c;
}
void output (){
        cout << "hasilnya = " << LuasPersegi(p,l) << endl;
}