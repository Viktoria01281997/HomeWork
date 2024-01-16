#include<iostream>
using namespace std;


class Car {
private:
	int price;
	string color;
	string model;
	int engine—apacity;
public:
	int getPrice() {
		return price;
	}
	void setPrice(int pr) {
		price = pr;
	}
	string getColor() {
		return color;
	}
	void setColor(string cl) {
		color = cl;
	}
	string getModel() {
		return model;
	}
	void setModel(string mdl) {
		model = mdl;
	}
	int getEngineCapacity() {
		return engine—apacity;
	}
	void setEngineCapacity(int ec) {
		engine—apacity = ec;
	}
	void show() {
		cout << "Price: " << getPrice() << "\nColor: " << getColor() << "\nModel: " << getModel() << "\nEngine Capacity: " << getEngineCapacity() << endl << endl;
	}

};


int main() {
	Car exeed;
	exeed.setPrice(5600);
	exeed.setColor("green");
	exeed.setModel("Exeed VX");
	exeed.setEngineCapacity(5);
	exeed.show();

	Car porsche;
	porsche.setPrice(8700);
	porsche.setColor("red");
	porsche.setModel("Porsche Macan");
	porsche.setEngineCapacity(4);
	porsche.show();

	Car kia;
	kia.setPrice(3200);
	kia.setColor("blue");
	kia.setModel("KIA Rio");
	kia.setEngineCapacity(3);
	kia.show();

	Car suzuki;
	suzuki.setPrice(4600);
	suzuki.setColor("black");
	suzuki.setModel("Suzuki Vitara");
	suzuki.setEngineCapacity(4);
	suzuki.show();
	return 0;
}