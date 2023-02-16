#include<iostream>
using namespace std;

class Vehicle
{
public:
	Vehicle():model("No model"), averConsump(0.0f), distance(0.0f), seetsAmount(0), fuelCost(0.0f), loadCapacity(0){}
	Vehicle(string Model, float FuelConsump, int SeetsAmount, int LoadCapacity, float FuelCost):
	model(Model), averConsump(FuelConsump), seetsAmount(SeetsAmount), loadCapacity(LoadCapacity), fuelCost(FuelCost){}
	virtual void OutputData()
	{
		cout << "----------Non typed vehicle----------" << endl;
		cout << "Vehcile model:\t" << model << endl;
		cout << "Average fuel consumption of these vehicle:\t" << averConsump << endl;
		cout << "Seets amount of the vehicle:\t" << seetsAmount << endl;
		cout << "Fuel cost of the vehicle:\t" << fuelCost << endl;
		cout << "Max load capacity of the vehicle\t" << loadCapacity << endl;
	}
	virtual float Consumption()
	{	
		cout << "Enter distance covered by the vehicle (in km):\t";
		cin >> distance;
		cout << "Amount of fuel used:\t" << averConsump * distance / 100 << "l" << endl;
		return averConsump * distance / 100;
	}
	virtual void CostOfFuelUsed()
	{
		cout << "Cost of all used fuel is:\t" << fuelCost * Consumption() << " UAH" << endl;
	}
	virtual void InputData()
	{
		cout << "----------Non typed vehicle----------" << endl;
		cout << "Enter Vehcile model:\t";
		cin  >> model;

		cout << "Enter average fuel consumption of these vehicle:\t";
		cin  >> averConsump;

		cout << "Enter seets amount of vehicle:\t";
		cin  >> seetsAmount;

		cout << "Enter the fuel cost of vehicle:\t";
		cin  >> fuelCost;

		cout << "Enter the max load capacity of vehicle:\t";
		cin  >> loadCapacity;

	}


	~Vehicle() { cout << "destruct Car" << endl; }

protected:
	string model;
	int loadCapacity;
	int seetsAmount;
	float averConsump;
	float distance = 0.0f;
	float fuelCost;
	


};

class Car: public Vehicle
{
public:
	Car() = default;
	Car(string Model, float FuelConsump, int SeetsAmount, int LoadCapacity, float FuelCost):
	Vehicle(Model, FuelConsump, SeetsAmount, LoadCapacity, FuelCost){}
	virtual void OutputData() override
	{
		cout << "----------Car----------" << endl;
		cout << "Car model:\t" << model << endl;
		cout << "Average consumption of car (l/100 km):\t" << averConsump << "l" << endl;
		cout << "Seets amount of the car:\t" << seetsAmount << endl;
		cout << "Fuel cost of the car:\t" << fuelCost << " UAH" << endl;
		cout << "Max load capacity of the car\t" << loadCapacity << "kg" << endl;
	}
	virtual float Consumption() override
	{
		cout << "Enter distance covered by the car (in km):\t";
		cin  >> distance;
		cout << "Amount of fuel used:\t" << averConsump * distance / 100 << "l" << endl;
		return averConsump * distance / 100;
	}
	virtual void CostOfFuelUsed() override
	{
		cout << "Cost of all used fuel is:\t" << fuelCost * Consumption() << " UAH" << endl;
	}
	virtual void InputData() override
	{
		cout << "----------Input Car Data----------" << endl;
		cout << "Enter car model:\t";
		cin >> model;

		cout << "Enter average fuel consumption of these car:\t";
		cin >> averConsump;

		cout << "Enter seets amount of car:\t";
		cin >> seetsAmount;

		cout << "Enter the fuel cost of car:\t";
		cin >> fuelCost;

		cout << "Enter the max load capacity of car:\t";
		cin >> loadCapacity;

	}
	~Car() { cout << "destruct Car" << endl; }
};

class Plane:public Vehicle
{
public:
	Plane() = default;
	Plane(string Model, float FuelConsump, int SeetsAmount, int LoadCapacity, float FuelCost) :
	Vehicle(Model, FuelConsump, SeetsAmount, LoadCapacity, FuelCost) {}

