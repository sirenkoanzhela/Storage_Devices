#pragma once
#include "Storage_Device.h"
#include <list>

class StorageDevicesList
{
	//Template_List<StorageDevice*>list;
public:
	void AddDevice();
	void RemoveDevice(int);
	void EditDevice(int);
	void PrintList();
	void FindDevice(std::string);
	void FindDevice(int);
	void Save();
	void Load();
};