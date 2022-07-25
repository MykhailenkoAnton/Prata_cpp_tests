// #include <iostream>
// #include <string>

// enum class proffesion
//     {
//         worker,
//         manager,
//         director
//     };
// class Emploe
// {
// private:
//     std::string name;
//     proffesion prof;
   
// public:
//     Emploe() {}
//     Emploe(const std::string & s, proffesion pf) : name(s), prof(pf)  {}
//     bool operator<(const Emploe & e)
//     {
//         return (this->prof < e.prof);
//     }
//     void Show() const
//     {
//         std::cout << "Name: " << name << ", ";
//         if(prof == proffesion::worker)
//         {
//             std::cout << "Worker!";
//         }
//         else if (prof == proffesion::manager)
//         {
//              std::cout << "Manager!";
//         }
//         else
//         {
//             std::cout << "Director!";
//         }
//     }
// };

// const int SIZE = 10;
// void BubbleSort(Emploe * arr, int size);
// void Show(int * arr, int size);
// int main(){
    
//    //int arr[SIZE] = {3, 5, 2, 1, 13, 12, 2, 1, 1, 20};   
    
//     //Show(arr, SIZE);
//     //Emploe w1("Harry", proffesion::manager);
//     //w1.Show();
     
//     //Emploe W[4] = { ("Harry", proffesion::manager), ("Bob", proffesion::director), ("Tanos", proffesion::manager), ("Anton", proffesion::worker)};
//     Emploe W[4];
//     W[0] = Emploe("Harry", proffesion::manager);
//     W[1] = Emploe("Bob", proffesion::director);
//     W[2] = Emploe("Tanos", proffesion::manager);
//     W[3] = Emploe("Anton", proffesion::worker);
//     BubbleSort(W, 4);
//     for(int i = 0; i < 4; i++)
//     {
//         W[i].Show();
//         std::cout << std::endl;
//     }
//     return 0;
// }

// void BubbleSort(Emploe * arr, int size)
// {
//     for(int i = 0; i < size; i++)
//     {
//         for(int j = size - 1; j > i; j--)
//         {
//             if(arr[j] < arr[j - 1])
//                {
//                    Emploe temp = arr[j];
//                    arr[j] = arr[j - 1];
//                    arr[j - 1] = temp;
//                }
//         }
//     }
    
// }

// #include <iostream>
// #include <memory>
// class A
// {
// public:
//     A()
//     {
//         std::cout << "Contructor!\n";
//     }
//     ~A() {
//         std::cout << "Destructor!\n";
//     }
// };

// int main()
// {
//         try
//         {
//             std::unique_ptr<A> ptr(new A());
//             throw 1;
//         }
//         catch(int)
//         {
            
//         }
        
//     return 0;
// }


// #include <iostream>
// #include <memory>
// class A

// {
// public:
//     void Show(){std::cout << "A\n";}
//     A() {std::cout << "Cons\n";}
//     ~A() {std::cout << "Des\n";}
// };

// void Deleter(int * a)
// {
//     std::cout << "Deleter\n";
//     delete a;
// }

// int main()
// {
//     {
//         std::shared_ptr<int> ptr{new int{}, Deleter};
//         // ptr->Show 
//         std::shared_ptr<int>::element_type var;
//         std::cout << std::endl;
//         var = 10;
//         std::cout << var;
//     }
//     return 0;
// }

// функция, которая принимает лямбду
// #include <iostream>
// #include <list>
// template <typename Lamda>
// void Show(Lamda foo)
// {
//     foo();
// }
// #include <iostream>
// int main()
// {
//     int a = 3, b = 4;

//     int c;
//     c = a + b;
//     int d = 2;


//     Show([]() {std::cout << "Hello\n";});
//     // std::cout << foo(a);
//     // std::cout << std::endl;
//     // std::cout << foo(b);
//     // std::cout << std::endl;
//     // std::cout << foo(c);
//     // std::cout << std::endl;

//     // std::cout << a << std::endl;
//     // std::cout << b << std::endl;
//     // std::cout << c << std::endl;


//     // double arr[5] = {1.3, 3.3, 5.3, 6.2, 7.1};

//     // for(auto x: arr)
//     // {
//     //     std::cout << x << " ";
//     // }

//     std::list<int> list1 {1, 3, 5};
//     for (auto it = list1.begin(); it != list1.end(); ++it)
//     {
//         std::cout << *it << " ";
//     }
//     auto al = list1.get_allocator();
//     // std::cout << *al << std::endl; ??
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main()
// {
//     std::vector<int> myVect {1, 3, 5 , 7, 8, 9};
    
