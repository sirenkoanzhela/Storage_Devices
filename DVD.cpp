#include "DVD.h"

DVD::DVD():write_speed(0){}
DVD::DVD(std::string _name, std::string _model, int _storage_capacity, int _count, int _write_speed)
	: StorageDevice(_name, _model, _storage_capacity, _count), write_speed(_write_speed) {}

void DVD::Print()
{
	StorageDevice::Print();
	std::cout << "Write speed: " << write_speed << std::endl;
}

void DVD::Save()
{

}

void DVD::Load()
{

}