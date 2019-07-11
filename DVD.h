#pragma once
#include "Storage_Device.h"

class DVD :public StorageDevice
{
	int write_speed;
public:
	DVD();
	DVD(std::string, std::string, int, int, int);
	void Print();
	void Save()override;
	void Load()override;
};