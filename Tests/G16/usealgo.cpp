#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <iterator>
#include <set>
#include <cctype>

char toLower(char ch) {return tolower(ch);}
void display(const std::string & s) {std::cout << s << " ";}
std::string & ToLower(std::string & st) {
    std::transform(st.begin(), st.end(), st.begin(), toLower);
    return st;
}
int main()
{
    std::vector<std::string> words;
    std::cout << "Enter words (enter quit to quit) :\n"; // запрос на ввод слов
    std::string input;
    while (std::cin >> input && input != "quit")
    {
        words.push_back(input);
    }
    std::cout << "You entered the following words:\n"; // отображение введенных слов
    std::for_each(words.begin(), words.end(), display);
    std::cout << std::endl;
    // Помещение слов в набор с преобразование букв в строчные
    std::set<std::string> wordset;
    std::transform(words.begin(), words.end(), 
        std::insert_iterator<std::set<std::string> > (wordset, wordset.begin()), ToLower);
    std::cout << "\nAlphabetic list of words:\n"; // список слов в алфавитном порядке
    std::for_each(wordset.begin(), wordset.end(), display);
    std::cout << std::endl;

    // Помещение и частоты его помещения в карту
    std::map<std::string, int> wordmap;
    std::set<std::string>::iterator si;
    for (si = wordset.begin(); si != wordset.end(); si++)
    {
        wordmap[*si] = std::count(words.begin(), words.end(), *si);
    }
    // Отображение содержимого карты
    std::cout << "\nWord frequency:\n"; // частота появления слов
    for (si = wordset.begin(); si != wordset.end(); si++)
    {
        std::cout << *si << ": " << wordmap[*si] << std::endl;
    }
    
    return 0;
}