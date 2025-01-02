#include "Queue.h"

int main()
{
	setlocale(LC_ALL, "rus");

	queue<int> queue;

	int value;

	cout << "\nвведите значение\n";

	cin >> value;

	queue.add(value);

	cout << "\nвведите значение\n";

	cin >> value;

	queue.add(value);

	queue.print_queue();

	queue.extract();

	queue.print_queue();

	return 0;
}