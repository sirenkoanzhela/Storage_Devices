#pragma once
#include "Storage_Device.h"

class USB :public StorageDevice
{
	int read_speed;
	int write_speed;
public:
	USB();
	USB(std::string, std::string, int, int, int, int);
	void Print();
	void Save()override;
	void Load()override;
};