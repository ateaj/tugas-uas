#include <iostream>
#include <string>

using namespace std;

string np;
string nc;
char kode;
int tgl;
string nk;
int lama, harga, jb, ub, tb, uk;
float diskon;
int kamar, bayar;
string nkamar;

//void display() {
//  cout << "SISTEM INFORMASI PENYEWAAN KAMAR HOTEL " << endl;
//  cout << endl;
//}

void pemesanan() {
  cout << "Input Nama Customer: ";
  cin >> nc;
  cout << "Input Tanggal Check in: ";
  cin >> tgl;
  cout << "===========================================\n";
}

void jenis_kamar() {
  cout << "No   Jenis Kamar          " << endl;
  cout << "1.   Romeo  	(di Lantai Atas)" << endl;
  cout << "2.   Juliet 	(di Lantai Tengah)" << endl;
  cout << "3.   Aladdin	(di Lantai Bawah) " << endl;
  cout << "************************************" << endl;
  cout << "Pilih Jenis Kamar: ";
  cin >> kamar;
  

  if (kamar == 1) {
    nkamar = "Romeo";
  } else if (kamar == 2) {
    nkamar = "Juliet";
  } else if (kamar == 3) {
    nkamar = "Aladdin";
  }
  cout << endl;
  cout << "===========================================\n";
}

void kode_kamar() {
  cout << "1. Lily 		= Rp. 250.000,-/hari"<<endl;
  cout << "2. Sakura 		= Rp. 450.000,-/hari"<<endl;
  cout << "3. Mawar		= Rp. 750.000,-/hari"<<endl;
  cout << "Pilih Kode Kamar[L/S/M]:";
  cin >> kode;


  if (kode == 'L' || kode == 'l') {
    nk = "Lily";
    harga = 250000;
    cout << nk << " dengan harga : " << harga;
  } else if (kode == 'S' || kode == 's') {
    nk = "Sakura";
    harga = 450000;
    cout << nk << " dengan harga : " << harga;
  } else if (kode == 'M' || kode == 'm') {
    nk = "Mawar";
    harga = 750000;
    cout << nk << " dengan harga : " << harga;
  }
  cout << "\n";
  cout << "===========================================\n";
}

void Struk() {

  cout << "================================================================\n";
  cout << "			STRUK PEMESANAN	\n";
  cout << "================================================================\n";
  cout << "Nama Pengunjung 			: " << nc << endl;
  cout << "Tanggal Check-in			: " << tgl << endl;
  cout << "Tipe Kamar Yang Dipesan 	: " << nkamar << endl;
  cout << "Kode Kamar Yang Dipesan 	: " << nk << endl;
  cout << "Harga Sewa              	: " << harga << endl;
  cout << "Lama Sewa               	: " << lama;
  cout << "  Hari\n";
  cout << "-----------------------------------------------------------------\n";
  jb = harga * lama;
  cout << "Jumlah Bayar            	: " << jb << endl;
  diskon = 15000;
  cout << "Diskon				: " << diskon << endl;
  cout << "-----------------------------------------------------------------\n";
  tb = jb - diskon;
  cout << "Total Bayar             	: " << tb << endl;
  cout << "Uang Bayar              	: ";
  cin >> ub;
  uk = ub - tb;
  cout << "Uang Kembali           	 	: " << uk << endl;
  cout << "                   Terima Kasih Atas Kunjungan Anda";

}
void BuktiPemesanan() {
  string struk;
  cout << "Kamar yang anda pilih adalah " << nkamar << nk << " dengan harga Rp:" << harga << "/Hari" << endl;
  cout << "Berapa lama anda ingin menyewa kamar tersebut : ";
  cin >> lama;

  bayar = lama * harga;

  cout << endl;
  cout << "Jenis kamar pilihan anda : " << nkamar << nk << endl;
  cout << "Lama penyewaan anda " << lama << " hari" << endl;
  cout << "Total harga penyewaan yang harus anda bayar adalah  Rp; " << bayar << endl;
  cout << "apakah anda ingin mencetak struk pemesanan? \n";
  cout << "ya\tidak\n";
  cin >> struk;
  if (struk == "ya") {
    Struk();
  }
  if (struk == "tidak") {
    cout << "                   Terima Kasih Atas Kunjungan Anda";
  }
  cout << endl;
  
}

void menu() {
  int pilih;
  cout << "MENU KAMAR\n";
  cout << "Silahkan Pilih Menu Dibawah ini : \n";
  cout << "1. Pemesanan\n";
  cout << "2. Jenis Kamar\n";
  cout << "3. Kode Kamar\n";
  cout << "4. Bukti Pemesanan\n";
  cout << "5. EXIT\n";
  while (pilih != 5) {
    cout << "masukkan pilihan menu : ";
    cin >> pilih;
    // system("cls");
    switch (pilih) {
    case 1:
      printf("1. Pemesanan\n");
      pemesanan();
      break;
    case 2:
      printf("2. Jenis Kamar\n");
      jenis_kamar();
      break;
    case 3:
      printf("3. Kode Kamar\n");
      kode_kamar();
      break;
    case 4:
      printf("4. Bukti Pemesanan\n");
      BuktiPemesanan();
      break;
    case 5:
      printf("menu EXIT");
      break;
    }
  }
}

int main() {
	
  	menu();
  	
}
