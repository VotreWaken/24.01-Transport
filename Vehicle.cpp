#include <iostream>

// Class Wheel
class Wheel
{
public:

	// Constructor by default
	Wheel()
	{
		WheelVolume_ = 0;
		WheelDisc_ = false;
	}

	// Constructor by default
	Wheel(float WheelVolume,bool WheelDisc)
		: WheelVolume_(WheelVolume), WheelDisc_(WheelDisc)
	{

	}

	// Input Method
	void Input()
	{
		std::cout << "Enter Wheel Volume\n";
		std::cin >> WheelVolume_;

		std::cout << "Enter Wheel Discs\n";
		std::cin >> WheelDisc_;
	}

	// Output Method
	void Output()
	{
		std::cout << "Wheel Volume: " << WheelVolume_ << "\n";
		std::cout << "Wheel Discs: " << WheelDisc_ << "\n";
	}

	// Destructor
	~Wheel()
	{

	}

protected:

	// Wheel Fields
	float WheelVolume_;
	bool WheelDisc_;
};

// Class Engine 
class Engine
{
public:
	
	// Constructor
	Engine()
	{
		EnginePower_ = 0;
		EngineVolume_ = 0;
	}

	// Destructor
	~Engine()
	{

	}

	// Input Method
	void Input()
	{
		std::cout << "Enter Engine Volume\n";
		std::cin >> EngineVolume_;

		std::cout << "Enter Engine Power\n";
		std::cin >> EnginePower_;
	}

	// Output Method
	void Output()
	{
		std::cout << "Engine Volume: " << EngineVolume_ << "\n";
		std::cout << "Engine Power: " << EnginePower_ << "\n";
	}

private:

	// Engine Fields
	int EngineVolume_;
	int EnginePower_;
};

// Class Door
class Door
{
public:

	// Constructor
	Door()
	{
		DoorVolume = false;
		DoorGlass = 0;
	}

	// Destructor
	~Door()
	{

	}

	// Input Method
	void Input()
	{
		std::cout << "Enter Door Volume\n";
		std::cin >> DoorVolume;

		std::cout << "Enter Door Glass\n";
		std::cin >> DoorGlass;
	}

	// Output Method
	void Output()
	{
		std::cout << "Door Volume: " << DoorVolume << "\n";
		std::cout << "Door Glass: " << DoorGlass << "\n";
	}

private:

	// Door Fields
	float DoorVolume;
	bool DoorGlass;
};

// Class Vehicle (Inherits class Wheel, Engine, Door)
class Vehicle : protected Wheel, Engine, Door
{
public:

	// Constructor
	Vehicle()
	{
		// Handle Input Methods 
		Wheel::Input();
		Engine::Input();
		Door::Input();
		Input();
	}

	// Input Method
	void Input()
	{
		std::cout << "Enter Vehicle Color\n";
		std::cin >> VehicleModel;

		std::cout << "Enter Vehicle Model\n";
		std::cin >> VehicleColor;
	}

	void Output()
	{
		// Handle Output Methods 
		Wheel::Output();
		Engine::Output();
		Door::Output();

		// Output Own Fields
		std::cout << "\nVehicle Color" << VehicleColor;

		std::cout << "\nVehicle Model" << VehicleModel;;
	}

	// Destructor
	~Vehicle()
	{

	}

private:

	// Class Fields
	std::string VehicleModel;
	std::string VehicleColor;
};

int main()
{
	Vehicle temp;
	temp.Output();
}
