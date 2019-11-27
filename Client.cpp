#include <iostream>
#include "Storage_devices.h"
#include "Storage_Devices_List.h"
#include "HDD.h"
#include "USB.h"
#include "DVD.h"
#include <list>


int main()
{
	std::list<StorageDevice*> item_list;
	std::list<StorageDevice*>::iterator it;

	StorageDevice* sd1 = new HDD("Kingstonn", 1024, 1, 4200);
	StorageDevice* sd2 = new USB("SanDisk", 2048, 3, 480, 640);
	StorageDevice* sd3 = new DVD("HP", 1024, 10, 1350);

	item_list.push_back(sd1);
	item_list.push_back(sd2);
	item_list.push_back(sd3);

	for (it = item_list.begin(); it != item_list.end(); it++)
	{
		(*it)->Print();
	}

	return 0;
}