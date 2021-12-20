#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {90, 4, 4, 6, 9, 8, 90, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < size; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}