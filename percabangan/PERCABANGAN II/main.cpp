#include <iostream>
using namespace std;
/*
int main() {
	int hari = 4;
	
	switch(hari){
		case 1:
			cout << "Senin";
			break;
		case 2:
			cout << "Selasa";
			break;
		case 3:
			cout << "Rabu";
			break;
		case 4:
		cout << "Kamis";
			break;
		case 5:
			cout << "Jumat";
			break;
		case 6:
			cout << "Sabtu";
			break;
		case 7:
			cout << "Minggu";
			break;
default:
			cout<<"Angka diluar jangkauan";
	}
		cout<<endl<<"Program Selesai";
return 0;
}
*/

/// swich 2
/*
int main() {
	int hari = 4;
	
	if (hari == 1){
		cout << "Senin";
	} else if (hari == 2){
		cout << "Selasa";
	} else if (hari == 3){
		cout << "Rabu";
	} else if (hari == 4){
		cout << "Kamis";
	} else if (hari == 5){
		cout << "Jumat";
	} else if (hari == 6){
		cout << "Sabtu";
	} else {
		cout << "Minggu";
	}
}
*/

//// conditional oprator 1
/*
int main() {
	int a = 20;
	int b = 20;
	
	(a > b) ? cout << "A lebih besar dari B" : cout << "B lebih besar atau sama dengan A";
	
	cout << endl << "Program Selesai";
	return 0;
}
*/

//// conditional oprator 2
/*
int main() {
	int a = 20;
	int b = 20;
	
(a > b) ? cout << "A lebih besar dari B" : (a==b)? cout<<"A sama dengan B" : cout << "A lebih besar atau sama dengan B";
	cout << endl << "Program Selesai";
return 0;
}
*/

/// logical oprator 
/*
int main() {
	int a = 30;
	int b = 10;
	int c = 20;
	
	((a > b) && (a > c)) ? cout << "A Lebih dari B & C" : cout << "A Tidak Lebih dari B & C";
	
	return 0;
}
*/

////////////////////////////////////// TUGAS //////////////////////////////////////
/*
int main() {
	int bangunDatar;
	int panjang;
	int lebar;
	int jari;
	float hasil;
	float const PI = 3.14;
	
	cout<< "=========================================" <<endl;
	cout << "Masukan 1. untuk menghitung luas persegi \n"  <<endl;
	cout << "Masukan 2. untuk menghitung luas lingkaran \n"  <<endl;
       cout<< "=========================================" <<endl;
	cin >> bangunDatar;

	if(bangunDatar == 1){
		cout << "Masukan panjang dan lebar \n" ;
		cin >> panjang;
		cin >> lebar;
		hasil = panjang * lebar;
		cout << "Hasil : "<< hasil;
	} else if(bangunDatar == 2){
		cout << "Masukan Jari-jari \n" ;
		cin >> jari;
		hasil = PI * jari * jari ;
		cout << "Hasil : "<< hasil;
	} else {
		cout <<"Masukkan sesuai menu:";
	cout << "Hasil : "<<hasil;
	return 0;
}
}
*/


///////////////////////////////tugas 2///////////////////////////

int main() {
	int bangunDatar;
	int panjang;
	int lebar;
	int jari;
	float hasil;
	float const PI = 3.14;
	
	
	cout << "Masukan 1. untuk menghitung luas persegi \n" ;
	cout << "Masukan 2. untuk menghitung luas lingkaran \n" ;
	cin >> bangunDatar;
	if(bangunDatar == 1){
		cout << "Masukan Panjang dan lebar \n" ;
		cin >> panjang;
		cin >> lebar;
		hasil = panjang * lebar;
		
	} else if(bangunDatar == 2){
		cout << "Masukan Jari-jari \n" ;
		cin >> jari;
		hasil = PI *(jari,2) ;
	}
	cout << "Hasil : "<<hasil;
	return 0;
}
