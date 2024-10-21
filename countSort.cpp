#include <iostream>
#include <algorithm>
#include <vector>

void countSort(std::vector<int> &arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    std::vector<int> count(range), output(arr.size());

    // Store the count of each element
    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i] - min]++;
    }

    // Modify the count array such that each element at each index
    // stores the sum of previous counts (prefix sum)
    for (int i = 1; i < count.size(); i++)
    {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    // Copy the sorted elements into the original array
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    std::vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    std::cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    countSort(arr);

    std::cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
