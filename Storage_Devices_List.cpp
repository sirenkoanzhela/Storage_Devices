#include "Storage_Devices_List.h"
#include "Template_list.h"


StorageDevicesList::StorageDevicesList() {}

void StorageDevicesList::AddDevice(StorageDevice* sd)
{
	list.InsertByPosition(sd, list.GetCount() + 1);
}

void StorageDevicesList::RemoveDevice(int position)
{
	try
	{
		if (list.Find(position) == nullptr)
			throw "Any device exists";
		if (list.GetCount() == 0)
			throw "Invalid position";

		list.RemoveByPosition(position);
	}
	catch (char* error)
	{
		std::cout << error << std::endl;
	}
}

void StorageDevicesList::EditDevice(int position)
{
	try
	{
		if (list.Find(position) == nullptr)
			throw "Any device exists";
		if (list.GetCount() == 0)
			throw "Invalid position";

		list.Find(position)->Input();
	}
	catch (char* error)
	{
		std::cout << error << std::endl;
	}

}

void StorageDevicesList::PrintList()
{
	try
	{
		if (list.getCount() == 0)
			throw 0;

		for (int i = 0; i < list.getCount(); i++)
		{
			list.Find(i)->Print();
			std::cout << std::endl;
		}
	}
	catch (int a)
	{
		std::cout << "Any device exists" << std::endl;
		return;
	}
}

StorageDevice* StorageDevicesList::FindDevice(std::string _name) //return element 
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
	try
	{
		if (list.getCount() == 0)
		{
			throw 0;
		}
		if (pos >= list.getCount())
		{
			throw 1;
		}
		return list.Find(pos);
	}
	catch (int a)
	{
		if (a == 0)
		{
			std::cout << "Any device exists" << std::endl;
			return nullptr;
		}
		std::cout << "Incorrect position" << std::endl;
		return nullptr;
	}

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