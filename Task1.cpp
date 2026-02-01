#include <iostream>
#include "Transport.h"
#include <vector>
#include "Factory.h"


/**
* \defgroup app_module Приложение
* \brief Точка входа и пользовательский интерфейс
*
* Содержит функцию main и логику взаимодействия с пользователем.
*/

/**
* \file Task1.cpp
* \ingroup app_module
* \brief Точка входа в приложение.
*/

/**
* \ingroup app_module
* \brief Точка входа программы
* 
* Читает типы и параметры транспорта от пользователя, создает объекты через
* Factory::createTransport и выводит информацию о созданных объектах.
*
* \return Код завершения (0 — успех)
*/

using namespace std;

int main()
{
	vector<Transport*> transports;

	int type = 0;
	int amountOfWheels = 0;
	int amountOfPassengers = 0;
	int speed = 0;
	bool isSport = false;

	cout << "Введите типы транспорта (0 - мотоцикл, 1 - самокат, 2 - автомобиль, 3 - автобус)." << endl;
	cout << "Введите -1 для завершения ввода." << endl;
	cout << "Введите тип транспорта и его характеристики: ";

	while (true)
	{
		cout << "\nТип: ";
		cin >> type;

		if (type > 3)
		{
			continue;
		}
		else if (type == -1)
		{
			break;
		}
		else
		{
			cout << "\nКол-во колёс: ";
			cin >> amountOfWheels;
			cout << "\nКол-во пассажиров ";
			cin >> amountOfPassengers;
			cout << "\nСкорость: ";
			cin >> speed;
			if (type == 2 || type == 0)
			{
				cout << "\nСпортивный: ";
				cin >> isSport;
			}
		}
		

		transports.push_back(Factory::createTransport(type, amountOfWheels, amountOfPassengers, speed, isSport));
	}

	cout << "Список транспорта: " << endl;
	for (auto transport : transports){
		if (transport) {
			transport->printInfo();
			delete transport;
		}
		else {
			cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА" << endl;
		}
	}	
}

