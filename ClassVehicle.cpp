#include<iostream>
using namespace std;

class Vehicle
{
public:
	Vehicle():model("No model"), averConsump(0.0f), distance(0.0f){}
	Vehicle(string Model, float FuelConsump, float Dist):model(Model), averConsump(FuelConsump), distance(Dist){}
	virtual void OutputData()
	{
		cout << "----------Non typed vehicle----------" << endl;
		cout << "Vehcile model:\t" << model << endl;
		cout << "Average fuel consumption of these vehicle:\t" << averConsump << endl;
		cout << "Distance covered by the vehicle:\t" << distance << endl;
	}
	virtual void Consumption()
	{	
		cout << "Amount of fuel used:\t" << averConsump * distance / 100 << "l" << endl;
	}

	~Vehicle() { cout << "destruct Car" << endl; }

protected:
	string model;
	float averConsump;
	float distance;
};

class Car: public Vehicle
{
public:
	Car(string Model, float FuelConsump, float Dist) :Vehicle(Model, FuelConsump,Dist){}
	virtual void OutputData() override
	{
		cout << "----------Car----------" << endl;
		cout << "Car model:\t" << model << endl;
		cout << "Average consumption of car (l/100 km):\t" << averConsump << "l" << endl;
		cout << "Distance covered by the car:\t" << distance << "km" << endl;
	}
	virtual void Consumption() override
	{
		cout << "Amount of fuel used:\t" << averConsump * distance / 100 << "l" << endl;
	}
	~Car() { cout << "destruct Car" << endl; }
};

class Plane:public Vehicle
{
public:
	Plane(string Model, float FuelConsump, float Dist) :Vehicle(Model, FuelConsump, Dist) {}

	virtual void OutputData() override
	{
		cout << "----------Plane----------" << endl;
		cout << "Plane model:\t" << model << endl;
		cout << "Average fuel consumption of these plane:\t" << averConsump << "l" << endl;
		cout << "Distance covered by the plane:\t" << distance << "km" << endl;
	}
	virtual void Consumption() override
	{
		cout << "Amount of fuel used:\t" << averConsump * distance / 100 << "l" << endl;
	}

	~Plane() { cout << "dectruct Plane" << endl; }
};

class Ship:public Vehicle
{
public:
	Ship(string Model, float FuelConsump, float Dist) :Vehicle(Model, FuelConsump, Dist) {}

	virtual void OutputData() override
	{
		cout << "----------Ship----------" << endl;
		cout << "Ship model:\t" << model << endl;
		cout << "Average fuel consumption of these ship:\t" << averConsump << "l" << endl;
		cout << "Distance covered by the ship:\t" << distance << "km" << endl;
	}
	virtual void Consumption() override
	{
		cout << "Amount of fuel used:\t" << averConsump * distance / 100 << "l" << endl;
	}

	~Ship() { cout << "destruct Ship" << endl; }
};

class Truck: public Vehicle
{
public:
	Truck(string Model, float FuelConsump, float Dist) :Vehicle(Model, FuelConsump, Dist) {}

	virtual void OutputData() override
	{
		cout << "----------Truck----------" << endl;
		cout << "Truck model:\t" << model << endl;
		cout << "Average fuel consumption of these truck:\t" << averConsump << "l" << endl;
		cout << "Distance covered by the truck:\t" << distance << "km" << endl;
	}
	virtual void Consumption() override
	{
		cout << "Amount of fuel used:\t" << averConsump * distance / 100 << "l" << endl;
	}
	~Truck() { cout << "destruct Truck" << endl; }
};
class Bicycle:public Vehicle
{

public:
	Bicycle(string Model, float FuelConsump, float Dist, float Weight, int Time) :Vehicle(Model, FuelConsump, Dist), weight(Weight), time(Time) {}

	virtual void OutputData() override
	{
		cout << "----------Bicycle----------" << endl;
		cout << "Bicycle model:\t" << model << endl;
		cout << "Average consumption of energy:\t" << averConsump << "kal" << endl;
		cout << "Distance covered by the bicycle:\t" << distance << "km" << endl;
		cout << "Driver's weight:\t" << weight << "kg" << endl;
		cout << "Time of travel:\t" << time << "min" << endl;
	}
	virtual void Consumption() override
	{
		cout << "Amount of energy used:\t" << 0.014 * weight * time * (0.12 * 140 - 7) << "kal" << endl;
	}
	~Bicycle() { cout << "destruct Bicycle" << endl; }

private:
	float weight;
	int time;
};




int main()
{
	Vehicle* obj = nullptr;
	int choose = 0;
	cout << " Vehicle fuel consumption\n\n"
		<< " 1 - Plane\n"
		<< " 2 - Ship\n"
		<< " 3 - Truck\n"
		<< " 4 - Bicycle\n"
		<< " 5 - Car\n"
		<< " \nMake your choice: ";

	cin >> choose;
	switch (choose)
	{
	case 1:
		obj = new Plane("Airbus A320", 192, 1200);
		break;
	case 2:
		obj = new Ship("Glory", 1570, 800);
		break;
	case 3:
		obj = new Truck("MAN", 46, 1000);
		break;
	case 4:
		obj = new Bicycle("Azimut", 150, 50, 75, 3);
		break;
	case 5:
		obj = new Car("Ford", 22, 350);
		break;
	default: 
		cout << "Wrong Input!!!" << endl;
		break;
	}
	if (obj != nullptr)
	{
		obj->OutputData();
		obj->Consumption();
	}
	else
	{
		obj = new Vehicle;
		obj->OutputData();
	}
	return 0;
}