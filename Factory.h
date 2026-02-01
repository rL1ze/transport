#pragma once
#include "Transport.h";
#include <iostream>

/**
* \defgroup factory_module Фабрика транспорта
* \brief Создание объектов транспорта
*
* Модуль реализует фабричный метод для создания
* объектов различных типов транспорта.
*/

/**
* \file Factory.h
* \ingroup factory_module
* \brief Объявления класса Factory который для создания
* объектов различных типов транспорта.
*/

/**
* \class Factory
* \brief Реализация фабричных методов для создания транспорта.
*
* Содержит методы для создания трансопрта.
*/

using namespace std;

class Factory {
public:
	Factory();
	~Factory();

	/**
	* \brief Создаёт объект транспорта по типу
	* \param type Тип транспорта (0 - Motorcycle, 1 - Scooter, 2 - Car, 3 - Bus)
	* \param amountOfWheels Количество колес (см. \ref amountOfWheels)
	* \param amountOfPassengers Количество пассажиров (см. \ref amountOfPassengers)
	* \param _speed Скорость (см. \ref speed)
	* \param isSport Признак спортивного транспорта (см. \ref isSport). Используется для Motorcycle и Car.
	* \return Указатель на созданный объект Transport или nullptr при неизвестном типе.
	*/

	/**
	* \brief Перегрузка: создаёт объект транспорта без параметра isSport
	* \note Внутри вызывает основную перегрузку с isSport=false
	*/
	static Transport* createTransport(int type = 0, int amountOfWheels = 0,int amountOfPassengers = 0, int _speed = 0, bool isSport = false);
	static Transport* createTransport(int type = 0, int amountOfWheels = 0, int amountOfPassengers = 0, int _speed = 0);

};






