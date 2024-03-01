#ifndef QUEUE_H
#define QUEUE_H

class IntQueue {
public:
    void enqueue(int b); // beletesz egy elemet
    int dequeue(); // kiveszi az első elemet
    int peek();
    void clear();
    void show();

    IntQueue();
private:
    int *_data;
    int _actual_size;
    int _size;
};

#endif // QUEUE_H
