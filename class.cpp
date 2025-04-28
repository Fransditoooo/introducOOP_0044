#include <iostream>
using namespace std;

class mahasiswa{
    public:
        int NIM;
        string nama;
        float nilai;

        void printData(){
            cout << "Nim = " << NIM << endl;
            cout << "Nama = " << nama << endl;
            cout << "Nilai = " << nilai << endl;
        }
};

