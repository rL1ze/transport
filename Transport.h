#pragma once
#include <iostream>

/**
* \image html transport_fabric.png "Фабрика ранспорта"
*/

/**
* \defgroup transport_module Транспорт
* \brief Иерархия классов транспорта
*
* Модуль содержит базовый абстрактный класс Transport
* и его конкретные реализации.
*/

/**
* \file Transport.h
* \ingroup transport_module
* \brief Объявления базового класса Transport и его наследников.
*/

/**
* \class Transport
* \brief Абстрактный базовый класс для всех типов транспорта.
*
* Содержит общие параметры транспорта: количество колес, пассажиров и скорость.
*/

class Transport
{
public: 

	/**
	* \brief Конструктор базового класса
	* \param amountOfWheels Количество колес (см. \ref amountOfWheels)
	* \param amountOfPassengers Количество пассажиров (см. \ref amountOfPassengers)
	* \param speed Скорость (см. \ref speed)
	*/

	Transport(int amountOfWheels = 0, int amountOfPassengers = 0, int speed = 0);
	
	/**
	* \brief Виртуальный деструктор
	*/

	virtual ~Transport();

	/**
	* \brief Вывод информации о транспорте
	*
	* Чисто виртуальная функция.
	* Вывести информацию о транспорте в std::cout
	* Должна быть переопределена в классах-наследниках.
	*/

	virtual void printInfo() const = 0;
protected:
	int _amountOfWheels = 0; ///< Количество колёс
	int _amountOfPassengers = 0; ///< Количество пассажиров
	int _speed = 0; ///< Скорость
};

/**
* \class Motorcycle 
* \ingroup transport_module
* \brief Класс мотоцикла
*
* Описывает мотоцикл как вид транспорта.
* Может быть спортивным или обычным.
*/

class Motorcycle : public Transport {

public:

	/**
	* \brief Конструктор мотоцикла
	* 
	* \param amountOfWheels Количество колес (см. \ref amountOfWheels)
	* \param amountOfPassengers Количество пассажиров (см. \ref amountOfPassengers)
	* \param speed Скорость (см. \ref speed)
	* \param isSport \ref isSport
	* 
	*/

	Motorcycle();
	Motorcycle(int amountOfWheels = 0, int amountOfPassengers = 0, int speed = 0, bool isSport = false);
	~Motorcycle();
	void printInfo() const override;
private:
	bool _isSport = false; 
};

/**
* \class Scooter
* \ingroup transport_module
* \brief Скутер — наследник Transport
*/

class Scooter : public Transport {

public:
	/**
	* \brief Конструктор скутера
	*
	* \param amountOfWheels Количество колес (см. \ref amountOfWheels)
	* \param amountOfPassengers Количество пассажиров (см. \ref amountOfPassengers)
	* \param speed Скорость (см. \ref speed)
	*
	*/

	Scooter();
	Scooter(int amountOfWheels = 0, int amountOfPassengers = 0, int speed = 0);
	~Scooter();
	void printInfo() const override;
private:
};

/**
* \class Car
* \ingroup transport_module
* \brief Автомобиль — наследник Transport
*/

class Car : public Transport {

public:
	/**
	* \brief Конструктор машины
	*
	* \param amountOfWheels Количество колес (см. \ref amountOfWheels)
	* \param amountOfPassengers Количество пассажиров (см. \ref amountOfPassengers)
	* \param speed Скорость (см. \ref speed)
	* \param isSport \ref isSport
	*
	*/

	Car();
	Car(int amountOfWheels = 0, int amountOfPassengers = 0, int speed = 0, bool _isSport = false);
	~Car();
	void printInfo() const override;

private:
	bool _isSport = false;
};

/**
* \class Bus
* \ingroup transport_module
* \brief Автобус — наследник Transport
*/

class Bus : public Transport {

public:
	/**
	* \brief Конструктор автобуса
	*
	* \param amountOfWheels Количество колес (см. \ref amountOfWheels)
	* \param amountOfPassengers Количество пассажиров (см. \ref amountOfPassengers)
	* \param speed Скорость (см. \ref speed)
	*
	*/

	Bus();
	Bus(int amountOfWheels = 0, int amountOfPassengers = 0, int speed = 0);
	~Bus();
	void printInfo() const override;
private:
};