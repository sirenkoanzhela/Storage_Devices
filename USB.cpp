#include "USB.h"

USB::USB():read_speed(0),write_speed(0){}
USB::USB(std::string _name, std::string _model, int _storage_capacity, int _count, int _read_speed, int _write_speed)
	: StorageDevice(_name, _model, _storage_capacity, _count), read_speed(_read_speed),write_speed(_write_speed) {}

void USB::Print()
{
	StorageDevice::Print();
	std::cout << "Read speed: " << read_speed << std::endl;
	std::cout << "Write speed: " << write_speed << std::endl;
}

void USB::Save()
{

}

void USB::Load()
{

}