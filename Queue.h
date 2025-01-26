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
	//��������� ������� � �������
	void add(T element, int indx = 1)noexcept;
	//������� �������
	void clear();
	//���������� ������ �������
	int get_count()const noexcept { return wait.size(); }
	//���������� ���������� �� ���������
	void print_queue()const;
	//��������, ����� �� ������� ��� ���
	bool empty()const noexcept {return wait.empty();}
	//������� �������
	void extract(int indx = 1);

	~queue() { wait.clear(); }
};

#include "Header.inl"