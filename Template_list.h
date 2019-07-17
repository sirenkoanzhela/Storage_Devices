#pragma once
#include <iostream>

template <typename T>
struct Element
{
	T data;
	Element* Next;
};

template <typename T>
class List
{
	Element<T>* Head;
	int Count;

public:
	List();

	~List();

	void Add(T data);

	void Del();

	void DelAll();

	void Print();

	int GetCount();

	void InsertByPosition(T, int);
	void RemoveByPosition(int);
	int Find(T);
	T Find(int);
	List(const List<T>&);
	List<T>& operator=(const List<T>&);
	int getCount();
};

template <typename T>
List<T>::List()
{
	Head = nullptr;
	Count = 0;
}

template <typename T>
List<T>::~List()
{
	DelAll();
}

template <typename T>
int List<T>::GetCount()
{
	return Count;
}

template <typename T>
void List<T>::Add(T _data)
{
	Element <T>* temp = new Element<T>;

	temp->data = _data;
	temp->Next = Head;

	Head = temp;

	Count++;
}


template <typename T>
void List<T>::Del()
{
	if (Head)
	{
		Element <T>* temp = Head->Next;
		delete Head;
		Head = temp;
		Count--;
	}
}

template <typename T>
void List<T>::DelAll()
{
	while (Head != nullptr)
		Del();
}

template <typename T>
void List<T>::Print() //
{
	try
	{
		Element<T>* temp = Head;

		if (temp == nullptr)
			throw "Any device exists";
		while (temp != 0)
		{
			std::cout << temp->data;
			temp = temp->Next;
		}
		std::cout << std::endl;
	}
	catch (char* str)
	{
		std::cout << str << std::endl;
	}
}

template <typename T>
void List<T>::InsertByPosition(T data, int position)
{
	if (position <= 0 && GetCount() < position) { return; }
	if (Head == nullptr) { Add(data); return; }

	Element<T>* temp = new Element<T>;
	temp->Next = Head;

	for (int i = 0; i < position - 1; i++)
	{
		temp = temp->Next;
	}
	Element<T>* current = new Element<T>;
	current->data = data;

	current->Next = temp->Next;
	temp->Next = current;
	Count++;
}

template <typename T>
void List<T>::RemoveByPosition(int position)
{

	if (position < 0 && position > GetCount()) { return; }
	if (Head == nullptr) { return; }

	Element<T>* del = Head;
	Element<T>* curr = nullptr;
	for (int i = 0; i < position - 1; i++)
	{
		del = del->Next;
	}
	curr = del;
	del = del->Next;
	curr->Next = del->Next;

	delete del;
	Count--;
}

template <typename T>
int List<T>::Find(T key)
{
	if (Head == nullptr) return -1;
	int pos = 0;
	for (Element<T>* current = Head; current != nullptr; current = current->Next)
	{
		if (current->data == key)return pos;
		pos++;
	}
	return -1;
}

template<typename T>
T List<T>::Find(int position)
{
	try {
		if (position < 0 || position >= Count) throw "Invalid position";
		if (Head == nullptr) throw "Any device exists";

		Element<T>* temp = Head;
		for (int i = 0; i < position; i++)
		{
			temp = temp->Next;
		}
		return temp->data;
	}
	catch (char* c)
	{
		std::cout << c << std::endl;
	}
}

template <typename T>
List<T>::List(const List& obj)
{
	Count = 0;
	Head = nullptr;

	int i = 1;
	for (Element<T>* temp = obj.Head; temp != nullptr; temp = temp->Next)
	{
		InsertByPosition(temp->data, i);
		i++;
	}
}

template <typename T>
List<T>& List<T>::operator=(const List<T>& obj)
{
	if (this == &obj) { return *this; }
	DelAll();

	int i = 1;
	for (Element<T>* temp = obj.Head; temp != nullptr; temp = temp->Next)
	{
		InsertByPosition(temp->data, i);
		i++;
	}
	return *this;
}

template<typename T>
int List<T>::getCount()
{
	return Count;
}
