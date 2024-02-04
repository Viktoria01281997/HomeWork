#include<iostream>
using namespace std;

class Kurs {
private:
	double rubInOneUsd=90.6626;
	double rubInOneEur = 98.6437;
public:
	void kursRub(double& rub) {
		double usd = rub / rubInOneUsd;
		double eur = rub / rubInOneEur;
		cout << "USD = " << usd << endl << "EUR = " << eur << endl;
	}
	void kursUsd(double& usd) {
		double rus = usd*rubInOneUsd;
		double eur = usd*0.9191;
		cout << "RUS = " << rus << endl << "EUR = " << eur << endl;
	}
	void kursEur(double& eur) {
		double rus = eur * rubInOneEur;
		double usd = eur * 1.0880;
		cout << "RUS = " << rus << endl << "USD = " << usd << endl;
	}
	
};





int main() {
	Kurs kurs;
	double rub, usd, eur;
	cout << "enter the number of rubles to convert them to  ";
	cin >> rub;
	kurs.kursRub(rub);
	cout << "enter the number of USD to convert them to  ";
	cin >> usd;
	kurs.kursUsd(usd);
	cout << "enter the number of EUR to convert them to  ";
	cin >> eur;
	kurs.kursEur(eur);
	return 0;
}