#include <iostream>

using namespace std;

int main()
{
    string item = "";
    string item_sebelum = "Nothing", item_terbesar = "", item_terkecil = "";


    int stat = 0;
    int stat_terbesar = 0,stat_terkecil = 0;

    int jumlah = 0;
    char ulang = 'y';
    while (ulang == 'y'){
        cout << "Masukkan nama item : " ;
        cin >> item;

        cout << "Masukkan stat item : " ;
        cin >> stat;

        cout << "\nNama item = "<< item <<endl;
        cout << "Stat item = "<< stat <<endl;
        cout << "\nItem Sebelumnya = "<< item_sebelum <<endl;


        if(stat>stat_terbesar){
            cout << "Item Terbesar = "<< item <<endl;
            item_terbesar = item;
            stat_terbesar = stat;
        }else{
            cout << "Item Terbesar = "<< item_terbesar <<endl;
        }


        if(stat<stat_terkecil){
            cout << "Item Terkecil = "<< item <<endl;
            item_terkecil=item;
            stat_terkecil=stat;

        }else if(jumlah!=0){
            cout << "Item Terkecil = "<< item_terkecil <<endl;
        }else{
            cout << "Item Terkecil = "<< item <<endl;
            item_terkecil = item;
            stat_terkecil = stat;

        }



        item_sebelum = item;
        jumlah++;

        cout << "\nTambah item?(y/n) " ;
        cin >> ulang;
        cout << "\n";

    }



    return 0;
}
