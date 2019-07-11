#include "HDD.h"

HDD::HDD() :StorageDevice(), spindle_speed(0) {}
HDD::HDD(std::string _name, std::string _model, int _storage_capacity, int _count, int _spindle_speed)
	: StorageDevice(_name, _model, _storage_capacity, _count), spindle_speed(_spindle_speed) {}

void HDD::Print()
{
	StorageDevice::Print();
	std::cout << "Spindle speed: " << spindle_speed << std::endl;
}

void HDD::Save()
{

}

void HDD::Load()
{

}