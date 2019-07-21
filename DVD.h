#pragma once
#include "Storage_devices.h"

class DVD :public StorageDevice
{
	int write_speed;
public:
	DVD();
	DVD(std::string _model, int _storage_capacity, int _count, int _write_speed);
	void setWrite_speed(int);
	void Print()override;
	void Input()override;
	void Save()override;
	void Load()override;
};