#include <iostream>
using namespace std;

class mobil{
    public:
        string nama_Mobil;
        string tipe_Mobil;
    private:
    int harga_Mobil;

    public:
        void printData(){
            cout << "Masukkan nama mobil = ";
            cin >> nama_Mobil;
            cout << "Masukkan tipe mobil = ";
            cin >> tipe_Mobil;
            cout << "Masukkan harga mobil = ";
            cin >> harga_Mobil;
        }
        void output_data(){
            cout << "harga mobil = " << harga_Mobil << endl;
        }
};

int main(){
    mobil brio;
    brio.input_Data();

    cout << "nama mobil = " << brio.nama_Mobil << endl;
    cout << "tipe mobil = " << brio.tipe_Mobil << endl;
    brio.output_data();
}
