#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        std::vector<int> counts(2);
        int zeroes = std::count(s.begin(), s.end(), '0');
        long long ans = 0;

        for (char c : s) {
            int digit = c - '0';
            counts[digit]++;
            if (digit == 0) {
                ans += counts[1] > 0 ? 1 : 0;
            } else {
                ans += zeroes - counts[0];
            }
        }

        std::cout << ans << std::endl;
    }

    return 0;
}
