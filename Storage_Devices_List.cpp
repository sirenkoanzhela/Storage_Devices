#include "Storage_Devices_List.h"


StorageDevicesList::StorageDevicesList()
{
}

void StorageDevicesList::AddDevice(StorageDevice* sd)
{
	list.Add(sd);
}

void StorageDevicesList::RemoveDevice(int position)
{
	list.RemoveByPosition(position);
}

void StorageDevicesList::EditDevice(int position)
{
	if (list.Find(position) != nullptr)
		list.Find(position)->Input();
	return;
}

void StorageDevicesList::PrintList()
{
	for (int i = 0; i < list.GetCount(); i++)
	{
		list.Find(i)->Print();
	}
}

StorageDevice* StorageDevicesList::FindDevice(std::string _name) //return element position
{
	for (int i = 0; i < list.GetCount(); i++)
	{
		if (list.Find(i)->getName() == _name)
		{
			return list.Find(i);
		}
	}
	return nullptr;
}

StorageDevice* StorageDevicesList::FindDevice(int pos)
{
	return list.Find(pos);
}

void StorageDevicesList::Save()
{
}

void StorageDevicesList::Load()
{
}

StorageDevicesList& StorageDevicesList::operator+(const StorageDevicesList& obj)
{
	StorageDevicesList* temp = new StorageDevicesList;
	return *temp;
	
}