//     auto it = std::find_if(myVect.begin(), myVect.end(), [](int x){
//         return x % 2 == 0;
//     });
    
//     if (it != myVect.end())
//     {
//         std::cout << *it << " Found!\n";
//     }
    
//     return 0;
// }


// class A
// {
// private:
//     char c;
//     int s;
//     double a;
// public:
//     A();
//     ~A();
//     virtual void Show();
// };

// int main()
// {
//     std::cout << sizeof(A) << std::endl;
//     return 0;
// }

// class A
// {
// private:
//     /* data */
// public:
//     A(/* args */);
//     ~A();
// };

// class B : virtual public A
// {

// };

// class C : virtual public A
// {

// };

// class D : public B, public C
// {
// private:
//     /* data */
// public:
//     D(/* args */);
//     ~D();
// };

// #include <iostream>
// #include <string>

// void revertString(std::string & str);
// int main()
// {
//     std::cout << "Enter str:\n";
//     std::string str;
//     std::cin >> str;

//     revertString(str);

//     std::cout << str;
//     return 0;
// }

// void revertString(std::string & str)
// {
//     // int j = str.size() - 1;
//     // int i = 0;
//     // while (i < j)
//     // {
//     //     char ch = str[i];
//     //     str[i] = str[j];
//     //     str[j] = ch;
//     //     i++;
//     //     j--;
//     // }

//     int length = str.size();
//     for( int i = 0; i < (length/2); ++i)
//     {
//         std::swap(str[i], str[length - i - 1]);
//     }
// }

// #include <iostream>
// #include <string>
// bool Foo(const std::string & str);
// int main()
// {
//     std::string str = "9+3-(56-5)-9+(3-56)-5(())";

//     bool result = Foo(str);
//     if (result)
//     {
//         std::cout << "right!\n";
//     }
//     else
//     {
//         std::cout << "no!\n";
//     }
// }

// bool Foo(const std::string & str)
// {
//     int count = 0;
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == '(')
//         {
//             count++;
//         }
//         else if(str[i] == ')')
//         {
//             count--;
//         }
//     }
//     return count == 0;
// }

// #include <iostream>
// #include <queue>
// #include <vector>
// #include <list>
// #include <algorithm>
// class More
// {
// public:
//     More() {}
//     ~More() {}
//     bool operator()(int a, int b)
//     {
//         return a > b;
//     }
  
// };

// int main()
// {
//     std::priority_queue<int, std::vector<int>, More> Myqueue;
    
//     Myqueue.push(10);
//     Myqueue.push(20);
//     Myqueue.push(30);

//     while (!Myqueue.empty())
//     {
//         int x = Myqueue.top();
//         std::cout << x << std::endl;
//         Myqueue.pop();
//     }

    
//     return 0;
// }


// #include <iostream>
// #include <ctime>
// #include <string>

// std::string Foo(int & num);
// int main()
// {
//     std::srand(time(0));

//     int number = rand() % 513;
//     std::cout << number << std::endl;

//     std::string this_binary_num = Foo(number);
//     std::cout << this_binary_num << std::endl;
//     return 0;
// }

// std::string Foo(int & num)
// {
//     std::string str = "";
//     for (int i = 0; num > i; num = num / 2)
//     {
//         if (num % 2 == 0)
//         {
//             str.insert(str.begin(), 1, '0');
//         }
//         else
//         {
//             str.insert(str.begin(), 1, '1');
//         }
//     }
//     return str;
// }


#include <iostream>
#include <ctime>
#include <algorithm>

void GenerateRandomArray(int * _result, unsigned int _maxValue);
void Sort(int * arr, int size);
int BackNum(int * arr, int size);
int main()
{
    std::srand(time(0));
    int MAX = rand() % 4 + 5;
    int * result = new int[MAX];

    GenerateRandomArray(result, MAX);

    for (int i = 0; i < MAX; i++)
    {
        std::cout << result[i] << ' ';
    }
    std::cout << std::endl;

    // Sort(result, MAX);
    std::cout << BackNum(result, MAX);

    std::cout << std::endl;
    for (int i = 0; i < MAX; i++)
    {
        std::cout << result[i] << ' ';
    }
    delete [] result;
    return 0;
}

void GenerateRandomArray(int * _result, unsigned int _maxValue)
{
    for (int i = 0; i < _maxValue; i++)
    {
        _result[i] = i + 1;
    }
    std::random_shuffle(_result, _result + _maxValue);
}

void Sort(int * arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                std::swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int BackNum(int * arr, int size)
{
    int count1 = 0, count2 = 0;
    for (int i = 0; i < size; i++)
    {
        count1 += arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        count2 += arr[i];
    }
    int result = count1 - count2;
    return result;
}