#include <iostream>

using namespace std;

int main()
{
    int arr[] = {12, 23, 34, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    int pivot = s;
    int target = 34;
    char result = "Not Present";
    if (arr[pivot] <= target <= arr[size - 1])
    {
        s = pivot;
        e = size - 1;
        mid = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[mid] == target)
            {
                cout << "Present in line 2";
            }
            else if (arr[mid] > target)
            {
                e = mid - 1;
            }
            else if (arr[mid] < target)
            {
                s = mid + 1;
            }
        }
    }
    else
    {
        s = 0;
        e = pivot;
        if (arr[mid] == target)
        {
            cout << "Present in line 1";
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
    }
}