#include <iostream>
using namespace std;

void bubblesort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j <= size - i - 1; j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
           
        }
      
    }
}
int main() {
    const int MAX = 67;
    int array[MAX];
    int size;
     
    cout<<"enter the size of the array:";
    cin >>size;

    cout << "Enter the elements in the array size";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    cout << "Before sorting: ";
    for (int i = 0; i < size; ++i)
     cout << array[i] << " ";
    cout << '\n';

    bubblesort(array, size);

    cout << "After sorting : ";
    for (int i = 0; i < size; ++i)
     cout << array[i] << " ";
    cout << '\n';

    return 0;
}