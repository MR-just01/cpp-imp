#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            int temp;
            if (arr[j] < arr[j + 1])
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
    int n;

    cout << "Enter the size of the array (max " << MAX << "): ";
    if (!(cin >> n)) {
        cerr << "Invalid input\n";
        return 1;
    }
    if (n < 1 || n > MAX) {
        cerr << "Size must be between 1 and " << MAX << "\n";
        return 1;
    }

    cout << "Enter the elements in the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    cout << "Before sorting: ";
    for (int i = 0; i < n; ++i)
     cout << array[i] << " ";
    cout << '\n';

    bubblesort(array, n);

    cout << "After sorting (descending): ";
    for (int i = 0; i < n; ++i)
     cout << array[i] << " ";
    cout << '\n';

    return 0;
}