#include <iostream>
using namespace std;

main (){
    int NIM1 [5][5];
    int x,y;
    
	cout<< "Masukkan Banyak Baris = ";
    cin>> x;
    cout<< "Masukkan Banyak Kolom = ";
    cin>> y;
    cout<<endl;
    
    for (int i = 0; i< x; i++){
    for (int j = 0; j < y; j++){
       cout<< "Masukkan NIM Mahasiswa " <<i<< "," << j << " = ";
       cin>>NIM1 [i][j];
        }
    }
cout<<endl;

for (int i = 0; i< x; i++){
    for (int j = 0; j < y; j++){
        cout<<NIM1 [i][j] <<"  ";
        }
        cout<<endl;
    }
cout<<"TRANSPOSE MATRIX  \n";
cout<<endl;
for (int i = 0; i< y; i++){
    for (int j = 0; j < x; j++){
        cout<<NIM1 [j][i] <<"  ";
        }
        cout<<endl<<endl;
    }
}
