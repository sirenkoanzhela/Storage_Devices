#pragma once
#include "Storage_Device.h"
#include "Template_list.h"
#include <string>

class StorageDevicesList
{
	List<StorageDevice*>list;
public:
	StorageDevicesList();
	void AddDevice(StorageDevice*);
	void RemoveDevice(int);
	void EditDevice(int);
	void PrintList();
	StorageDevice* FindDevice(std::string);
	StorageDevice* FindDevice(int);
	void Save();
	void Load();
	StorageDevicesList& operator+(const StorageDevicesList& obj);
};