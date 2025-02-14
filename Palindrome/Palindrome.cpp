#include <iostream>

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
    bool numberIsPalindrom() {
        T temp = 0;
        T reversNum = 0;
        T originalNum = number;
        int num = 10;
        for (size_t i = 0; i < size; i++) {
            temp = number % num;
            reversNum = reversNum * num + temp;
            number /= num;
        }
        if (reversNum == originalNum) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    int size = 5;
    string world = "adfda";
    
    IsPalindrome<string> obj(world, size);
    cout << obj.numIsPalindrome() << endl;

    int num_1 = 12329;
    IsPalindrome<int> obj_1(num_1, size);
    cout << obj_1.numberIsPalindrom() << endl;

    return 0;
}


