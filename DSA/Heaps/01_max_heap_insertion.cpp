#include <iostream>
using namespace std;

void insertMaxHeap(int heap[], int& size, int value)
{
    heap[size] = value;
    int current = size;
    size++;

    while (current > 0)
    {
        int parent = (current - 1) / 2;

        if (heap[parent] < heap[current])
        {
            int temp = heap[parent];
            heap[parent] = heap[current];
            heap[current] = temp;

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

    insertMaxHeap(heap, size, 50);
    insertMaxHeap(heap, size, 30);
    insertMaxHeap(heap, size, 40);
    insertMaxHeap(heap, size, 10);
    insertMaxHeap(heap, size, 60);

    cout << "Max Heap elements: ";
    for (int i = 0; i < size; i++)
        cout << heap[i] << " ";

    return 0;
}

