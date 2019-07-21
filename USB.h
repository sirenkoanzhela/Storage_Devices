#pragma once
#include "Storage_devices.h"

class USB :public StorageDevice
{
	int read_speed;
	int write_speed;
public:
	USB();
	USB(std::string _model, int _storage_capacity, int _count, int _read_speed, int _write_speed);
	void Input()override;
	void Print()override;
	void setRead_speed(int);
	void setWrite_speed(int);
	void Save()override;
	void Load()override;
};