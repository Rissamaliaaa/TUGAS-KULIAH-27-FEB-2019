// PROGRAM MENCARI DATA DAN INDEKSNYA BERUPA ANGKA
// Dibuat oleh : Risa Amalia
// NIM / PRODI : 18050623019 / D3 MANAJEMEN INFORMATIKA
// Mata Kuliah : Praktikum Struktur Data

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int R[10];
    int idx[20];
    int a,b,c,d;
    
	cout << endl;
    cout << " PROGRAM MENCARI DATA DAN INDEKSNYA BERUPA ANGKA " << endl;
    cout << " *^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^* "  << endl;
    cout << " Silahkan masukkan banyaknya data yang akan dicari : " ;
    cin  >> d;
    cout << endl ;

            for ( a = 1 ; a <= d ; a++ )
      {
            cout << " \t Data ke - " << a << " : " ;
            cin  >> R[a];
      }
      cout << endl ;
      cout << " \t Masukkan bilangan yang akan dicari : " ;
      cin  >> c ;
      cout << " ------------------------------------------------------------------ " << endl;

      b = 0 ;
      for ( a = 0 ; a < 10 ; a++ )
      {
            if( R[a]==c )
            {
                  idx[b] = a ;
                  b++;
            }
      }
      if ( b>0 )
      {
            cout << endl;
            cout << "\t Bilangan " << c << " ditemukan sebanyak " << b << " item \n";
            cout << "\t Bilangan yang anda cari terdapat pada index ke -  ";

            for ( a=0 ; a<b ; a++ )
            {
                  cout << idx[a] << " ";
            }
            cout << endl;
      }
      else
      {
            cout << endl;
            cout << "\t Ma'af, bilangan yang anda cari tidak terdapat pada array yang tersedia \n";
      }

      return 0;
}





