#pragma once
#include "Storage_devices.h"

class DVD :public StorageDevice
{
	int write_speed;
public:
	DVD();
	DVD(std::string, std::string, int, int, int);
	void setWrite_speed(int);
	void Print();
	void Input()override;
	void Save()override;
	void Load()override;
};