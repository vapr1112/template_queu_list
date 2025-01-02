#pragma once
#include <iostream>
#include <list>

using namespace std;

template <class T> class queue
{
private:
	list<T> wait;

	size_t queue_size;
public:
	//добавляет элемент в очередь
	void add(T element);
	//щчищает очередь
	void clear()noexcept;
	//показывает размер очереди
	int get_count()const noexcept { return queue_size; }
	//показывает информацию об элементах
	void print_queue()const noexcept;
	//проверка, пуста ли очередь или нет
	bool empty() {return wait.empty();}
	//удаляет элемент
	void extract();
};

#include "Header.inl"