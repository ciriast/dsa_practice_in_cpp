#include <iostream>
#include <vector>

int binary_search(std::vector<int> nums, int key)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) 
    {
        int mid = (start + end) / 2;

        if (nums[mid] == key)
        {
            return mid;
        }

        if (nums[mid] < key)
        {
            start = mid + 1;
        }

        if (nums[mid] > key)
        {
            end = mid - 1;
        }
    
    }

    return -1;
}

int main()
{
    std::vector<int> my_nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int my_key = binary_search(my_nums, 7);
    std::cout << my_key;
}