	virtual void OutputData() override
	{
		cout << "----------Plane----------" << endl;
		cout << "Plane model:\t" << model << endl;
		cout << "Average fuel consumption of these plane:\t" << averConsump << "l" << endl;
		cout << "Seets amount of the plane:\t" << seetsAmount << endl;
		cout << "Fuel cost of the plane:\t" << fuelCost << " UAH" << endl;
		cout << "Max load capacity of the plane\t" << loadCapacity << "kg" << endl;
	}
	virtual void CostOfFuelUsed() override
	{
		cout << "Cost of all used fuel is:\t" << fuelCost * Consumption() << " UAH" << endl;
	}
	virtual float Consumption() override
	{
		cout << "Enter distance covered by the vehicle (in km):\t";
		cin >> distance;
		cout << "Amount of fuel used:\t" << averConsump * distance / 100 << "l" << endl;
		return averConsump * distance / 100;
	}
	virtual void InputData() override
	{
		cout << "----------Input Plane Data----------" << endl;
		cout << "Enter plane model:\t";
		cin >> model;

		cout << "Enter average fuel consumption of these plane:\t";
		cin >> averConsump;

		cout << "Enter seets amount of plane:\t";
		cin >> seetsAmount;

		cout << "Enter the fuel cost of plane:\t";
		cin >> fuelCost;

		cout << "Enter the max load capacity of plane:\t";
		cin >> loadCapacity;

	}
	~Plane() { cout << "dectruct Plane" << endl; }
};

class Ship:public Vehicle
{
public:
	Ship() = default;
	Ship(string Model, float FuelConsump,  int SeetsAmount, int LoadCapacity, float FuelCost) :
	Vehicle(Model, FuelConsump, SeetsAmount, LoadCapacity, FuelCost) {}
	virtual void OutputData() override
	{
		cout << "----------Ship----------" << endl;
		cout << "Ship model:\t" << model << endl;
		cout << "Average fuel consumption of these ship:\t" << averConsump << "l" << endl;
		cout << "Seets amount of the ship:\t" << seetsAmount << endl;
		cout << "Fuel cost of the ship:\t" << fuelCost << " UAH" << endl;
		cout << "Max load capacity of the ship\t" << loadCapacity << "kg" << endl;
	}
	virtual void CostOfFuelUsed() override
	{
		cout << "Cost of all used fuel is:\t" << fuelCost * Consumption() << " UAH" << endl;
	}
	virtual float Consumption() override
	{
		cout << "Enter distance covered by the ship (in km):\t";
		cin >> distance;
		cout << "Amount of fuel used:\t" << averConsump * distance / 100 << "l" << endl;
		return averConsump * distance / 100;
	}
	virtual void InputData() override
	{
		cout << "----------Input Ship Data----------" << endl;
		cout << "Enter ship model:\t";
		cin >> model;

		cout << "Enter average fuel consumption of these ship:\t";
		cin >> averConsump;

		cout << "Enter seets amount of ship:\t";
		cin >> seetsAmount;

		cout << "Enter the fuel cost of ship:\t";
		cin >> fuelCost;

		cout << "Enter the max load capacity of ship:\t";
		cin >> loadCapacity;

	}

	~Ship() { cout << "destruct Ship" << endl; }
};

class Truck: public Vehicle
{
public:
	Truck() = default;
	Truck(string Model, float FuelConsump, int SeetsAmount, int LoadCapacity, float FuelCost) :
	Vehicle(Model, FuelConsump, SeetsAmount, LoadCapacity, FuelCost) {}

