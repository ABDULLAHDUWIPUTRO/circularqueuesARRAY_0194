#include <iostream>
using namespace std;

class Queues
{
private:
    static const int max = 5;
    int front, rear;
    int queue_array[5];

public:
    Queues()
    {
        front = -1;
        rear = -1;
    }