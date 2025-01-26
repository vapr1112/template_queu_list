#pragma once

template <class T> void queue<T>::add(T element, int indx)noexcept
{
	//������ ����������. � ������ ����� ����������� ������� � �������
	if (indx == 1)
	{
		wait.push_back(element);
	}

	else 
	{
		wait.push_front(element);
	}

}

template <class T> void queue<T>::print_queue()const 
{
	if (empty()) throw del_error("������ ����");
	for (T element : wait)
	{
		cout << element << "\n";
	}
}

template <class T> void queue<T>::clear()
{
	if (empty()) throw del_error("������ ����");
	wait.clear();
}

template <class T> void queue<T>::extract(int indx)
{
	if (empty()) throw del_error("������ ����");

	if (indx == 1)
	{
		wait.pop_back();
	}

	else
	{
		wait.pop_front();
	}

}