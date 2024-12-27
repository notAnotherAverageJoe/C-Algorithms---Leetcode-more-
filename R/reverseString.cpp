#include <iostream>
#include <string>
// reverse string with a the STD library swap
//  first put the return type which will be a string
//   second put the input variable in.
std::string reversed(std::string str)
{
    // left will be the first character in the string
    int left = 0;

    //  right will be the last character in the string
    int right = str.size() - 1;
    // while str[0] is < EXAMPLE str[10] keep going, once the left pointer and right pointer
    //  interesct it ends.
    while (left < right)
    {
        std::swap(str[left], str[right]);
        left++;
        right--;
    }

    // return the str at the end
    return str;
}

int main()
{
    std::string greetings = "Hello,world!";
    std::cout << "Original: " << greetings << std::endl;
    std::cout << "Reversed: " << reversed(greetings) << std::endl;

    return 0;
}

// Original: Hello,world!
// Reversed: !dlrow,olleH