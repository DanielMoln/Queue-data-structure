#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    IntQueue my_queue;
    my_queue.enqueue(3);
    my_queue.dequeue();
    my_queue.enqueue(4);
    my_queue.enqueue(5);
    my_queue.enqueue(6);
    my_queue.show();
    return 0;
}
