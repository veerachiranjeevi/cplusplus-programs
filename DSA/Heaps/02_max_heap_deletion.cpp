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

void deleteMaxHeap(int heap[], int& size)
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
        int largest = current;

        if (left < size && heap[left] > heap[largest])
            largest = left;

        if (right < size && heap[right] > heap[largest])
            largest = right;

        if (largest == current)
            break;

        int temp = heap[current];
        heap[current] = heap[largest];
        heap[largest] = temp;

        current = largest;
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

    cout << "Before deletion: ";
    for (int i = 0; i < size; i++)
        cout << heap[i] << " ";

    deleteMaxHeap(heap, size);

    cout << "\nAfter deletion of root: ";
    for (int i = 0; i < size; i++)
        cout << heap[i] << " ";

    return 0;
}
