#pragma once
#include <iostream>

class StorageDevice abstract
{
protected:
	std::string name;
	std::string model;
	int storage_capacity; // mB
	int count;
public:
	StorageDevice();
	StorageDevice(std::string, std::string, int, int);
	std::string getName()
	{
		return name;
	}
	std::string getModel()
	{
		return model;
	}
	inline int getStorage_capacity()
	{
		return storage_capacity;
	}
	inline int getCount()
	{
		return count;
	}
	inline void setName(std::string _name)
	{
		name = _name;
	}
	inline void setModel(std::string _model)
	{
		model = _model;
	}
	virtual void Input();
	virtual void Print();
	virtual void Save();
	virtual void Load();
};