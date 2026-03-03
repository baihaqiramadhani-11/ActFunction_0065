#include<iostream>
using namespace std;
//deklarasi global
    float p,l;
//implementasi prosedur
void input (){
    cout << "masukkan panjang : " ;
    cin >> p;
    cout << "masukkan lebar : " ;
    cin >> l; 
}
float LuasPersegi(){
    return p*l;
}
void Output (){
    cout << "hasilnya = " << LuasPersegi();
}