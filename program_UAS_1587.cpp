#include <iostream>
using namespace std;
class Parkir{
	public :
		int jumlah(int keluar, int masuk){
				return keluar-masuk; 
			};
			
		int motor(int keluar, int masuk){
		 	return (keluar-masuk)*1000; 
 			};
 			
 		int mobil(int keluar, int masuk){
		 	return (keluar-masuk)*2000; 
 	};
};
int main (){
	int masuk;
	int keluar;
	int jumlah;
	int pilih;
	int mobil;
	int motor;
	Parkir parkir;
	cout<<"\t\t\tMENGHITUNG BIAYA PARKIR\n";
	cout<<"\n\nMasukan jam Masuk Kendaraan Anda= ";
	cin>>masuk;
	cout<<"\n\nMasukan jam Keluar Kendaraan Anda= ";
	cin>>keluar;
	cout<<"\nLama parkir:"<<parkir.jumlah(keluar,masuk)<<"jam"<<endl<<endl<<endl;
	cout<<"\n[1] motor\n[2] mobil"<<endl;
	cout<<"\nPilihan kendaraan :";
	cin>>pilih;
	cout<<"==========================================";
	cout<<"\n\t\tTotal Biaya"<<endl;
	cout<<"=========================================="<<endl;
		if (pilih==1){
			cout<<"Harga parkir motor anda adalah :"<<parkir.motor(keluar, masuk);
		}
		else if (pilih==2){
			cout<<"Harga parkir mobil anda adalah :"<<parkir.mobil(keluar, masuk);
		}

return 0;
}
