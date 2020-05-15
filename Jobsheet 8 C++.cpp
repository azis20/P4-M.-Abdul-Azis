#include <iostream>
using namespace std;

int main (){
    int x[3],i;
    cout<<"masukkan NIM Terakhir Anda"<<endl;
    for(i=0;i<=2;i++){
        cout<<"Masukan NIM "<<i+1<<" : ";
        cin>>x[i];
    }
	cout<<endl;
    for(i=0;i<=2;i++){
        cout<<"NIM ke-"<<i+1<<" = "<<x[i]<<endl;} 
		cout<<endl;
return 0;
}
   
