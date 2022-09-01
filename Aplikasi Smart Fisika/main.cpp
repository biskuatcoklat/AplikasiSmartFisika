/*
*-----------------------------------------------------
*-	 Final Project Kelompok 10 Algoritma Pemograman	 -
*-	 Membuat Aplikasi Smart Fisika	                 -
*-----------------------------------------------------
*- Kelas  : IF 01
*- Author : 1. Erman Saputra 21.11.3859	             -
*-	        2. Zurais Salim 21.11.3860	             -
*-	        3. Wahyu Aprilliandhika 21.11.3869       -
*-	        4. Yusuf Aly Akbar Wicaksonno 21.11.3883 -
*-	        5. Hasyim Sri Wahyudi 21.11.3886         -
*-----------------------------------------------------
*/

//sebagai preprocessor dan file header pada c++
#include <iostream>	    //digunakan sebagai standar input output yang digunakan bahasa c++
#include "cursorx.h"    //file header
#include <string.h>	    //library string
#include <windows.h>    //library windows
#include <math.h>       //perhitungan

using namespace std;	                //agar cout dan cin dapat diakses

void login_berhasil()                   //fungsi login jika berhasil
{
    cout << "\t\t";
    cout << "Please wait..." << endl;   //menampilakan teks ketika proses loading berjalan
    cout << "\t\t";

    set_color(10, 0);                   //menampilkan warna padaprogress bar
    for (int i = 0; i < 29; i++)        //perungan for untuk perulangan pada progress bar
    {
        cout << char(219);	            //menmapilkan karakter ACII
        Sleep(100);	                    //untuk menghentikan sementara kerja program
    }
    set_color(27, 15);

    cout << "\n\t\tdone.." << endl;	    //menampilkan output bahwa progress bar telah berhasil dijalankan
    cout << "\t\tLogin berhasil!" << endl;	    //menampilkan output bahwa program telah berhasil dijalankan
    Sleep(1500);                        //untuk menghentikan sementara kerja program
    system("cls");	                    //digunakan untuk clear screen console
    system("COLOR F");                  //digunakan untuk memberi warna light white pada teks
}

void login_gagal()                      //fungsi login jika gagal
{
    cout << "\t\t";
    cout << "Please wait..." << endl;   //menampilakan teks ketika proses loading berjalan
    cout << "\t\t";

    set_color(10, 0);	                //menampilkan warna pada progress bar
    for (int i = 0; i < 29; ++i)        //perungan for untuk perulangan pada progress bar
    {
        cout << char(219);	            //menmapilkan karakter ACII
        Sleep(100);	                    //untuk menghentikan sementara kerja program
    }
    set_color(27, 15);

    cout << "\n\t\tdone.." << endl;      //menampilkan output bahwa progress bar berhasil dijalankan
    cout << "\t\tLogin failed!" << endl;     //menampilkan bahwa proses login gagal
    Sleep(2000);                        //untuk menghentikan sementara kerja program
    system("cls");	                    //digunakan untuk clear screen console
    system("COLOR F");	                //untuk memberikan warna light white pada teks
}

