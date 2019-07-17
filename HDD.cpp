#include "HDD.h"

HDD::HDD() :StorageDevice::StorageDevice(), spindle_speed(0) 
{
	name = "Hard disk drive";
}
HDD::HDD(std::string _model, int _storage_capacity, int _count, int _spindle_speed)
	: StorageDevice("Hard disk drive", _model, _storage_capacity, _count), spindle_speed(_spindle_speed) {}

void HDD::Input()
{
	StorageDevice::Input();
	std::cout << "Input spindle speed:" << std::endl;
	int _spindle_speed;
	std::cin >> _spindle_speed;
	setSpindle_speed(_spindle_speed);
}

void HDD::setSpindle_speed(int sp)
{
	if (sp < 0 || sp != 4200 || sp != 5400 || sp != 7200 || sp != 10000 || sp != 15000)
		return;
	spindle_speed = sp;
}

void HDD::Print()
{
	std::cout << "TYPE: HDD" << std::endl;
	StorageDevice::Print();
	std::cout << "Spindle speed: " << spindle_speed << std::endl;
}

void HDD::Save()
{

}

void HDD::Load()
{

}