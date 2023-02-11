#include <iostream>

// Basic Class Transport
class Transport
{
public:

	// Clear Virtual Output Method
	virtual void Output() const = 0;

	// Clear Virtual Fuel Consumption Method
	virtual float FuelConsumption(float distance) = 0;

protected:

	// Basic Class Transport Field 
	float FuelConsumption_;
};

// Class Airplane Inherited from Basic Class Transport 
class AirPlane final : public Transport
{
public:

	// Constructor
	AirPlane()
	{
		FuelConsumption_ = 50;
	}

	// Redefinition of Clear Virtual Method "FuelConsumption" Inherited of Basic Class
	virtual float FuelConsumption(float distance) override final
	{
		std::cout << "AirPlane Consumption: " << FuelConsumption_ * distance << "\n";
		return FuelConsumption_;
	}

	// Redefinition of Clear Virtual Method "Output" Inherited of Basic Class
	virtual void Output() const override final
	{
		std::cout << FuelConsumption_;
	}

	// Destructor
	~AirPlane()
	{

	}

private:

};

// Class Ship Inherited from Basic Class Transport 
class Ship final : public Transport
{
public:

	// Constructor
	Ship()
	{
		FuelConsumption_ = 40;
	}

	// Redefinition of Clear Virtual Method "FuelConsumption" Inherited of Basic Class
	virtual float FuelConsumption(float distance) override final
	{
		std::cout << "Ship Consumption: " << FuelConsumption_ * distance << "\n";
		return FuelConsumption_;
	}

	// Redefinition of Clear Virtual Method "Output" Inherited of Basic Class
	virtual void Output() const override final
	{
		std::cout << FuelConsumption_;
	}

	// Destructor
	~Ship()
	{

	}

private:

};

// Class Truck Inherited from Basic Class Transport 
class Truck final : public Transport
{
public:

	// Constructor
	Truck()
	{
		FuelConsumption_ = 30;
	}

	// Redefinition of Clear Virtual Method "FuelConsumption" Inherited of Basic Class
	virtual float FuelConsumption(float distance) override final
	{
		std::cout << "Truck Consumption: " << FuelConsumption_ * distance << "\n";
		return FuelConsumption_;
	}

	// Redefinition of Clear Virtual Method "Output" Inherited of Basic Class
	virtual void Output() const override final
	{
		std::cout << FuelConsumption_;
	}

	// Destructor
	~Truck()
	{

	}

private:

};

// Class Bicycle Inherited from Basic Class Transport 
class Bicycle final : public Transport
{
public:

	// Constructor
	Bicycle()
	{
		FuelConsumption_ = 10;
	}

	// Redefinition of Clear Virtual Method "FuelConsumption" Inherited of Basic Class
	virtual float FuelConsumption(float distance) override final
	{
		std::cout << "Bicycle Consumption: " << FuelConsumption_ * distance << "\n";
		return FuelConsumption_;
	}

	// Redefinition of Clear Virtual Method "Output" Inherited of Basic Class
	virtual void Output() const override final
	{
		std::cout << FuelConsumption_;
	}

	// Destructor
	~Bicycle()
	{

	}

private:

};

// Class Vehicle Inherited from Basic Class Transport 
class Vehicle final : public Transport
{
public:

	// Constructor
	Vehicle()
	{
		FuelConsumption_ = 20;
	}

	// Redefinition of Clear Virtual Method "FuelConsumption" Inherited of Basic Class
	virtual float FuelConsumption(float distance) override final
	{
		std::cout << "Vehicle Consumption: " << FuelConsumption_ * distance << "\n";
		return FuelConsumption_;
	}

	// Redefinition of Clear Virtual Method "Output" Inherited of Basic Class
	virtual void Output() const override final
	{
		std::cout << FuelConsumption_;
	}

	// Destructor
	~Vehicle()
	{

	}

private:

};

int main()
{
	Transport* temp = nullptr;
	int userChoice = 0;

	while (1)
	{
		std::cout << "Choose Transport\n";
		std::cout << "1. Airplane \n";
		std::cout << "2. Ship \n";
		std::cout << "3. Truck \n";
		std::cout << "4. Bicycle \n";
		std::cout << "5. Vehicle \n";
		std::cout << "6. Exit \n";
		std::cin >> userChoice;

		float Distance = 0;
		std::cout << "Enter Distance\n";
		std::cin >> Distance;

		switch (userChoice)
		{
		case 1:
		{
			AirPlane PlaneTemp;
			temp = &PlaneTemp;
			temp = &PlaneTemp;
			temp->FuelConsumption(Distance);
			break;
		}
		case 2:
		{
			Ship ShipTemp;
			temp = &ShipTemp;
			temp->FuelConsumption(Distance);
			break;
		}
		case 3:
		{
			Truck TruckTemp;
			temp = &TruckTemp;
			temp->FuelConsumption(Distance);
			break;
		}
		case 4:
		{
			Bicycle BicycleTemp;
			temp = &BicycleTemp;
			temp->FuelConsumption(Distance);
			break;
		}
		case 5:
		{
			Vehicle VehicleTemp;
			temp = &VehicleTemp;
			temp->FuelConsumption(Distance);
			break;
		}
		case 6:
		{
			return 0;
		}
		}
	}
}
