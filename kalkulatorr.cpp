#include <iostream>
#include "kalkulator.h"
using namespace std;
//Nama : Muhammad Salman Al Farisy
//NIM : 2100018274

int main() {
	int menu;
	float a,b;
	string ulang;
	do{
		cout<<"PROGRAM KALKULATOR"<<endl;
		cout<<"Menu Operasi : "<<endl;
		cout<<"\t1. Penambahan"<<endl;
		cout<<"\t2. Pengurangan"<<endl;
		cout<<"\t3. Perkalian"<<endl;
		cout<<"\t4. Pembagian"<<endl;
		cout<<endl<<"Pilih Menu No : ";cin>>menu;
		switch(menu){
			case 1:
				cout<<"Masukkan bilangan pertama : ";cin>>a;
				cout<<"Masukkan bilangan kedua : ";cin>>b;
				cout<<"Hasil "<<a<<" + "<<b<<" = "<<tambah(a,b)<<endl;
				cout<<"Lanjut? (y|t) ";cin>>ulang;
				break;
			case 2:
				cout<<"Masukkan bilangan pertama : ";cin>>a;
				cout<<"Masukkan bilangan kedua : ";cin>>b;
				cout<<"Hasil "<<a<<" - "<<b<<" = "<<kurang(a,b)<<endl;
				cout<<"Lanjut? (y|t) ";cin>>ulang;
				break;
			case 3:
				cout<<"Masukkan bilangan pertama : ";cin>>a;
				cout<<"Masukkan bilangan kedua : ";cin>>b;
				cout<<"Hasil "<<a<<" x "<<b<<" = "<<perkalian(a,b)<<endl;
				cout<<"Lanjut? (y|t) ";cin>>ulang;
				break;
			case 4:
				cout<<"Masukkan bilangan pertama : ";cin>>a;
				cout<<"Masukkan bilangan kedua : ";cin>>b;
				cout<<"Hasil "<<a<<" : "<<b<<" = "<<bagi(a,b)<<endl;
				cout<<"Lanjut? (y|t) ";cin>>ulang;
				break;
			default:
				cout<<"Pilihan tidak tersedia";
				break;
		}
	}while(ulang=="y");
	return 0;
}
