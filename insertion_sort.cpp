#include <iostream>
#include <vector>

std::vector<int> insertion_sort(std::vector<int> nums) {
    int nums_len = nums.size() - 1;

    for (int i = 1; i <= nums_len; ++i) {
        int j = i;

        while (j > 0 && nums[j - 1] > nums[j]) {
            int temp = nums[j - 1];
            nums[j - 1] = nums[j];
            nums[j] = temp;
            j -= 1;
        }
    }

    return nums;
}

int main() {
    std::vector<int> my_nums = {10, 9, 8, 11, 7, 6, 5, 4, 3, 2, 1};
    std::vector<int> my_sorted_nums = insertion_sort(my_nums);

    for (int i : my_sorted_nums) {
        std::cout << i << " ";
    }

    return 0;
}
