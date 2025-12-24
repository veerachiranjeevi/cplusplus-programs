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

void deleteMinHeap(int heap[], int& size)
{
    if (size == 0)
        return;

    heap[0] = heap[size - 1];
    size--;

    int current = 0;

    while (true)
    {
        int left = 2 * current + 1;
        int right = 2 * current + 2;
        int smallest = current;

        if (left < size && heap[left] < heap[smallest])
            smallest = left;

        if (right < size && heap[right] < heap[smallest])
            smallest = right;

        if (smallest == current)
            break;

        int temp = heap[current];
        heap[current] = heap[smallest];
        heap[smallest] = temp;

        current = smallest;
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

    cout << "Before deletion: ";
    for (int i = 0; i < size; i++)
        cout << heap[i] << " ";

    deleteMinHeap(heap, size);

    cout << "\nAfter deletion of min: ";
    for (int i = 0; i < size; i++)
        cout << heap[i] << " ";

    return 0;
}
