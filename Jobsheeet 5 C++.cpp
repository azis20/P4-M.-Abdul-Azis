#include <iostream>
#include <cstdlib>
using namespace std;

main (){
int NIM1[2][2];
int NIM2[2][2];
int hasil [2][2];
int x, y;
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
cout<< "Masukkan NIM Mahasiswa pertama " << x << "," << y << " = ";
cin>> NIM1[x][y];
}
}
cout<<endl;
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
cout<< "Masukkan NIM Mahasiswa kedua " << x << "," << y << " = ";
cin>> NIM2[x][y];
}
}
cout<<endl;
cout<<"Hasil Perkaliannya adalah \n";
for (x = 0; x < 2; x++){
for (y = 0; y < 2; y++){
hasil [x][y] = NIM1[x][0]*NIM2[0][y]+NIM1[x][1]*NIM2[1][y];
cout<<hasil [x][y] <<" ";
}
cout<<endl;
}
}
