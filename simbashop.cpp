#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
    int pilih;
    double total = 0;
    double total_modal = 0;
    double keuntungan = 0;

    const int Cupcakes_Strawberry = 10000, Cupcakes_Chocolatte = 10000;
    const int Donuts_Pumpkin = 7000, Donuts_Blueberry = 7000;
    const int Pie_Apple = 15000, Pie_Oatmeal = 15000;

    const int Modal_Cupcakes_Strawberry = Cupcakes_Strawberry * 0.7;
    const int Modal_Cupcakes_Chocolatte = Cupcakes_Chocolatte * 0.7;
    const int Modal_Donuts_Pumpkin = Donuts_Pumpkin * 0.7;
    const int Modal_Donuts_Blueberry = Donuts_Blueberry * 0.7;
    const int Modal_Pie_Apple = Pie_Apple * 0.7;
    const int Modal_Pie_Oatmeal = Pie_Oatmeal * 0.7;

    int stok_Cupcakes_Strawberry = 25, stok_Cupcakes_Chocolatte = 25;
    int stok_Donuts_Pumpkin = 25, stok_Donuts_Blueberry = 25;
    int stok_Pie_Apple = 25, stok_Pie_Oatmeal = 25;

    int terjual_Cupcakes_Strawberry = 0, terjual_Cupcakes_Chocolatte = 0;
    int terjual_Donuts_Pumpkin = 0, terjual_Donuts_Blueberry = 0;
    int terjual_Pie_Apple = 0, terjual_Pie_Oatmeal = 0;

    double total_Cupcakes_Strawberry = 0, total_Cupcakes_Chocolatte = 0;
    double total_Donuts_Pumpkin = 0, total_Donuts_Blueberry = 0;
    double total_Pie_Apple = 0, total_Pie_Oatmeal = 0;

    // Stok bahan-bahan
    int stok_Tepung = 100000; // dalam gram
    int stok_Telur = 500; // dalam butir
    int stok_Gula = 50000; // dalam gram
    int stok_SodaKue = 50000; // dalam gram
    int stok_Strawberry = 20000; // dalam gram
    int stok_Blueberry = 20000; // dalam gram
    int stok_Labu = 20000; // dalam gram
    int stok_Apel = 20000; // dalam gram
    int stok_Oatmeal = 20000; // dalam gram

    // Bahan yang dibutuhkan untuk setiap produk
    const int Tepung_per_Cupcake = 50, Telur_per_Cupcake = 1, Gula_per_Cupcake = 30, SodaKue_per_Cupcake = 5, Strawberry_per_Cupcake = 20;
    const int Tepung_per_Donut = 30, Telur_per_Donut = 1, Gula_per_Donut = 20, SodaKue_per_Donut = 3, Labu_per_Donut = 20, Blueberry_per_Donut = 20;
    const int Tepung_per_Pie = 100, Telur_per_Pie = 2, Gula_per_Pie = 50, SodaKue_per_Pie = 10, Apel_per_Pie = 50, Oatmeal_per_Pie = 50;

    char kembali;

    do {
        cout << "==============================" << endl;
        cout << "|         Bakery Shop        |" << endl;
        cout << "==============================" << endl;
        cout << "| 1. Menu                    |" << endl;
        cout << "| 2. Stok Produk             |" << endl;
        cout << "| 3. Stok Bahan              |" << endl;
        cout << "| 4. Laporan Penjualan       |" << endl;
        cout << "| 5. Keluar                  |" << endl;
        cout << "==============================" << endl;

        cout << "\nMasukkan Pilihan Anda (1-5): ";
        cin >> pilih;

        if (pilih < 1 || pilih > 5) {
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
            continue;
        }

        switch (pilih) {
            case 1: {
                int menu1 = 0, menu2 = 0, menu3 = 0, menu4 = 0, menu5 = 0, menu6 = 0;
                double bayar;
                double kembalian;

                do {
                    cout << "\n===================================" << endl;
                    cout << "|           Bakery Shop           |" << endl;
                    cout << "|           ---MENU---            |" << endl;
                    cout << "===================================" << endl;
                    cout << "| 1. Cupcakes Strawberry   10K    |" << endl;
                    cout << "| 2. Cupcakes Chocolatte   10K    |" << endl;
                    cout << "| 3. Donuts Pumpkin         7K    |" << endl;
                    cout << "| 4. Donuts Blueberry       7K    |" << endl;
                    cout << "| 5. Pie Apple             15K    |" << endl;
                    cout << "| 6. Pie Oatmeal           15K    |" << endl;
                    cout << "===================================" << endl;

                    cout << "\nMasukkan jumlah Pesanan (0 jika tidak memesan):" << endl;
                    cout << "Cupcakes Strawberry: ";
                    cin >> menu1;
                    if (menu1 > stok_Cupcakes_Strawberry) {
                        cout << "Stok tidak mencukupi. Pesanan ini diabaikan.\n";
                        menu1 = 0;
                    }

                    cout << "Cupcakes Chocolatte: ";
                    cin >> menu2;
                    if (menu2 > stok_Cupcakes_Chocolatte) {
                        cout << "Stok tidak mencukupi. Pesanan ini diabaikan.\n";
                        menu2 = 0;
                    }

                    cout << "Donuts Pumpkin: ";
                    cin >> menu3;
                    if (menu3 > stok_Donuts_Pumpkin) {
                        cout << "Stok tidak mencukupi. Pesanan ini diabaikan.\n";
                        menu3 = 0;
                    }

                    cout << "Donuts Blueberry: ";
                    cin >> menu4;
                    if (menu4 > stok_Donuts_Blueberry) {
                        cout << "Stok tidak mencukupi. Pesanan ini diabaikan.\n";
                        menu4 = 0;
                    }

                    cout << "Pie Apple: ";
                    cin >> menu5;
                    if (menu5 > stok_Pie_Apple) {
                        cout << "Stok tidak mencukupi. Pesanan ini diabaikan.\n";
                        menu5 = 0;
                    }

                    cout << "Pie Oatmeal: ";
                    cin >> menu6;
                    if (menu6 > stok_Pie_Oatmeal) {
                        cout << "Stok tidak mencukupi. Pesanan ini diabaikan.\n";
                        menu6 = 0;
                    }

                    total += (menu1 * Cupcakes_Strawberry) + (menu2 * Cupcakes_Chocolatte) +
                             (menu3 * Donuts_Pumpkin) + (menu4 * Donuts_Blueberry) +
                             (menu5 * Pie_Apple) + (menu6 * Pie_Oatmeal);

                    total_modal += (menu1 * Modal_Cupcakes_Strawberry) + (menu2 * Modal_Cupcakes_Chocolatte) +
                                   (menu3 * Modal_Donuts_Pumpkin) + (menu4 * Modal_Donuts_Blueberry) +
                                   (menu5 * Modal_Pie_Apple) + (menu6 * Modal_Pie_Oatmeal);

                    stok_Cupcakes_Strawberry -= menu1;
                    stok_Cupcakes_Chocolatte -= menu2;
                    stok_Donuts_Pumpkin -= menu3;
                    stok_Donuts_Blueberry -= menu4;
                    stok_Pie_Apple -= menu5;
                    stok_Pie_Oatmeal -= menu6;

                    terjual_Cupcakes_Strawberry += menu1;
                    terjual_Cupcakes_Chocolatte += menu2;
                    terjual_Donuts_Pumpkin += menu3;
                    terjual_Donuts_Blueberry += menu4;
                    terjual_Pie_Apple += menu5;
                    terjual_Pie_Oatmeal += menu6;

                    total_Cupcakes_Strawberry += menu1 * Cupcakes_Strawberry;
                    total_Cupcakes_Chocolatte += menu2 * Cupcakes_Chocolatte;
                    total_Donuts_Pumpkin += menu3 * Donuts_Pumpkin;
                    total_Donuts_Blueberry += menu4 * Donuts_Blueberry;
                    total_Pie_Apple += menu5 * Pie_Apple;
                    total_Pie_Oatmeal += menu6 * Pie_Oatmeal;

                    // Kurangi stok bahan
                    stok_Tepung -= (menu1 + menu2) * Tepung_per_Cupcake + (menu3 + menu4) * Tepung_per_Donut + (menu5 + menu6) * Tepung_per_Pie;
                    stok_Telur -= (menu1 + menu2) * Telur_per_Cupcake + (menu3 + menu4) * Telur_per_Donut + (menu5 + menu6) * Telur_per_Pie;
                    stok_Gula -= (menu1 + menu2) * Gula_per_Cupcake + (menu3 + menu4) * Gula_per_Donut + (menu5 + menu6) * Gula_per_Pie;
                    stok_SodaKue -= (menu1 + menu2) * SodaKue_per_Cupcake + (menu3 + menu4) * SodaKue_per_Donut + (menu5 + menu6) * SodaKue_per_Pie;
                    stok_Strawberry -= menu1 * Strawberry_per_Cupcake;
                    stok_Blueberry -= menu4 * Blueberry_per_Donut;
                    stok_Labu -= menu3 * Labu_per_Donut;
                    stok_Apel -= menu5 * Apel_per_Pie;
                    stok_Oatmeal -= menu6 * Oatmeal_per_Pie;

                    cout << "\nTotal belanja: Rp." << total << endl;
                    cout << "Bayar Tunai: Rp.";
                    cin >> bayar;

                    if (bayar < total) {
                        cout << "Uang tidak cukup! Masukkan nominal yang cukup: ";
                        cin >> bayar;
                    }

                    kembalian = bayar - total;
                    cout << "Kembalian: Rp." << kembalian << endl;
                    cout << "\nTerima kasih atas pembelian Anda!" << endl;

                    cout << "\nApakah Anda ingin memesan lagi? (y/n): ";
                    cin >> kembali;
                    
                } while (kembali == 'y' || kembali == 'Y');
                char cetak;
                int totalStrukCStraw = Cupcakes_Strawberry * menu1;
                int totalStrukCChoco = Cupcakes_Chocolatte * menu2;
                int totalStrukDPump = Donuts_Pumpkin * menu3;
                int totalStrukDBlue = Donuts_Blueberry * menu4;
                int totalStrukPApp = Pie_Apple * menu5;
                int totalStrukPOat = Pie_Oatmeal * menu6; 
                cout << "Cetak Struk Pembelian? (y/n): ";
                cin >> cetak;
                if (cetak == 'y'){
                    double subbayar;
                    subbayar = bayar;
                    double subkembalian;
                    subkembalian = kembalian;
                    cout << "\n===============================================================" << endl;
                    cout << "|                         Bakery Shop                       |" << endl;
                    cout << "|                       Struk Pembelian                       |" << endl;
                    cout << "===============================================================" << endl;
                    cout << "| No. | Bakery               | Harga Satuan | QTY |   Total   |" << endl;
                    cout << "===============================================================" << endl;                    
                    cout << "| 1.  | Cupcakes Strawberry  | 10K          | " << menu1 << "   |     " << totalStrukCStraw << " |" << endl;
                    cout << "| 2.  | Cupcakes Chocolatte  | 10K          | " << menu2 << "   |     " << totalStrukCChoco << " |" << endl;
                    cout << "| 3.  | Donuts Pumpkin       |  7K          | " << menu3 << "   |     " << totalStrukDPump << " |" << endl;
                    cout << "| 4.  | Donuts Blueberry     |  7K          | " << menu4 << "   |     " << totalStrukDBlue << " |" << endl;
                    cout << "| 5.  | Pie Apple            | 15K          | " << menu5 << "   |     " << totalStrukPApp << " |" << endl;
                    cout << "| 6.  | Pie Oatmeal          | 15K          | " << menu6 << "   |     " << totalStrukPOat << " |" <<endl;
                    cout << "===============================================================" << endl;
                    cout << "=======================================| SUBTOTAL |    " << total << " |" << endl;
                    cout << "=======================================|    BAYAR |    " << subbayar << " |" << endl;
                    cout << "=======================================|  KEMBALI |     " << subkembalian << " |" << endl;
                    cout << "===============================================================" << endl;

                    ofstream myFile;
                    myFile.open("struk_1.txt");
                    myFile << "===============================================================" << endl;
                    myFile << "|                         Bakery Shop                         |" << endl;
                    myFile << "|                       Struk Pembelian                       |" << endl;
                    myFile << "===============================================================" << endl;
                    myFile << "| No. | Bakery               | Harga Satuan | QTY |   Total   |" << endl;
                    myFile << "===============================================================" << endl;                    
                    myFile << "| 1.  | Cupcakes Strawberry  | 10K          | " << menu1 << "   |     " << totalStrukCStraw << " |" << endl;
                    myFile << "| 2.  | Cupcakes Chocolatte  | 10K          | " << menu2 << "   |     " << totalStrukCChoco << " |" << endl;
                    myFile << "| 3.  | Donuts Pumpkin       |  7K          | " << menu3 << "   |     " << totalStrukDPump << " |" << endl;
                    myFile << "| 4.  | Donuts Blueberry     |  7K          | " << menu4 << "   |     " << totalStrukDBlue << " |" << endl;
                    myFile << "| 5.  | Pie Apple            | 15K          | " << menu5 << "   |     " << totalStrukPApp << " |" << endl;
                    myFile << "| 6.  | Pie Oatmeal          | 15K          | " << menu6 << "   |     " << totalStrukPOat << " |" <<endl;
                    myFile << "===============================================================" << endl;
                    myFile << "=======================================| SUBTOTAL |    " << total << " |" << endl;
                    myFile << "=======================================|    BAYAR |    " << subbayar << " |" << endl;
                    myFile << "=======================================|  KEMBALI |     " << subkembalian << " |" << endl;
                    myFile << "===============================================================" << endl;
                    myFile.close();
                }
                else{
                    cout << "Tidak cetak";
                }

                break;
            }
            case 2: {
                cout << "\n====================================" << endl;
                cout << "|           Bakery Shop            |" << endl;
                cout << "|            ---STOK---            |" << endl;
                cout << "====================================" << endl;
                cout << "| Produk               |   Stok    |" << endl;
                cout << "| Cupcakes Strawberry  |" << setw(8) << stok_Cupcakes_Strawberry << "      |" << endl;
                cout << "| Cupcakes Chocolatte  |" << setw(8) << stok_Cupcakes_Chocolatte << "      |" << endl;
                cout << "| Donuts Pumpkin       |" << setw(8) << stok_Donuts_Pumpkin << "      |" << endl;
                cout << "| Donuts Blueberry     |" << setw(8) << stok_Donuts_Blueberry << "      |" << endl;
                cout << "| Pie Apple            |" << setw(8) << stok_Pie_Apple << "      |" << endl;
                cout << "| Pie Oatmeal          |" << setw(8) << stok_Pie_Oatmeal << "      |" << endl;
                cout << "====================================" << endl;

                break;
            }
            case 3: {
                cout << "\n==================================" << endl;
                cout << "|           Stok Bahan           |" << endl;
                cout << "==================================" << endl;
                cout << "| Bahan       |   Stok           |" << endl;
                cout << "==================================" << endl;
                cout << "| Tepung      |" << setw(8) << stok_Tepung << " gram     |" << endl;
                cout << "| Telur       |" << setw(8) << stok_Telur << " butir    |" << endl;
                cout << "| Gula        |" << setw(8) << stok_Gula << " gram     |" << endl;
                cout << "| Soda Kue    |" << setw(8) << stok_SodaKue << " gram     |" << endl;
                cout << "| Strawberry  |" << setw(8) << stok_Strawberry << " gram     |" << endl;
                cout << "| Blueberry   |" << setw(8) << stok_Blueberry << " gram     |" << endl;
                cout << "| Labu        |" << setw(8) << stok_Labu << " gram     |" << endl;
                cout << "| Apel        |" << setw(8) << stok_Apel << " gram     |" << endl;
                cout << "| Oatmeal     |" << setw(8) << stok_Oatmeal << " gram     |" << endl;
                cout << "==================================" << endl;
                break;
            }
            case 4: {
                cout << "\n=================================================" << endl;
                cout << "|               Laporan Penjualan               |" << endl;
                cout << "=================================================" << endl;
                cout << "| Produk               | Terjual  | Total (Rp)  |" << endl;
                cout << "| Cupcakes Strawberry  |" << setw(9) << terjual_Cupcakes_Strawberry << " |" << setw(12) << total_Cupcakes_Strawberry << " |" << endl;
                cout << "| Cupcakes Chocolatte  |" << setw(9) << terjual_Cupcakes_Chocolatte << " |" << setw(12) << total_Cupcakes_Chocolatte << " |" << endl;
                cout << "| Donuts Pumpkin       |" << setw(9) << terjual_Donuts_Pumpkin << " |" << setw(12) << total_Donuts_Pumpkin << " |" << endl;
                cout << "| Donuts Blueberry     |" << setw(9) << terjual_Donuts_Blueberry << " |" << setw(12) << total_Donuts_Blueberry << " |" << endl;
                cout << "| Pie Apple            |" << setw(9) << terjual_Pie_Apple << " |" << setw(12) << total_Pie_Apple << " |" << endl;
                cout << "| Pie Oatmeal          |" << setw(9) << terjual_Pie_Oatmeal << " |" << setw(12) << total_Pie_Oatmeal << " |" << endl;
                cout << "=================================================" << endl;
                cout << "| TOTAL HARIAN                    |" << setw(12) << total << " |" << endl;
                cout << "| TOTAL MODAL                     |" << setw(12) << total_modal << " |" << endl;
                keuntungan = total - total_modal;
                cout << "| KEUNTUNGAN                      |" << setw(12) << keuntungan << " |" << endl;
                cout << "=================================================" << endl;

                break;
            }
            case 5: {
                std::system("cls");
                exit(0);
            }
        }

        if (pilih != 5) {
            cout << "\nApakah Anda ingin kembali ke menu utama? (y/n): ";
            cin >> kembali;
            if (kembali != 'y' && kembali != 'Y') {
                pilih = 5;
                cout << "\nTerima kasih!" << endl;
                exit(0);
            }
        }
    } while (true);

    return 0;
}