#pragma once

template <class T> void queue<T>::add(T element)
{
	queue_size = wait.size();
	wait.push_back(element);
}

template <class T> void queue<T>::print_queue()const noexcept
{
	for (T element : wait)
	{
		cout << element << "\n";
	}
}

template <class T> void queue<T>::clear()noexcept
{
	queue_size = 0;
	wait.clear();
}

template <class T> void queue<T>::extract()
{
	if (!empty())
	{
		wait.pop_back();
	}
	else
	{
		cout << "\nсписок пуст\n";
	}

}