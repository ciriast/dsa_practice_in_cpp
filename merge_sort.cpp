#include <iostream>
#include <vector>

std::vector<int> merge_sort(std::vector<int> num_a, std::vector<int> num_b) {
    int num_a_len = num_a.size();
    int num_b_len = num_b.size();
    int i = 0;
    int j = 0;
    std::vector<int> my_result;

    while (i < num_a_len && j < num_b_len) {
        if (num_a[i] <= num_b[j]) {
            my_result.push_back(num_a[i]);
            i += 1;
        } else {
            my_result.push_back(num_b[j]);
            j += 1;
        }
    }

    while (i < num_a_len) {
        my_result.push_back(num_a[i]);
        i += 1;
    }

    while (j < num_b_len) {
        my_result.push_back(num_b[j]);
        j += 1;
    }

    return my_result;
}


std::vector<int> sort(std::vector<int> nums) {
    int nums_len = nums.size();

    if (nums_len < 2) {
        return nums;
    }

    int mid = nums_len / 2;

    std::vector<int> left(nums.begin(), nums.begin() + mid);
    std::vector<int> right(nums.begin() + mid, nums.end());
    std::vector<int> sorted_left = sort(left);
    std::vector<int> sorted_right = sort(right);

    return merge_sort(sorted_left, sorted_right);
}

int main() {
    std::vector<int> my_sorted_arr = sort({ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 });

    for (int i : my_sorted_arr) {
        std::cout << i << " ";
    }

    return 0;
}
