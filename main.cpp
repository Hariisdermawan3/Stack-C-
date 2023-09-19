#include <iostream>
using namespace std;

int Top;
int n = 4;
int S[4];


void AWAL() {
    Top = -1;
}

void PUSH(int x) {
    if (Top < n - 1) {
        S[++Top] = x;
        cout << "PUSH " << x << endl;
    }
    else {
        cout << "Stack Penuh" << endl;
    }
}

int POP() {
    int x;
    if (Top > -1) {
        x = S[Top--];
        return x;
    }
    else {
        cout << "Stack kosong" << endl;
        return 0;
    }
}

void Tampil() {
    if (Top == -1) {
        cout << "Berhasil Tercetak" << endl;
        return;
    }
    cout << "Stack Kosong:" << endl;
    for (int i = 0; i <= Top; i++) {
        cout << "S[" << i << "]=" << S[i] << endl;
    }
}

int main() {
    AWAL(); 

    int cetak;
    do {
        cout<<"--------------------------------";
        cout << "\n       |  Pilih Menu |   \n";
        cout<<"--------------------------------"<<endl;
        cout << "1. PUSH\n";
        cout << "2. POP\n";
        cout << "3. CETAK STACK\n";
        cout << "4. QUIT\n";
        cout << "Pilih Menu 1/4 : ";
        cin >> cetak;

        switch (cetak) {
            case 1:
                int push;
                cout << "Cetak PUSH: ";
                cin >> push;
                PUSH(push);
                break;
            case 2:
            int pop;
            cout<<"Cetak POP : ";
            cin>> pop;
                POP();
                break;
            case 3:
                Tampil();
                break;
            case 4:
                cout<<"---------------------------------"<<endl;
                cout << "  \n     Berhasil Keluar  \n" << endl;
                cout<<"---------------------------------";
                break;
            default:
                cout << "Pilihan Anda Tidak Sesuai"<<endl;
        }
    } while (cetak != 4);

    return 0;
}