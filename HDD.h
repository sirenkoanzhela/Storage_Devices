#pragma once
#include "Storage_Device.h"

class HDD :public StorageDevice
{
	int spindle_speed;
public:
	HDD();
	HDD(std::string, std::string, int, int, int);
	void Input()override;
	void setSpindle_speed(int);
	void Print()override;
	void Save()override;
	void Load()override;
};