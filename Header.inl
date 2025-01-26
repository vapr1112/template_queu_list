#pragma once

template <class T> void queue<T>::add(T element, int indx)noexcept
{
	//индекс определяет. с какого конца добавляется элемент в очередь
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
	if (empty()) throw del_error("список пуст");
	for (T element : wait)
	{
		cout << element << "\n";
	}
}

template <class T> void queue<T>::clear()
{
	if (empty()) throw del_error("список пуст");
	wait.clear();
}

template <class T> void queue<T>::extract(int indx)
{
	if (empty()) throw del_error("список пуст");

	if (indx == 1)
	{
		wait.pop_back();
	}

	else
	{
		wait.pop_front();
	}

}