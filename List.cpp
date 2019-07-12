#include <iostream>
#include "List.h"
using namespace std;

List::List()
{
	Head = nullptr;
	Count = 0;
}

List::~List()
{
	DelAll();
}

int List::GetCount()
{
	return Count;
}

void List::Add(char data)
{
	Element * temp = new Element;

	temp->data = data;
	temp->Next = Head;

	Head = temp;

	Count++;
}

void List::Del()
{
	if (Head)
	{
		Element * temp = Head->Next;
		delete Head;
		Head = temp;
		Count--;
	}
}

void List::DelAll()
{
	while (Head != nullptr)
		Del();
}

void List::Print()
{
	// запоминаем адрес головного элемента
	Element * temp = Head;
	if (temp == nullptr)
	{
		cout << "List is empty!";
		return;
	}
	// Пока еще есть элементы
	while (temp != 0)
	{
		// Выводим данные
		cout << temp->data;
		// Переходим на следующий элемент
		temp = temp->Next;
	}
	cout << endl;
}

void List::InsertByPosition(char data, int position)
{
	if (position <= 0 && GetCount() < position) { return; }
	if (Head == nullptr) { Add(data); return; }

	Element*temp = new Element;
	temp->Next = Head;

	for (int i = 0; i < position - 1; i++)
	{
		temp = temp->Next;
	}
	Element*current = new Element;
	current->data = data;

	current->Next = temp->Next;
	temp->Next = current;
	Count++;
}

void List::RemoveByPosition(int position)
{

	if (position < 0 && position > GetCount()) { return; }
	if (Head == nullptr) { return; }

	Element*del = Head;
	Element*curr = nullptr;
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

int List::Find(char key)
{
	if (Head == nullptr) return -1;
	int pos = 0;
	for (Element*current = Head; current != nullptr; current = current->Next)
	{
		if (current->data == key)return pos;
		pos++;
	}
	return -1;
}

List::List(const List&obj)
{
	Count = 0;
	Head = nullptr;

	int i = 1;
	for (Element*temp = obj.Head;temp!=nullptr;temp=temp->Next)
	{
		InsertByPosition(temp->data, i);
		i++;
	}
}

List & List::operator=(const List &obj)
{
	if (this == &obj) { return *this; }
	DelAll();

	int i = 1;
	for (Element*temp = obj.Head; temp != nullptr; temp = temp->Next)
	{
		InsertByPosition(temp->data, i);
		i++;
	}
	return *this;
}
