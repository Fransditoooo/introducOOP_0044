#include <iostream>
using namespace std;

class persegi_panjang{
    private:
        int panjang;
        int lebar;
        int luas;

    public:
        void input_Data(){
            cout << "Masukkan panjang";
            cin >> panjang;
            cout << "Masukkan lebar";
            cin >> lebar;
            cout << "Masukkan luas";
            cin >> luas;
        }

           void hitungLuas(){
                luas = panjang * lebar;

            }

            void output_data(){
                cout << "Tampilkan luas = " << luas << endl;
            }

            int main(){
                persegi_panjang selena;
                selena.input_Data();
                selena.hitung_Luas();
                selena.output_data();
            }
}