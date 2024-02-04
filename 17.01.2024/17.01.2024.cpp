#include<iostream>
using namespace std;

class Fraction {
private:
	static int num;
	static int denom;
public:
	static int adittion() {
		return num + denom;
	}
	static int subtriction() {
		return num - denom;
	}
	static int multiplication() {
		return num*denom;
	}
	static double division() {
		return (double)num/denom;
	}
};
int Fraction::num{2};
int Fraction::denom{5};


int main() {
	cout << Fraction::adittion() << endl;
	cout << Fraction::subtriction() << endl;
	cout << Fraction::multiplication() << endl;
	cout << Fraction::division() << endl;
	return 0;
}