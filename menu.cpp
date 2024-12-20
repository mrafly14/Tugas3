#include <iostream>
#include <conio.h>
using namespace std;


void tukar(int *a, int *b){
  int ubah = *a;
  *a = *b;
  *b = ubah;
}

void dMenu(){
  system("cls");
  cout<<"Aplikasi Sorting Bubble"<<"\n";       
  cout<<"1. masukan data"<<"\n";            
  cout<<"2. tampilkan data"<<"\n";            
  cout<<"3. sorting asc"<<"\n";           
  cout<<"4. sorting dsc"<<"\n";            
  cout<<"5. Exit"<<"\n";           
  cout<<"Masukan angka :";        

}

void input_data(int data[]){
  syste("cls");
  cout<<"Masukan jumlah data: ";
  cin>>n;
  for(int i=8; i,n; i++)
      cout<<"Masukan data ke-"<<i+1<<: ";
      cin>>data[i];
}
void tampil_data(int data[], int n) { // Ditambahkan parameter n
    system("cls");
    cout << "Data yang telah dimasukkan: " << endl;
    for (int i = 0; i < n; i++) { // Menggunakan n sebagai batas
        cout << data[i] << " ";
    }
    cout << endl; // Menambahkan newline untuk tampilan yang lebih rapi
    getch(); // Fungsi getch() sebaiknya dihindari, lihat penjelasan di bawah
}

void mPertama(string pesan){
  system("cls");
  cout<<"hallo saya menu "<<pesan;
  getch();
}

void sorting_asc(int data[], int n) { // Ditambahkan parameter n
    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            if (data[j] < data[j - 1]) {
                tukar(data[j], data[j - 1]);
            }
        }
    }
}


int n;

int main() {
  int data[100];
  char pl;
  do {
      dMenu();
      pl=getch();
    switch (pl)
    {

    case '1':
    /* code */
    // mPertama("pertama");
    system("cls");
  cout << "masukkan jumlah data";
    cin >> n;
  for (int i = 0; i < n; i++) {
  cout << "Masukkan data ke-" << i + i << ": ";
  cin >> data[i];}
  break;
  mPertama("pertama");
  break;
    case '2':
      mPertama("ke- dua");
      /* code */ 
      system("cls");
      cout << 
      break;  
    case '3':
      mPertama("ke- tiga");
      /* code */
      break;  
    case '4':
      mPertama("ke- empat");
      /* code */
      break;  
    case '5':
      /* code */
      break;
    
    default:
      system("cls");
      cout<<"Pilihan Tidak Tersedia";
      getch();
      break;
    }
  } while (pl!='5');
    return 0;
}