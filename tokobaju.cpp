#include <iostream>
using namespace std;

int main () { 
	const double lebih_25 = 0.1;
	const double lebih_40 = 0.2;
	int kemeja = 90000,topi =35000,celanajeans = 100000;
	int total,hargaA,hargaB,diskonA,diskonB;

	
	cout<<"|=============================|"<<endl;
	cout<<"| HARGA KEMEJA Rp. 90.000/pcs |"<<endl;
	cout<<"| HARGA TOPI Rp. 35.000/pcs   |"<<endl;
	cout<<"| HARGA JEANS Rp. 100.000/pcs |"<<endl;
	cout<<"|=============================|"<<endl;
	
	cout<<"==========================================="<<endl;
	cout<<" MASUKAN JUMLAH KEMEJA YANG INGIN DIBELI = ";
	cin>>kemeja;
	cout<<" MASUKAN JUMLAH TOPI YANG INGIN DIBELI = ";
	cin>>topi;
	cout<<" MASUKAN JUMLAH JEANS YANG INGIN DIBELI = ";
	cin>>celanajeans;
	cout<<"============================================"<<endl;
	
	total = (kemeja*90000) + (topi*35000) + (celanajeans*100000);
	cout<<"Total Sebelum Diskon Rp. "<<total<<endl;
	if (total>400000) {
		diskonB = total*lebih_40;
		hargaB = total - diskonB;
		cout<<"Anda Mendapat Diskon 20%"<<endl;
		cout<<"Total Belanjaan Anda Adalah Rp."<<hargaB<<endl;
	} else if ( total>250000) {
		diskonA = total*lebih_25;
		hargaA = total-diskonA;
		cout<<" Anda Mendapat Diskon 10%       "<<endl;
		cout<<"Total Belanjaan Anda Adalah Rp."<<hargaA<<endl;
	} else if (total <250000) {
		cout<<"Anda Tidak Mendapatkan Diskon"<<endl;
		cout<<"Total Belanjaan Anda Adalah Rp."<<total<<endl;
	}
	

	return 0;
}
