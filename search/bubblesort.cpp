#include <vector>
using namespace std;
void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
}
// or
#include <iostream>
using namespace std;

void sortArray(int *arr, int n)
{

    // base case - already sorted
    if (n == 0 || n == 1)
    {
        return;
    }

    // 1 case sovle karlia - largest element ko end me rakh dega
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive Call
    sortArray(arr, n - 1);
}

int main()
{

    int arr[5] = {2, 5, 1, 6, 9};

    sortArray(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}