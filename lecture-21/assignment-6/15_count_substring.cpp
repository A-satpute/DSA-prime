#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[1001];
    cin >> s;

    int n = strlen(s);
    int totalPalindromes = 0;

    for (int i = 0; i < n; i++) {
        // 1. Odd Length Palindromes (Center ek single character hai)
        int left = i;
        int right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            totalPalindromes++;
            left--;
            right++;
        }

        // 2. Even Length Palindromes (Center do characters ke beech hai)
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            totalPalindromes++;
            left--;
            right++;
        }
    }

    cout << totalPalindromes << endl;

    return 0;
}