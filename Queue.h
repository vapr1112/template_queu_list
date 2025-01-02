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
	//��������� ������� � �������
	void add(T element);
	//������� �������
	void clear()noexcept;
	//���������� ������ �������
	int get_count()const noexcept { return queue_size; }
	//���������� ���������� �� ���������
	void print_queue()const noexcept;
	//��������, ����� �� ������� ��� ���
	bool empty() {return wait.empty();}
	//������� �������
	void extract();
};

#include "Header.inl"