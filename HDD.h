#pragma once
#include "Storage_devices.h"

class HDD :public StorageDevice
{
	int spindle_speed;
public:
	HDD();
	HDD(std::string _model, int _storage_capacity, int _count, int _spindle_speed);
	void Input()override;
	void setSpindle_speed(int);
	void Print()override;
	void Save()override;
	void Load()override;
};