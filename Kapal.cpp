#include <iostream>
#include <iostream>
#include <string>
using namespace std;

class Kapal{
	public:
		double berat;
		string JenisKapal;
		string UkuranKapal;
		int KapasitasPenumpang;
		void Jarak(string Jarak);
};

int main(){
	Kapal KapalPesiar;
	Kapal KapalFeri;
	Kapal KapalSamudera;
	
	KapalPesiar.UkuranKapal="Besar";
	cout<<(KapalPesiar.UkuranKapal)<<endl;
	KapalPesiar.berat=225000;
	cout<<(KapalPesiar.berat)<<endl;
	KapalPesiar.JenisKapal="Pesiar";
	cout<<(KapalPesiar.JenisKapal)<<endl;
	KapalPesiar.Jarak("Pulau/Negara");
	cout<<endl;
	
	KapalSamudera.UkuranKapal="Sedang ";
	cout<<endl;
	cout<<(KapalSamudera.UkuranKapal)<<endl;
	KapalSamudera.berat=200000;
	cout<<(KapalSamudera.berat)<<endl;
	KapalSamudera.JenisKapal="Samudera";
	cout<<(KapalSamudera.JenisKapal)<<endl;
	KapalSamudera.Jarak("Pulau/Negara/KotaBesar");
	cout<<endl;
	
	KapalFeri.UkuranKapal="Sedang/Pendek ";
	cout<<endl;
	cout<<(KapalFeri.UkuranKapal)<<endl;
	KapalFeri.berat=200000;
	cout<<(KapalFeri.berat)<<endl;
	KapalFeri.JenisKapal="Feri";
	cout<<(KapalFeri.JenisKapal)<<endl;
	KapalFeri.Jarak("Kota Besar/KotaBiasa");
	
}
	void Kapal::Jarak(string Jarak){
		cout <<"Jarak Antar "<<Jarak;
	}

