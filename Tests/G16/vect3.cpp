#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
struct Review
{
    std::string title;
    int rating;
};
bool operator<(const Review &r1, const Review &r2);
bool worseThan(const Review &r1, const Review &r2);
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
    if (books.size() > 0)
    {
        std::cout << "Thank you. You entered the following "
                    << books.size () << " ratings:\n"
                    << "Rating\tBook\n";

        std::for_each(books.begin(), books.end(), ShowRevew);
        std::sort(books.begin(), books.end());
        std::cout << "Sorted by title:\nRating\tBook\n";

            // Список книг, отсортировванный по названию
        std::for_each(books.begin(), books.end(), ShowRevew);
        std::sort(books.begin(), books.end(), worseThan);
        std::cout << "Sorted by rating:\nRating\tBook\n";
            // Список книг, отсортировванный по рейтингу

        std::for_each(books.begin(), books.end(), ShowRevew);
        std::random_shuffle(books.begin(), books.end());
        std::cout << "After shuffling:\nRating\tBook\n";
                    // Список книг после перемешивания
        std::for_each(books.begin(), books.end(), ShowRevew);
    }
    else
    {
        std::cout << "No entries. ";
    }
    std::cout << "bye!\n";
    
    return 0;
}
bool operator<(const Review &r1, const Review &r2)
{
    if (r1.rating < r2.rating)
    {
        return true;
    }
    else if (r1.title == r2.title && r1.rating < r2.rating)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool worseThan(const Review &r1, const Review &r2)
{
    if (r1.rating < r2.rating)
    {
        return true;
    }
    else
    {
        return false;
    }
    
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