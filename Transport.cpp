#include "Transport.h";


using namespace std;

/**
* \file Transport.cpp
* \brief Реализация методов класса Transport и его наследников.
*/

Transport::Transport(int amountOfWheels, int amountOfPassengers, int speed)
	: _amountOfWheels(amountOfWheels), _amountOfPassengers(amountOfPassengers), _speed(speed) {};

Transport::~Transport() {};

Motorcycle::Motorcycle() : Transport(0, 0, 0), _isSport(0) {};

Motorcycle::Motorcycle(int amountOfWheels, int amountOfPassengers, int speed, bool isSport)
	: Transport(amountOfWheels, amountOfPassengers, speed), _isSport(isSport) {
};

Motorcycle::~Motorcycle() {};

void Motorcycle::printInfo() const{
	cout << "\nНаименование транспорта мотоцикл:" << "Кол - во колёс: "
		<< _amountOfWheels << "\nКол-во пассажиров:  " 
		<< _amountOfPassengers << "\nСкорость:  " << _speed 
		<< "\nМашина спортивная:  " << (_isSport ? "Да" : "Нет")
		<< endl;
}

Scooter::Scooter() : Transport(0, 0, 0) {};

Scooter::Scooter(int amountOfWheels, int amountOfPassengers, int speed)
	:Transport(amountOfWheels, amountOfPassengers, speed) {
};

Scooter::~Scooter() {};

void Scooter::printInfo() const {
	cout << "\nНаименование транспорта скутер:" << "\nКол - во колёс: "
		<< _amountOfWheels <<  "\nКол-во пассажиров:  " << _amountOfPassengers 
		<< "\nСкорость:  " << _speed << endl;
};

Car::Car() : Transport(0, 0, 0), _isSport(0) {};

Car::Car(int amountOfWheels, int amountOfPassengers, int speed, bool isSport)
	:Transport(amountOfWheels, amountOfPassengers, speed), _isSport(isSport) {
};

Car::~Car() {};

void Car::printInfo() const {
	cout << "\nНаименование транспорта автомобильы:" << "\nКол - во колёс: "
		<< _amountOfWheels << "\nКол-во пассажиров:  " << _amountOfPassengers
		<< "\nСкокрость:  " << _speed << "\nМашина спортивная:  " << (_isSport ? "Да" : "Нет")
		<< endl;
}

Bus::Bus() : Transport(0, 0, 0) {};

Bus::Bus(int amountOfWheels, int amountOfPassengers, int speed)
	:Transport(amountOfWheels, amountOfPassengers, speed) {
};

Bus::~Bus() {};

void Bus::printInfo() const {
	cout << "\nНаименование транспорта автобус:" << "\nКол - во колёс: "
		<< _amountOfWheels << "\nКол-во пассажиров:  " 
		<< _amountOfPassengers << "\nСкорость:  " << _speed 
		<< endl;
}
