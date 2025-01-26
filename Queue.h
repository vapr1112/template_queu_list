#pragma once
#include <iostream>
#include <list>
#include "del_error.h"

using namespace std;

template <class T> class queue
{
private:
	list<T> wait;

public:
	queue()noexcept = default;
	//добавляет элемент в очередь
	void add(T element, int indx = 1)noexcept;
	//щчищает очередь
	void clear();
	//показывает размер очереди
	int get_count()const noexcept { return wait.size(); }
	//показывает информацию об элементах
	void print_queue()const;
	//проверка, пуста ли очередь или нет
	bool empty()const noexcept {return wait.empty();}
	//удаляет элемент
	void extract(int indx = 1);

	~queue() { wait.clear(); }
};

#include "Header.inl"