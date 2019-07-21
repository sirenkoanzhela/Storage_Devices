#include "Storage_devices.h"
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
	FILE*f;
	fopen_s(&f, "data.bin", "wb");
	if (f == nullptr)
	{
		std::cout << "Cannot open this file!" << std::endl;
		return;
	}
	int sizeName = name.size();
	fwrite(&sizeName, sizeof(int), 1, f);
	fwrite(name.c_str(), sizeof(char), sizeName, f);

	int sizeModel = model.size();
	fwrite(&sizeModel, sizeof(int), 1, f);
	fwrite(model.c_str(), sizeof(char), sizeModel, f);

	fclose(f);
}

void StorageDevice::Load()
{
	FILE*f;
	fopen_s(&f, "data.bin", "rb");
	if (f == nullptr)
	{
		std::cout << "Cannot open this file!" << std::endl;
		return;
	}
	int size;
	fread(&size, sizeof(int), 1, f);
	std::string _name;
	char*PtrName = new char[size];
	fread(PtrName, size, 1, f);
	_name = PtrName;


	fread(&size, sizeof(int), 1, f);
	std::string _model;
	char*PtrModel = new char[size];
	_model = PtrModel;


	std::cout << _name << std::endl;
	std::cout << _model << std::endl;
	std::cout << "test closed" << std::endl;
	fclose(f);
}