boolean login(string user_id, string password) //tipe data untuk menyatakan kondisi true atau false
{
    //struktur keputusan
    if (user_id == "kelompok9" && password == "12345")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() //fungsi main
{
    boolean ceklogin = false;
    string user_id, password;

    while (ceklogin == false) //pengulangan while berfungsi apabila login gagal maka program akan tidak berjalan ke program berikutnya
    {
        cout << "Username : ";
        cin >> user_id;	//menginput username
        cout << "Password : ";
        cin >> password;	//menginput password

        if (login(user_id, password) == true) //kontrol keputusan jika true
        {
            login_berhasil();
            ceklogin = true;
        }
        else
        {
            login_gagal();	//kontrol keputusan jika salah
        }
    }

    int pilihan; //deklarasi variabel
    char ulang, u;
    float m, v, t, T, p, l, g, h, i, r, kondisi = 1;    //deklarasi variabel
    float manis, kecepatan, gaya, frekuensi, volume, luas, energipotensial, OHM;

    //menampilkan nama aplikasi agar terlihat rapih
    menu:
    cout << "-------------------------------------------------------" << endl;
    cout << "-      Selamat Datang Di Aplikasi Smart Fisika        -" << endl;
    cout << "-------------------------------------------------------" << endl;


    //menampilkan menu pilihan perhitungan fisika
    cout << "-------------------------------------------------------" << endl;
    cout << "-     Pilih Salah Satu Bahasan Yang Ingin Dipilih     -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "-     1. Menghitung Massa Jenis                       -" << endl;
    cout << "-     2. Menghitung Kecepatan                         -" << endl;
    cout << "-     3. Menghitung Besaran Gaya                      -" << endl;
    cout << "-     4. Menghitung Frekuensi Getaran                 -" << endl;
    cout << "-     5. Menghitung Besaran Volume                    -" << endl;
    cout << "-     6. Menghitung Besaran Panjang                   -" << endl;
    cout << "-     7. Menghitung Energi Potensial                  -" << endl;
    cout << "-     8. Menghitung Hukum Ohm                         -" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Masukkan Pilihan Anda : "; cin >> pilihan; //menerima inputan
    cout << "-------------------------------------------------------" << endl;

    switch (pilihan) //pernyataan switch
    {
    case 1: //pernyataan pertama
        cout << "-------------------------------------------------------" << endl;
        cout << "-              1. Menghitung Massa Jenis              -" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Masukkan Nilai Massa  (m): "; cin >> m;	//memaskkan nilai atau angka yang akan dihitung
        cout << "Masukkan Nilai Volume (v): "; cin >> v;	//memaskkan nilai atau angka yang akan dihitung
        manis = m / v;	//operator perhitungan
        cout << "-------------------------------------------------------" << endl;
        cout << "Nilai Massa Jenis Adalah: " << manis << " kg/m3" << endl; //menampilkan hasil perhitungan
        kondisi = 0; //kondisi dijalankan
        cout << "-------------------------------------------------------" << endl;
        break; //eksekusi diakhir pernyataan switch

    case 2: //pernyataan kedua
        cout << "-------------------------------------------------------" << endl;
        cout << "-               2. Menghitung Kecepatan               -" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Masukkan Nilai Jarak (v): "; cin >> v;   //memaskkan nilai atau angka yang akan dihitung
        cout << "Masukkan Nilai waktu (t): "; cin >> t;   //memaskkan nilai atau angka yang akan dihitung
        kecepatan = v / t; //operator perhitungan
        cout << "-------------------------------------------------------" << endl;
        cout << "Nilai Kecepatan Adalah: " << kecepatan << " ms2" << endl; //menampilkan hasil perhitungan
        cout << "-------------------------------------------------------" << endl;
        kondisi = 0; //kondisi dijalankan
        break; //eksekusi diakhir pernyataan switch

    case 3: //pernyataan ketiga
        cout << "-------------------------------------------------------" << endl;
        cout << "-             3. Menghitung Besaran Gaya              -" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Masukkan Nilai Massa       (m): "; cin >> m;   //memasukkan nilai atau angka yang akan dihitung
        cout << "Masukkan Nilai Grativitasi (g): "; cin >> g;  //memasukkan nilai atau angka yang akan dihitungn
        gaya = m * g; //operator perhitungan
        cout << "-------------------------------------------------------" << endl;
        cout << "Nilai Besaran Gaya Adalah: " << gaya << " kg/m3" << endl; //menampilkan hasil perhitungan
        cout << "-------------------------------------------------------" << endl;
        kondisi = 0; //kondisi dijalankan
        break; //eksekusi diakhir pernyataan switch

    case 4: //pernyataan keempat
        cout << "-------------------------------------------------------" << endl;
        cout << "-               4. Menghitung Frekuensi               -" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Masukkan Nilai Getaran (m): "; cin >> T;//memasukkan nilai atau angka yang akan dihitung
        frekuensi = 1 / T; //operator perhitungan
        cout << "-------------------------------------------------------" << endl;
        cout << "Nilai Frekuensi Adalah: " << frekuensi << " Hz" << endl; //menampilkan hasil perhitungan
        cout << "-------------------------------------------------------" << endl;
        kondisi = 0; //kondisi dijalankan
        break; //eksekusi diakhiri pernyataan switch

    case 5: //pernyataan kelima
        cout << "-------------------------------------------------------" << endl;
        cout << "-            5. Menghitung Besaran Volume             -" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Masukkan Nilai panjang (p): "; cin >> p; //memasukkan nilai atau angka yang akan dihitung
        cout << "Masukkan Nilai Luas    (l): "; cin >> l;  //memasukkan nilai atau angka yang akan dihitung
        cout << "Masuukan Nilai Tinggi  (t): "; cin >> t;  //memasukkan nilai atau angka yang akan dihitung
        volume = p * l * t; //operator perhitungan
        cout << "-------------------------------------------------------" << endl;
        cout << "Nilai Volume Adalah: " << volume << " m3" << endl; //menampilkan hasil perhitungan
        cout << "-------------------------------------------------------" << endl;
        kondisi = 0; //kondisi dijalankan
        break; //eksekusi diakhiri pernyataan switch

    case 6: //pernyataan keenam
        cout << "-------------------------------------------------------" << endl;
        cout << "-             6. Menghitung Besaran Luas              -" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Masukkan Nilai panjang (p): "; cin >> p;  //memasukkan nilai atau angka yang akan dihitung
        cout << "Masukkan Nilai Luas    (l): "; cin >> l;  //memasukkan nilai atau angka yang akan dihitung
        luas = p * l; //operator perhitungan
        cout << "-------------------------------------------------------" << endl;
        cout << "Nilai Volume Adalah: " << luas << " m2" << endl;  //menampilkan hasil perhitungan
        cout << "-------------------------------------------------------" << endl;
        kondisi = 0; //kondisi dijalankan
        break; //eksekusi diakhiri pernyataan switch

    case 7: //pernyataan ke tujuh
        cout << "-------------------------------------------------------" << endl;
        cout << "-           7. Menghitung Energi Potensial            -" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Masukkan Nilai massa     (m): "; cin >> m;  //memasukkan nilai atau angka yang akan dihitung
        cout << "Masukkan Nilai gravitasi (g): "; cin >> g;  //memasukkan nilai atau angka yang akan dihitung
        cout << "Masukkan Nilai Tinggi    (h): "; cin >> h;  //memasukkan nilai atau angka yang akan dihitung
        energipotensial = m * g * h;    //operator perhitungan
        cout << "-------------------------------------------------------" << endl;
        cout << "Nilai Volume Adalah: " << energipotensial << " m2" << endl; //menampilkan hasil perhitungan
        cout << "-------------------------------------------------------" << endl;
        kondisi = 0; //kondisi dijalankan
        break; //eksekusi diakhiri pernyataan switch

    case 8:	//pernyataan kedelapan
        cout << "-------------------------------------------------------" << endl;
        cout << "-               8. Menghitung Hukum Ohm               -" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Masukkan Nilai kuat arus (i): "; cin >> i;    //memasukkan nilai atau angka yang akan dihitung
        cout << "Masukkan Nilai Hambatam  (r): "; cin >> r;    //memasukkan nilai atau angka yang akan dihitung
        OHM = i * r; //operator perhitungan
        cout << "-------------------------------------------------------" << endl;
        cout << "Nilai Volume Adalah: " << OHM << " OHM" << endl;   //menampilkan hasil perhitungan
        cout << "-------------------------------------------------------" << endl;
        kondisi = 0; //kondisi di jalankan
        break;	//eksekusi pernyataan switch

    default:
        cout << "Pilihan Anda Tidak Tersedia.\n" << endl;
        cout << "Apakah Anda Ingin Input Ulang? [y/n] : "; //menyanyakan apakah input ulang
        cin >> u;
        if (u == 'Y' || u == 'y') {  //jika pilihan Y/y maka akan input ulang
            system("cls");
            goto menu; //kembali ke program
        }
        else {
            cout << "-------------------------------------------------------" << endl;
            cout << "            PROGRAM SELESAI, TERIMA KASIH...           " << endl; //program selesai
            cout << "-------------------------------------------------------" << endl;
            exit(0);
        }
        system("cls");
        break;
    }
    cout << endl;
    cout << "Apakah Anda Ingin Input Lagi? [y/n] : ";   //jika pilihan Y/y maka akan input lagi
    cin >> ulang;
    cout << "-------------------------------------------------------" << endl;
    if (ulang == 'Y' || ulang == 'y') {  //jika pilihan Y/y maka akan input lagi
        system("cls");
        goto menu; //kembali ke program
    }
    else {
        cout << "-------------------------------------------------------" << endl;
        cout << "-         PROGRAM SELESAI, TERIMA KASIH...            -" << endl;    //program selesai
        cout << "-------------------------------------------------------" << endl;
        exit(0);
    }


    system("pause");	//menahan tampilan layar
    return 0;
}



