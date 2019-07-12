#pragma once

struct Element
{
	char data;
	Element * Next;
};

class List
{
	Element * Head;
	int Count;

public:
	List();

	~List();

	void Add(char data);

	void Del();

	void DelAll();

	void Print();

	int GetCount();

	void InsertByPosition(char, int);
	void RemoveByPosition(int);
	int Find(char);
	List(const List&);
	List&operator=(const List&);
};
