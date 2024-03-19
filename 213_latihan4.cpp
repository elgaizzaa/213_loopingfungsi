#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCommpas, nNike;
int hAdidas =300, hNB =250, hPuma =150, hNike =350;

void input () {
        cout <<"masukan jumlah Adidas = ";
        cin >> nAdidas;

        cout << "masukan jumlah Puma = ";
        cin >> nPuma;

        cout <<"masukan jumlah NB = ";
        cin >> nNB;

        cout << "masukan jumlah commpas = ";
        cin >>nCommpas;

        cout <<"masukan jumlah nike = ";
        cin  >>nNike;

}

 int totalHarga() {
        return (nAdidas*nAdidas) +(nPuma*nPuma) +(nNB*nNB) + (nNike*nNike);
}

void display() {
        cout << endl;
        cout << "=========="<< endl;
        cout << endl;
        cout <<"Jumlah Puma = " << nPuma << endl;
        cout <<"Jumlah Adidas = " << nAdidas << endl;
        cout << endl;
        cout << "Total Harga = Rp." << totalHarga() <<endl;
}

int main(){
    input();
    display();
}