// https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/A
#include <iostream>
#include <unordered_set>
#include <vector>

void two_sum(int N, int X, const std::vector<int>& sequence) {
    std::unordered_set<int> seen;
    for (int i = 0; i < N; ++i) {
        int num = sequence[i];
        int complement = X - num;
        if (seen.find(complement) != seen.end()) {
            std::cout << "YES" << std::endl;
            return;
        }
        seen.insert(num);
    }
    std::cout << "NO" << std::endl;
}

int main() {
    int N, X;
    std::cin >> N >> X;
    std::vector<int> sequence(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> sequence[i];
    }
    
    two_sum(N, X, sequence);
    
    return 0;
}
