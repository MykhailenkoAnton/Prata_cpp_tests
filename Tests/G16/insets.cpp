#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <string>

void output(const std::string & s) { std::cout << s << " ";}

int main()
{
    std::string s1[4] = {"fine", "fish", "fashion", "fate"};
    std::string s2[2] = {"busy", "bats"};
    std::string s3[2] = {"silly", "singers"};
    std::vector<std::string> words(4);
    std::copy(s1, s1 + 4, words.begin());
    std::for_each(words.begin(), words.end(), output);
    std::cout << std::endl;

    // Конструирование анонимного объекта типа back_insert_iterator

    std::copy(s2, s2 + 2, std::back_insert_iterator<std::vector<std::string> >(words));
    std::for_each(words.begin(), words.end(), output);
    std::cout << std::endl;

    // Конструирование анонимного объекта типа insert_iterator
    std::copy(s3, s3 + 2, std::insert_iterator<std::vector<std::string> >(words, words.begin()));
    std::for_each(words.begin(), words.end(), output);
    std::cout << std::endl;
}