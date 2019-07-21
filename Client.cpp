#include <iostream>
#include "Storage_devices.h"
#include "Storage_Devices_List.h"
#include "HDD.h"
#include "USB.h"
#include "DVD.h"

using namespace std; //test

int main()
{
	StorageDevice* sd1 = new HDD("Kingstonn", 1024, 1, 4200);
	StorageDevice* sd2 = new USB("SanDisk", 2048, 3, 480, 640);
	StorageDevice* sd3 = new DVD("HP", 1024, 10, 1350);

	StorageDevicesList* list = new StorageDevicesList;
	list->AddDevice(sd1);
	list->AddDevice(sd2);
	list->AddDevice(sd3);
	list->PrintList();


	StorageDevicesList* list2 = new StorageDevicesList;
	list2->PrintList();

	sd3->Save();
	sd3->Load();
	return 0;
}