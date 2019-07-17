#include <iostream>
#include "Storage_Device.h"
#include "Storage_Devices_List.h"
#include "HDD.h"
#include "USB.h"
#include "DVD.h"

using namespace std; //test

int main()
{
	StorageDevice* sd1 = new HDD;
	StorageDevice* sd2 = new USB;
	StorageDevice* sd3 = new DVD;

	StorageDevicesList* list = new StorageDevicesList;
	list->AddDevice(sd1);
	list->AddDevice(sd2);
	list->AddDevice(sd3);
	list->PrintList();


	//StorageDevicesList* list2 = new StorageDevicesList;
	//list2->PrintList();

	return 0;
}