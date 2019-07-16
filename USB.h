#pragma once
#include "Storage_Device.h"

class USB :public StorageDevice
{
	int read_speed;
	int write_speed;
public:
	USB();
	USB(std::string, std::string, int, int, int, int);
	void Input()override;
	void Print();
	void setRead_speed(int);
	void setWrite_speed(int);
	void Save()override;
	void Load()override;
};