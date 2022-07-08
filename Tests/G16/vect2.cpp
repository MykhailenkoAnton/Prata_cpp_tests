#include <iostream>
#include <string>
#include <vector>
struct Review
{
    std::string title;
    int rating;
};
bool FillReview(Review & rr);
void ShowRevew(const Review & rr);

int main()
{
    std::vector<Review> books;
    Review temp;
    while (FillReview(temp))
    {
        books.push_back(temp);
    }
    int num = books.size();
    if (num > 0)
    {
        std::cout << "Thank you. You entered the following: \n";
        std::cout << "Rating\tBook\n";
        for (int i = 0; i < num; i++)
        {
            ShowRevew(books[i]);
        }
        std::cout << "Reprising:\n";
        std::cout << "Rating\tBook\n";
        std::vector<Review>::iterator pr;
        for (pr = books.begin(); pr != books.end(); pr++)
        {
            ShowRevew(*pr);
        }
        std::vector<Review> oldlist(books); // использование конструктора копирования
        if (num > 3)
        {
            // Удаление двух элементов
            books.erase(books.begin() + 1, books.begin() + 3);
            std::cout << "After erasure:\n";
            for (pr = books.begin(); pr != books.end(); pr++)
            {
                ShowRevew(*pr);
            }
            // Вставка одного элемента
            books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
            std::cout << "After insertion:\n";
            for (pr = books.begin(); pr != books.end(); pr++)
            {
                ShowRevew(*pr);
            }
        }
        books.swap(oldlist);
        std::cout << "Swapping oldlist with books:\n";
        for (pr = books.begin(); pr != books.end(); pr++)
        {
            ShowRevew(*pr);
        }
    }
    else
    {
        std::cout << "Nothing entered, nothing gained.\n";
    }
    
    return 0;
}
bool FillReview(Review & rr)
{
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin, rr.title);
    if (rr.title == "quit")
    {
        return false;
    }
    std::cout << "Enter book rating: ";
    std::cin >> rr.rating;
    if (!std::cin)
    {
        return false;
    }
    
    while (std::cin.get() != '\n')
    {
        continue;
    }
    return true;
}
void ShowRevew(const Review & rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl;
}