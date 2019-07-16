#include "Storage_Device.h"
#include <string>

StorageDevice::StorageDevice() :storage_capacity(0), count(0) {}
StorageDevice::StorageDevice(std::string _name, std::string _model, int _storage_capacity, int _count)
	: name(_name), model(_model), storage_capacity(_storage_capacity), count(_count) {}

void StorageDevice::Input()
{
	std::string str;

	std::cout << "Input name:" << std::endl;
	std::getline(std::cin, str);
	setName(str);

	std::cout << "Input model:" << std::endl;
	std::getline(std::cin, str);
	setModel(str);
}

void StorageDevice::Print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Model: " << model << std::endl;
	std::cout << "Storage capacity: " << storage_capacity << std::endl;
	std::cout << "Count: " << count << std::endl;
}

void StorageDevice::Save()
{

}

void StorageDevice::Load()
{

}