	virtual void OutputData() override
	{
		cout << "----------Truck----------" << endl;
		cout << "Truck model:\t" << model << endl;
		cout << "Average fuel consumption of these truck:\t" << averConsump << "l" << endl;
		cout << "Seets amount of the truck:\t" << seetsAmount << endl;
		cout << "Fuel cost of the truck:\t" << fuelCost << " UAH" << endl;
		cout << "Max load capacity of the truck\t" << loadCapacity << "kg" << endl;
		
	}
	virtual void CostOfFuelUsed() override
	{
		cout << "Cost of all used fuel is:\t" << fuelCost * Consumption() << " UAH" << endl;
	}
	virtual float Consumption() override
	{
		cout << "Enter distance covered by the truck (in km):\t";
		cin >> distance;
		cout << "Amount of fuel used:\t" << averConsump * distance / 100 << "l" << endl;
		return averConsump * distance / 100;
	}
	virtual void InputData() override
	{
		cout << "----------Input Truck Data----------" << endl;
		cout << "Enter truck model:\t";
		cin >> model;

		cout << "Enter average fuel consumption of these truck:\t";
		cin >> averConsump;

		cout << "Enter seets amount of truck:\t";
		cin >> seetsAmount;

		cout << "Enter the fuel cost of truck:\t";
		cin >> fuelCost;

		cout << "Enter the max load capacity of truck:\t";
		cin >> loadCapacity;

	}
	~Truck() { cout << "destruct Truck" << endl; }
};
class Bicycle:public Vehicle
{

public:
	Bicycle() = default;
	Bicycle(string Model, float NrgConsump, int SeetsAmount, int LoadCapacity, float FuelCost, float Weight, int Time) :
	Vehicle(Model, NrgConsump, SeetsAmount, LoadCapacity, FuelCost), weight(Weight), time(Time) {}

	virtual void OutputData() override
	{
		cout << "----------Bicycle----------" << endl;
		cout << "Bicycle model:\t" << model << endl;
		cout << "Average consumption of energy:\t" << averConsump << "kal" << endl;
		cout << "Seets amount of the bicycle:\t" << seetsAmount << endl;
		cout << "Max load capacity of the bicycle\t" << loadCapacity << "kg" << endl;
		cout << "Driver's weight:\t" << weight << "kg" << endl;
		cout << "Time of travel:\t" << time << "min" << endl;
	}
	virtual float Consumption() override
	{
		cout << "Amount of energy used:\t" << 0.014 * weight * time * (0.12 * 140 - 7) << "kal" << endl;
	}
	virtual void InputData() override
	{
		cout << "----------Input Bicycle Data----------" << endl;
		cout << "Enter truck model:\t";
		cin >> model;

		cout << "Enter seets amount of bicycle:\t";
		cin >> seetsAmount;

		cout << "Enter the max load capacity of bicycle:\t";
		cin  >> loadCapacity;

		cout << "Enter driver's weight:\t";
		cin  >> weight;

		cout << "Enter the time of travel:\t";
		cin  >> time;

	}
	~Bicycle() { cout << "destruct Bicycle" << endl; }

private:
	float weight;
	int time;
};




int main()
{
	//Vehicle* obj = nullptr;
	//int choose = 0;
	//cout << " Vehicle fuel consumption\n\n"
	//	<< " 1 - Plane\n"
	//	<< " 2 - Ship\n"
	//	<< " 3 - Truck\n"
	//	<< " 4 - Bicycle\n"
	//	<< " 5 - Car\n"
	//	<< " \nMake your choice: ";
	//
	//cin >> choose;
	//switch (choose)
	//{
	//case 1:
	//	obj = new Plane("Airbus A320", 192, 1200);
	//	break;
	//case 2:
	//	obj = new Ship("Glory", 1570, 800);
	//	break;
	//case 3:
	//	obj = new Truck("MAN", 46, 1000);
	//	break;
	//case 4:
	//	obj = new Bicycle("Azimut", 150, 50, 75, 3);
	//	break;
	//case 5:
	//	obj = new Car("Ford", 22, 350, 5, 2250, 53.7);
	//	break;
	//default: 
	//	cout << "Wrong Input!!!" << endl;
	//	break;
	//}
	//if (obj != nullptr)
	//{
	//	obj->OutputData();
	//	obj->Consumption();
	//}
	//else
	//{
	//	obj = new Vehicle;
	//	obj->OutputData();
	//}
	Vehicle* obj[4] = { new Car, new Plane, new Ship, new Truck };
	for (size_t i = 0; i < 4; i++)
	{
		obj[i]->InputData();
		system("pause");
		system("cls");
		obj[i]->OutputData();
		obj[i]->CostOfFuelUsed();
		system("pause");
		system("cls");
	}
	for (size_t i = 0; i < 4; i++)
	{
		delete obj[i];
	}

	
	return 0;
}