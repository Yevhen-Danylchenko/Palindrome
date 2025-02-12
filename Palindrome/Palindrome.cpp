#include <iostream>
#include <vector>

using namespace std;

template <typename T>

class IsPalindrome {
private:
    T number;
    size_t size;
public:
    explicit IsPalindrome() {}
    explicit IsPalindrome(T number, size_t size) {
        this->number = number;
        this->size = size;
        for (size_t i = 0; i < size; i++) {
            this->number[i] = number[i];
        }
    }
    bool numIsPalindrome() {
        size_t start = 0;
        size_t end = size - 1;
        while (start < end) {
            if (number[start] != number[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};

int main()
{
    int size = 5;
    string world = "adfda";
    int num[] = { 1,2,3,2,1 };
    IsPalindrome<string> obj(world, size);
    cout << obj.numIsPalindrome() << endl;

    vector<int> testVector = { 1, 2, 3, 2, 1 };
    IsPalindrome<vector<int>> intPalindromeChecker(testVector, testVector.size());
    if (intPalindromeChecker.numIsPalindrome()) {
        cout << "The vector is a palindrome." << endl;
    }
    else {
        cout << "The vector is not a palindrome." << endl;
    }

    return 0;
}


