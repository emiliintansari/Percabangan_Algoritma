#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*for([inisialisasi];[test kondisi];[increment/decerment]){
		[pernyataan]
	}*/
	
	/// ini selang seling hai dan hallo 
	/* cout<<" for pake kurungkurawal"<<endl;
	for(int counter=1;counter<=8;counter++){
		cout<<"hai"<<endl;
		cout<<"hallo"<<endl;
	}*/
	// kalo ini hai nya 8x dan hallo nya 1x setelah hai terakhir
	// kalau gada kurung kurawal yang di eksekusi kondisi pertama 
	/* cout<<" for ga pake kurungkurawal"<<endl;
	for(int counter=1;counter<=8;counter++)
	    cout<<"hai"<<endl;
		cout<<"hallo"<<endl;
	*/
	
	/*cout<<" while ketika "<<endl;
	int counter=1;
	while(counter<=8){
		cout<<"hai"<<endl;
		counter++;
	}*/
	
	/*int counter=1;
	do{
		cout<<"hai"<<endl;
		counter++;
	}while(counter<=8);
	*/

//PERULANGAN NESTED LOOP (LOOPING DIDALAM LOOPING)
	
	int i,j;
	i=1;
	while (i<10){
		j=1;
		while(j<i){
			cout<<"*";
			j++;
	};
	cout<<endl;
	i++;
}

/*
for(int i=1;i<=8;i++){
for(int j=0;j<i;j++){
cout << "* ";
}
cout << endl;
}
*/


/*
int isContinue;

do {

cout << "========================================" << endl;
cout << "Apakah mau lanjut ?" <<endl;
cout << "Masukan 1. Hitung bangun lain" << endl;
cout << "Masukan Bilangan lain untuk keluar" << endl;
cout << "========================================" << endl;
cin >> isContinue;

system("cls");

} while (isContinue == 1);





*/





	return 0;
}
