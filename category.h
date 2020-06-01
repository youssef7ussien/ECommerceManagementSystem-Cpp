#pragma once
#include<iostream>
#include<string>
#include"category.h"
#include"linked_list.h"

using namespace std;

class Category {
	string name;
	List<int> itemsId;
public:

    Category()
    {}

	int getNumberItems()
	{
		return itemsId.getLength();
	}


	void setName(string newName)
	{
		name = newName;
	}

	string getName()
	{
		return name;
	}

	int getProductId(int index)
	{
		return itemsId.getCopyItem(index);
	}

	void addItem(int newItemId)
	{
		itemsId.insertLast(newItemId);
	}

	void deleteItem(int id)
	{
		itemsId.removeAt(id);
	}

	bool operator ==(Category category)
	{
		return (category.name==name);
	}

	bool operator !=(Category category)
	{
		return (category.name != name);
	}

	bool operator ==(string name)
	{
		return (this->name == name);
	}

	bool operator !=(string name)
	{
		return (this->name != name);
	}
};
