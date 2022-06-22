#include <iostream>

// template <typename Type>

// class HasFriend
// {
// private:
//     Type item;
//     static int ct;
// public:
//     HasFriend(const Type & i) : item(i) { ct++; }
//     ~HasFriend() {ct--;}
//     friend void counts();
//     friend void reports(HasFriend<Type> &); // template parameter
// };

// // Каждая специализация имеет собственный статический член данных
// template <typename Type>
// int HasFriend<Type>::ct = 0;

// // Нешаблонный друг для всех классов HasFriend<T>
// void counts()
// {
//     std::cout << "int count: " << HasFriend<int>::ct << "; ";
//     std::cout << "double count: " << HasFriend<double>::ct << std::endl;
// }

// // Нешаблонный друг для класса HasFriend<int>
// void reports(HasFriend<int> & hf)
// {
//     std::cout << "HasFriend<int>: " << hf.item << std::endl;
// }
// // Нешаблонный друг для класса HasFriend<double>
// void reports(HasFriend<double> & hf)
// {
//     std::cout << "HasFriend<dobule>: " << hf.item << std::endl;
// }

// int main()
// {
//     std::cout << "No objects declared: "; // объекты пока не объявлены
//     counts();

//     HasFriend<int> hfi1(10);
//     std::cout << "After hfi1 declared: "; // после объявления hfil
//     counts();

//     HasFriend<int> hfi2(20);
//     std::cout << "After hfi2 declared: "; // после объявления hfil
//     counts();

//     HasFriend<double> hfidb(10.5);
//     std::cout << "After hfidb declared: "; // после объявления hfil
//     counts();

//     reports(hfi1);
//     reports(hfi2);
//     reports(hfidb);
//     return 0;
// }








// template <typename Type> void counts();
// template <typename Type> void reports(Type &);

// template <typename TT>
// class HasFriend
// {
// private:
//     TT item;
//     static int ct;
// public:
//     HasFriend(const TT & i) : item(i) { ct++; }
//     ~HasFriend() {ct--;}
//     friend void counts<TT>();
//     friend void reports<>(HasFriend<TT> &);   // template parameter
// };

// template <typename T>
// int HasFriend<T>::ct = 0;

// // Определения дружественных функций для шаблона
// template <typename T>
// void counts()
// {
//     std::cout << "template size: " << sizeof(HasFriend<T>) << "; "; // размер шаблона
//     std::cout << "template counts(): " << HasFriend<T>::ct << std::endl; // counts() из шаблона
// }

// template <typename T>
// void reports(T & hf)
// {
//     std::cout << hf.item << std::endl;
// }


// int main()
// {
//     counts<int>();
//     HasFriend<int> hfi1(10);
//     HasFriend<int> hfi2(20);
//     HasFriend<double> hfidb(10.5);

//     reports(hfi1); // генерирует report(HasFriendT<int> &)
//     reports(hfi2); // генерирует report(HasFriendT<int> &)
//     reports(hfidb); // генерирует report(HasFriendT<double> &)

//     std::cout << "counts<int>() output:\n"; // вывод из counts<int> ()
//     counts<int>();
//     std::cout << "counts<double>() output:\n"; // вывод из counts<double> ()
//     counts<double>();
//     return 0;
// }





template<typename T>
class MyFriend
{
private:
    T item;
public:
    MyFriend(const T & i) : item(i) {}
    template<typename C, typename D> friend void show(C &, D & d);
};

template<typename C, typename D> void show(C & c ,D & d)
{
    std::cout << c.item << ", " << d.item << std::endl;
}

int main()
{
    MyFriend<int> hfi1(10);
    MyFriend<int> hfi2(20);
    MyFriend<double> hfi1db(10.5);
    std::cout << "hfil, hfi2: ";
    show(hfi1, hfi2);
    std::cout << "hfdb, hfi2: ";
    show(hfi1db, hfi2);
    return 0;
}