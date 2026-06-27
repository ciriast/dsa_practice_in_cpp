#include <iostream>
#include <vector>

int quick_sort(std::vector<int> &nums, int start, int end) {
    int pivot = nums[end];
    int i = start - 1;

    for (int j = start; j < end; ++j) {
        if (nums[j] < pivot) {
            i += 1;
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
        }
    }

    int temp_val = nums[i + 1];
    nums[i + 1] = nums[end];
    nums[end] = temp_val;

    return i + 1;
}

void sort(std::vector<int> &nums, int start, int end) {
    if (start >= end) {
        return;
    }

    int pivot = quick_sort(nums, start, end);

    sort(nums, start, pivot - 1);
    sort(nums, pivot + 1, end);
}



int main() {
    std::vector<int> my_nums = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    sort(my_nums, 0, my_nums.size() - 1);

    for (int i : my_nums) {
        std::cout << i << " ";
    }

    std::cout << "I'm working in quick sort implemantion in cpp!";

    return 0;
}
