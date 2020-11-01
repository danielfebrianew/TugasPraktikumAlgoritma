#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	float harian, uts, uas, total;
	short pilihan;
	string username, matkul, password;
	char opsi;

	do{
		cout << "Login Akun=======================" << endl;
		cout << "Username\t: "; getline(cin,username); 
		cout << "Password\t: "; getline(cin,password);
		cout << "=================================" << endl;

		if ((username == "daniel") && (password == "daniel123200120")){
				cout << "LOGIN BERHASIL!!"<< endl << endl;

				cout << "Input Nilai Mata Kuliah :" << endl;

				cout << "1. Algoritma dan Pemrograman" << endl;
				cout << "2. Kalkulus" << endl;
				cout << "\nPilih\t: "; cin >> pilihan;

				switch (pilihan){
					case 1:
						matkul = "Algoritma dan Pemrograman";

						cout << "\nNilai Harian\t: "; cin >> harian;
						cout << "Nilai UTS\t: "; cin >> uts;
						cout << "Nilai UAS\t: "; cin >> uas;

						total = ((harian + uts + uas)/3);

							if (total >= 80){
								cout << "\nSELAMAT!! Anda lulus " << matkul;
								cout << " dengan nilai "<< setprecision(3) << total;
								cout << "\n\nApakah anda ingin menghitung lagi?(Y/N)";
								cin >> opsi;
								cout << endl;}
							else {
								cout << "\nTETAP SEMANGAT!! Anda belum lulus " << matkul;
								cout << " dengan nilai " << setprecision(3) << total << endl;
								cout << "\n\nApakah anda ingin menghitung lagi?(Y/N)";
								cin >> opsi;
								cout << endl;}
						break;
					case 2:
						matkul = "Kalkulus";

						cout << "\nNilai Harian\t: "; cin >> harian;
						cout << "Nilai UTS\t: "; cin >> uts;
						cout << "Nilai UAS\t: "; cin >> uas;

						total = ((harian + uts + uas)/3);

							if (total >= 80){
								cout << " dengan nilai " << setprecision(3) << total;
								cout << "\n\nApakah anda ingin menghitung lagi?(Y/N)";
								cin >> opsi;
								cout << endl;}
							else {
								cout << "TETAP SEMANGAT!! Anda belum lulus " << matkul;
								cout << " dengan nilai " << setprecision(3) << total << endl;
								cout << "\n\nApakah anda ingin menghitung lagi?(Y/N)";
								cin >> opsi;
								cout << endl;}
						break;
					default:
						cout << "PERIKSA KEMBALI INPUT YANG ANDA MASUKKAN!!" << endl;
						cout << "\n\nApakah anda ingin mencoba lagi?(Y/N)";
						cin >> opsi;
						cout << endl;
						break;}
		}else if((username == "daniel") && (password != "daniel123200120")){
				cout << "PASSWORD YANG ANDA MASUKKAN SALAH!!" << endl;
				cout << "\n\nApakah anda ingin mencoba lagi?(Y/N)";
				cin >> opsi;
				cout << endl;
		}else if(username != "daniel" && password == "daniel123200120"){
			cout << "USERNAME YANG ANDA MASUKKAN SALAH!!" << endl;
			cout << "\n\nApakah anda ingin mencoba lagi?(Y/N)";
			cin >> opsi;
			cout << endl;
		}else{
			cout << "USERNAME DAN PASSWORD YANG ANDA MASUKKAN SALAH!!" << endl;
			cout << "\n\nApakah anda ingin mencoba lagi?(Y/N)";
			cin >> opsi;
			cout << endl;
		}
		
		cin.get();

	}while(opsi == 'y' || opsi == 'Y');
		
cout << "TERIMAKASIH TELAH MENGGUNAKAN APLIKASI INI!!" << endl;

cin.get();
return 0;
}
