#include "DVD.h"

DVD::DVD() :StorageDevice::StorageDevice(), write_speed(0) {}
DVD::DVD(std::string _name, std::string _model, int _storage_capacity, int _count, int _write_speed)
	: StorageDevice(_name, _model, _storage_capacity, _count), write_speed(_write_speed) {}

void DVD::setWrite_speed(int)
{
}

void DVD::Print()
{
	std::cout << "TYPE: DVD" << std::endl;
	StorageDevice::Print();
	std::cout << "Write speed: " << write_speed << std::endl;
}

void DVD::Input()
{
	StorageDevice::Input();
	std::cout << "Input write speed:" << std::endl;
	int _write_speed;
	std::cin >> _write_speed;
	setWrite_speed(_write_speed);
}

void DVD::Save()
{

}

void DVD::Load()
{

}