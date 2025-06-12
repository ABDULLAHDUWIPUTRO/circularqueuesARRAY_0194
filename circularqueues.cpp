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

    void insert()
    {
        int num;
        cout << "enter a number: ";
        cin >> num;
        cout << endl;

        // 1. cek apakah ada antrian penuh
        if ((front == 0 && rear == max - 1) || (front == rear + 1))
        {
            cout << "\nQueue overflow\n"; // 1.a
            return;                       // 1.b
        }


         // 2. cek apakah antrian kosong
         if (front == -1)
         {
             front = 0; // 2.a
             rear = 0;  // 2.b
         }
         else
         {
             // jika rear berada di posisi terakgir array, kembali ke awal array
             if (rear == max - 1)
                 rear = 0;
             else
                 rear = rear + 1;
         }
         queue_array[rear] = num;
     }
 
     void remove()
     {
         // cek apakah antrian kosong
         if (front == -1)
         {
             cout << "queue underflow\n";
             return;
         }

         cout << "\nthe element deleted from the queue is: " << queue_array[front] << "\n";
 
         // cek jika antrian hanya memiliki satu elemen
         if (front == rear)
         {
             front = -1;
             rear = -1;
         }
         
         else
         {
             // jika elemen yang dihapus berada di posisi terakhir array, kembali ke awal array
             if (front == max - 1)
                 front = 0;
             else
                 front = front + 1;
         }
     }
 