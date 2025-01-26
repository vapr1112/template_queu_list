#include "Queue.h"

int main()
{
	setlocale(LC_ALL, "rus");

	queue<int> queue;

	int value;

	try
	{

		cout << "\nвведите значение\n";

		cin >> value;

		queue.add(value);

		cout << "\nвведите значение\n";

		cin >> value;

		queue.add(value);

		queue.print_queue();

		queue.extract();

		queue.print_queue();
	}

	catch (const del_error& del_er)
	{
		cout << del_er.what();
	}
	return 0;
}