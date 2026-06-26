#include <iostream>
#include <vector>

std::vector<int> bubble_sort(std::vector<int> nums) 
{
    bool swapping = true;
    int end = nums.size() - 1;

    while (swapping) 
    {
        swapping = false;

        for (int i = 1; i <= end; ++i) 
        {
            if (nums[i - 1] > nums[i]) 
            {
                int temp = nums[i - 1];
                nums[i - 1] = nums[i];
                nums[i] = temp;
                swapping = true;
            }
        }
        
        end -= 1;
    }

    return nums;
}

int main() 
{
    std::vector<int> my_nums = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::vector<int> my_sorted_nums = bubble_sort(my_nums);
    
    for (int i: my_sorted_nums)
    {
        std::cout << i << " ";
    }
}
