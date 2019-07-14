#include "Storage_Devices_List.h"



void StorageDevicesList::AddDevice(StorageDevice*sd)
{
	list.Add(sd);
}

void StorageDevicesList::RemoveDevice(int position)
{
	list.RemoveByPosition(position);
}

void StorageDevicesList::EditDevice(int position)
{
	if(list.Find(position)!=nullptr)
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

StorageDevice* StorageDevicesList::FindDevice(std::string _name)
{
	for (int i = 0; i < list.GetCount(); i++)
	{
		if (list.Find(i)->getName == _name)
		{
			return list.Find(i);
		}
	}
}

StorageDevice* StorageDevicesList::FindDevice(int pos)
{
	return list.Find(pos);
}

StorageDevicesList & StorageDevicesList::operator+(const StorageDevicesList & obj)
{

	// TODO: вставьте здесь оператор return
}
