#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> visited;
    for (int i = 0; i < nums.size(); i++) {
        int remain = target - nums[i];
        if(visited.count(remain)) {
            return {visited[remain], i};
        }
        visited[nums[i]] = i;
    }
    return {};
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    int x = 10;
    int* ptr = &x;

    int* numbers = new int[10];




    //     vector<int> ret;

    //     for (int i = 0; i < nums.size(); i++) {
    //         int remain = target - nums[i];
    //         for (int j = i; j < nums.size(); j++) {
    //             if (nums[j] == remain) {
    //                 ret.push_back(i);
    //                 ret.push_back(j);
    //                 return ret;
    //             }
    //         }
    //     }
    // }
}
