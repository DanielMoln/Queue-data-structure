#include "queue.h"
#include <iostream>

IntQueue::IntQueue() {
    _size = 10;
    int* arrayPosition = new int[_size];
    for (int i = 0; i < _size; i++)
    {
        arrayPosition[i] = 0;
    }
    _data = arrayPosition;
    _actual_size = 0;
}

void IntQueue::enqueue(int b) {
    _data[_actual_size] = b;
    _actual_size++;
}

int IntQueue::dequeue() {
    _data[_actual_size] = 0;
    _actual_size--;
}

int IntQueue::peek() {
    return _data[_actual_size];
}

void IntQueue::clear() {
    for (int i = 0; i < _size; i++)
    {
        _data[i] = 0;
    }
    _actual_size = 0;
}

void IntQueue::show() {
    for (int i = 0; i < _size; i++)
    {
        std::cout << _data[i] << std::endl;
    }
}
