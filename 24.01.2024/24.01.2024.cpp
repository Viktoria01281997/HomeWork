#include<iostream>
using namespace std;
#define random(a,b) a+rand()%(b+1-a)

class Car {
private:
	int price;
	string color;
	string model;
	int engineÑapacity;
	int numberCar;
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
		return engineÑapacity;
	}
	void setEngineCapacity(int ec) {
		engineÑapacity = ec;
	}
	void setNumberCar(int numberCar) {
		this->numberCar = numberCar;
	}
	int getNumberCar() {
		return numberCar;
	}
	void show() {
		cout << "Price: " << getPrice() << "\nColor: " << getColor() << "\nModel: " << getModel() << "\nEngine Capacity: " << getEngineCapacity() << endl << endl;
	}

};
class Garage {
private:
	
	int price;
	string color;
	string model;
	int engineÑapacity;
	int numberCar;
public:
	Garage (Car& car) {
		this->numberCar = car.getNumberCar();
		this->price = car.getPrice();
		this->color = car.getColor();
		this->model = car.getModel();
		this->engineÑapacity = car.getEngineCapacity();

		cout <<"Number car:  "<<car.getNumberCar()<< "\nPrice: " << car.getPrice() << "\nColor : " << car.getColor() << "\nModel : " << car.getModel() << "\nEngine Capacity : " <<
			car.getEngineCapacity() << endl << endl;
	}
	~Garage() {
		
	}

};

int main() {
	Car exeed;
	exeed.setPrice(5600);
	exeed.setColor("green");
	exeed.setModel("Exeed VX");
	exeed.setEngineCapacity(5);
	exeed.setNumberCar(random(100,999));

	Car porsche;
	porsche.setPrice(8700);
	porsche.setColor("red");
	porsche.setModel("Porsche Macan");
	porsche.setEngineCapacity(4);
	porsche.setNumberCar(random(100, 999));

	Car kia;
	kia.setPrice(3200);
	kia.setColor("blue");
	kia.setModel("KIA Rio");
	kia.setEngineCapacity(3);
	kia.setNumberCar(random(100, 999));

	Car suzuki;
	suzuki.setPrice(4600);
	suzuki.setColor("black");
	suzuki.setModel("Suzuki Vitara");
	suzuki.setEngineCapacity(4);
	suzuki.setNumberCar(random(100, 999));

	Garage d(exeed);
	
	return 0;
}