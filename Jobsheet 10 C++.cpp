#include <iostream>
using namespace std;

main (){
     char nama [2][2][20];
     int i, j;
     for (i = 0; i< 3; i++){
         for (j = 0; j < 3; j++){
             cout<< "Nama Mahasiswa [" <<i<<"][" << j << "] = ";
             cin>>nama[i][j];
         }
         cout<<endl;
    }
}
