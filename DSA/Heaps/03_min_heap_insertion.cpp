#include <iostream>
using namespace std;

void insertMinHeap(int heap[], int& size, int value)
{
    heap[size] = value;
    int current = size;
    size++;

    while (current > 0)
    {
        int parent = (current - 1) / 2;

        if (heap[current] < heap[parent])
        {
            int temp = heap[current];
            heap[current] = heap[parent];
            heap[parent] = temp;

            current = parent;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int heap[50];
    int size = 0;

    insertMinHeap(heap, size, 50);
    insertMinHeap(heap, size, 30);
    insertMinHeap(heap, size, 40);
    insertMinHeap(heap, size, 10);
    insertMinHeap(heap, size, 60);

    cout << "Min Heap elements: ";
    for (int i = 0; i < size; i++)
        cout << heap[i] << " ";

    return 0;
}
