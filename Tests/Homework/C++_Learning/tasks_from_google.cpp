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




// #include <iostream>
// #include <ctime>
// #include <algorithm>
// void GenerateRandomArray(int * _result, unsigned int _maxValue);
// void Sort(int * arr, int size);
// int BackNum(int * arr, int size);
// int main()
// {
//     std::srand(time(0));
//     int MAX = rand() % 4 + 5;
//     int * result = new int[MAX];
//     GenerateRandomArray(result, MAX);
//     for (int i = 0; i < MAX; i++)
//     {
//         std::cout << result[i] << ' ';
//     }
//     std::cout << std::endl;
//     // Sort(result, MAX);
//     std::cout << BackNum(result, MAX);
//     std::cout << std::endl;
//     for (int i = 0; i < MAX; i++)
//     {
//         std::cout << result[i] << ' ';
//     }
//     delete [] result;
//     return 0;
// }

// void GenerateRandomArray(int * _result, unsigned int _maxValue)
// {
//     for (int i = 0; i < _maxValue; i++)
//     {
//         _result[i] = i + 1;
//     }
//     std::random_shuffle(_result, _result + _maxValue);
// }

// void Sort(int * arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = size - 1; j > i; j--)
//         {
//             if (arr[j] < arr[j - 1])
//             {
//                 std::swap(arr[j], arr[j - 1]);
//             }
//         }
//     }
// }

// int BackNum(int * arr, int size)
// {
//     int count1 = 0, count2 = 0;
//     for (int i = 0; i < size; i++)
//     {
//         count1 += arr[i];
//     }
//     for (int i = 0; i < size - 1; i++)
//     {
//         count2 += arr[i];
//     }
//     int result = count1 - count2;
//     return result;
// }




// #include <iostream>
// #include <vector>
// int main()
// {
//     std::vector<int> v = {1, 3, 5, 2, 1, 6, 1, 12};
//     int num = 1;
//     int k = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] != num)
//         {
//             v[k] = v[i];
//             k++;
//         }
//     }
//     for (auto x : v)
//     {
//         std::cout << x << ' ';
//     }
//     return 0;
// }




// многопоточность
// #include <iostream>
// #include <thread>
// #include <chrono>
// #include <mutex>
// void Foo();
// int main()
// {
//     std::thread As = std::thread(Foo);
//     std::cout << "Main three id = " << std::this_thread::get_id();
//     std::cout << std::endl;
//     As.join();
//     return 0;
// }
// void Foo()
// {
//     std::cout << "Foo three id = " << std::this_thread::get_id();
//     std::cout << std::endl;
// }

// void Threand_ONE()
// {
//     for (int i = 0; i < 10; i++)
//     {
//        std::cout << i + 1 << "\tID thread = " << std::this_thread::get_id() << "\tThreand_ONE\n";
//        std::this_thread::sleep_for(std::chrono::milliseconds(50)); 
//     }
// }

// void Threand_TWO()
// {
//     for (int i = 0; i < 10; i++)
//     {
//        std::cout << i + 1 << "\tID thread = " << std::this_thread::get_id() << "\tThreand_TWO\n";
//        std::this_thread::sleep_for(std::chrono::milliseconds(50)); 
//     }
// }

// void Threand_THREE()
// {
//     for (int i = 0; i < 10; i++)
//     {
//        std::cout << i + 1 << "\tID thread = " << std::this_thread::get_id() << "\tThreand_THREE\n";
//        std::this_thread::sleep_for(std::chrono::milliseconds(50)); 
//     }
// }

// int Sum(int a, int b)
// {
//     std::this_thread::sleep_for(std::chrono::milliseconds(3000));
//     std::cout << "WORK STARTED in DoWork ====== id threed = " << std::this_thread::get_id() << std::endl;
//     std::this_thread::sleep_for(std::chrono::milliseconds(3000));
//     std::cout << "WORK STOPPED in DoWork ====== id threed = " << std::this_thread::get_id() << std::endl;
//     return a + b;
// }
// int main()
// {
//     int result;
//     auto l1 = [&result]() { result = Sum(2, 5);};
//     std::thread t1(l1);
//     for (int i = 0; i < 10; i++)
//     {
//        std::cout << i + 1 << "\tID thread = " << std::this_thread::get_id() << "\tmain works\n";
//        std::this_thread::sleep_for(std::chrono::milliseconds(500)); 
//     }
//     t1.join();
//     std::cout << "Sum result = " << result << std::endl;
//     return 0;
// }




// class MyClass
// {
// public:
//     void DoWork_ONE()
//     {
//         std::this_thread::sleep_for(std::chrono::milliseconds(3000));
//         std::cout << "WORK Started in DoWork_ONE ====== id threed = " << std::this_thread::get_id() << std::endl;
//         std::this_thread::sleep_for(std::chrono::milliseconds(3000));
//         std::cout << "WORK STOP in DoWork_ONE ====== id threed = " << std::this_thread::get_id() << std::endl;
//     }
//     void DoWork_TWO(int a)
//     {
//         std::this_thread::sleep_for(std::chrono::milliseconds(3000));
//         std::cout << "WORK Started in DoWork_TWO ====== id threed = " << std::this_thread::get_id() << std::endl;
//         std::this_thread::sleep_for(std::chrono::milliseconds(3000));
//         std::cout << "Dowork_TWO = " << a << std::endl;
//         std::cout << "WORK STOP in DoWork_TWO ====== id threed = " << std::this_thread::get_id() << std::endl;
//     }
//     int Sum(int a, int b)
//     {
//         std::this_thread::sleep_for(std::chrono::milliseconds(3000));
//         std::cout << "WORK Started in Sum ====== id threed = " << std::this_thread::get_id() << std::endl;
//         std::this_thread::sleep_for(std::chrono::milliseconds(3000));
//         std::cout << "WORK STOP in Sum ====== id threed = " << std::this_thread::get_id() << std::endl;
//         return a + b;
//     }
// };
// int main()
// {   
//     int result;
//     MyClass mc;
//     // auto result_sum = [&result, &mc]() {result = mc.Sum(2, 6);};
//     // std::thread t11(result_sum);
//     // std::thread t11(&MyClass::DoWork_TWO, mc, 15);
//     std::thread t11([&mc](){
//         mc.DoWork_TWO(13);
//     });
//     for (int i = 0; i < 10; i++)
//     {
//        std::cout << i + 1 << "\tID thread = " << std::this_thread::get_id() << "\tmain works\n";
//        std::this_thread::sleep_for(std::chrono::milliseconds(500)); 
//     }
//     t11.join();
//     // std::cout << "Result = " << result << std::endl;
//     return 0;
// }

// #include <iostream>
// #include <thread>
// #include <chrono>
// #include <mutex>
// std::mutex mtx;
// void Show(char ch)
// {
//     mtx.lock();
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             std::cout << ch;
//             std::this_thread::sleep_for(std::chrono::milliseconds(50));
//         }
//         std::cout << std::endl;
//     }
//     std::cout << std::endl;
//     mtx.unlock();
// }
// int main()
// {
//     std::thread t1(Show, '*');
//     std::thread t2(Show, '#');
//     t1.join();
//     t2.join();
//     return 0;
// }


// #include <iostream>
// #include <set>
// #include<algorithm>
// int main()
// {
//     std::multiset<int> mySet({33, 61,  56, 23, 12, 3, 1, 1, 3, 4, 4, 1 , 33 ,12});

//     for (auto x : mySet)
//     {
//         std::cout << x << ' ';
//     }
//     std::cout << std::endl;
//     auto it = std::find(mySet.begin(), mySet.end(), 1);
//     mySet.erase(it);
   
//     for (auto x : mySet)
//     {
//         std::cout << x << ' ';
//     }
    
//     return 0;
// }

// #include <iostream>
// int pows(int a, int b)
// {
//     int result = 1;
//     for (int i = 0; i < b; i++)
//     {
//         result *= a;
//     }
//     return result;
// }
// int main()
// {
//     std::cout << "Enter number: ";
//     int num1, num2;
//     std::cin >> num1;
//     std::cout << "Enter powNumber: ";
//     std::cin >> num2;
    
//     int num3 = pows(num1, num2);

//     std::cout << num3 << std::endl;
    
    
//     return 0;
// }



// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <vector>
// #include <map>
// #include <algorithm>

// using namespace std;

// struct Person{
//     Person():lastName("noname"),firstName(""),age(0),job_id(0),position_id(0){}
//     Person(const string& _lastName, const string& _firstName, int _age, int _job_id, int _position_id)
//         :lastName(_lastName),
//           firstName(_firstName),
//           age(_age),
//           job_id(_job_id),
//           position_id(_position_id)
//     {}
//     string lastName;
//     string firstName;
//     int age;
//     int job_id;
//     int position_id;
// };

// struct Job{
//     Job():name("invalid job"),id(-1){}
//     Job(const string& _name, int _id):name(_name),id(_id){}
//     string name;
//     int id;

// };

// struct Position{
//     Position():name("invalid position"),id(-1){}
//     Position(const string& _name, int _id):name(_name),id(_id){}
//     string name;
//     int id;
// };

// bool compareByName(const Person& person1, const Person& person2){
//     if(person1.lastName==person2.lastName){
//         return person1.firstName<person2.firstName;
//     }
//     return person1.lastName<person2.lastName;
// }

// bool compareByAge(const Person & p1, const Person & p2)
// {
//     return p1.age > p2.age;
// }

// class PersonsList{
// public:

//     void addPerson(const Person& person){
//         persons.push_back(person);
//     }
//     void addPosition(const Position& position){
//         positionsMap[position.id]=position;
//     }
//     void addJob(const Job& job){
//         jobsMap[job.id]=job;
//     }

//     void print(){
//         for(int i=0;i<(int)persons.size();i++){

//             Person& person=persons[i];

//             Job& job=jobsMap[person.job_id];
//             Position& position=positionsMap[person.position_id];

//             cout << setfill (' ') << std::setw (15) << person.lastName;
//             cout << setfill (' ') << std::setw (10) << person.firstName;
//             cout << setfill (' ') << std::setw (5) << person.age << " years";
//             cout << setfill (' ') << std::setw (20) << job.name;
//             cout << setfill (' ') << std::setw (20) << position.name;
//             cout << endl;
//         }
//     }

    
    
//     void sortByName(){
//         stable_sort(persons.begin(),persons.end(),compareByName);
//     }

//     void sortByAge(){
//         // ================================================= TODO
//         // programmer also want to change something else, not only this fucntion
//         stable_sort(persons.begin(), persons.end(), compareByAge);
//     }

//     void sortByJob(){
//         // ================================================= TODO
//         auto JM = jobsMap;
//         stable_sort(persons.begin(), persons.end(), [&JM](const Person & p1, const Person & p2){
//             return JM[p1.job_id].name < JM[p2.job_id].name;
//         });
//     }

    
// private:
//     std::vector<Person> persons;

//     std::map<int,Job> jobsMap;
//     std::map<int,Position> positionsMap;
// };

// int main()
// {
//     PersonsList list;

//     Job google("Google",1);
//     Job microsoft("Microsoft",2);
//     Job hp("Aewlett-Packard",3);

//     list.addJob(google);
//     list.addJob(microsoft);
//     list.addJob(hp);

//     Position junior("Junior developer",1);
//     Position senior("Senior developer",2);
//     Position manager("Manager",3);

//     list.addPosition(junior);
//     list.addPosition(senior);
//     list.addPosition(manager);

//     list.addPerson(Person("Ivanov","Ivan",21,google.id,junior.id));
//     list.addPerson(Person("Sidorov","Nikolay",28,google.id,senior.id));
//     list.addPerson(Person("Ivanov","Maxim",28,google.id,manager.id));

//     list.addPerson(Person("Volkova","Katerina",22,microsoft.id,junior.id));
//     list.addPerson(Person("Demidov","Vitaly",35,microsoft.id,manager.id));

//     list.addPerson(Person("Bodrov","Boris",40,hp.id,senior.id));

//     list.sortByName();
//     cout<<"Sorted by name:"<<endl;
//     list.print();

//     cout<<endl;

//     list.sortByAge();
//     cout<<"Sorted by age:"<<endl;
//     list.print();

//     cout<<endl;

//     list.sortByJob();
//     cout<<"Sorted by job:"<<endl;
//     list.print();

//     return 0;
// }

// #include <iostream>
// #include <memory>

// class TFish
// {
// public:
//     virtual void Show() {std::cout << "TFishA\n";}
// };
// class TTura : public TFish
// {

// public:
//     void Show() {std::cout << "TTura\n";}
//     void SomeFoo() {std::cout << "SomeFoo TTura()\n";}
// };

// class TCarp : public TFish
// {

// public:
//     void Show() {std::cout << "TCarp";}

//     void SomeFooTCarp() {std::cout << "SomeFoo TCarp ()\n";}
// };


// void foo(TFish * fish)
// {
//     TTura * tura = dynamic_cast<TTura *> (fish);
//     if (tura)
//     {
//         tura->SomeFoo();
//     }
    
//     std::cout << std::endl;
//     TCarp *tura1 = dynamic_cast<TCarp *> (fish);
//     if (tura1)
//     {
//         tura1->SomeFooTCarp();
//     }
// }



// int main()
// {   
//     TTura f1;
//     TCarp f2;

//     foo(&f1);
//     foo(&f2);
//     return 0;
// }

// #include <ctime>
// #include <cstdlib>
// #include <iostream>
 
// using std::cout;
 
// /*ИЕРАРХИЯ КЛАССОВ*/
// class Grand{
//     int hold;
// public:
//     Grand(int h=0):hold(h){}
//     virtual void Speak() const { cout << "I'm a grang class!\n";}
//     virtual int Value() const { return hold; }
//     virtual ~Grand(){}
 
// };

// class Superb: public Grand{
// public:
//     Superb(int h = 0):Grand(h){}
//     void Speak()       const { cout << "I'm a superb class!!\n"; }
//     virtual void Say() const{  cout << "I hold the superb value of " <<  Value() << '\n';    }
 
// };

// class Magnificent: public Superb{
//     char ch;
// public:
//     Magnificent(int h = 0, char c = 'A'):Superb(h),ch(c){}
//     void Speak() const { cout << "I'm a magnificent class!!!\n"; }
//     void Say()   const { cout << "I hold the character ch " << ch << " and the integer " << Value() << '\n'; }
// };
// /*КОНЕЦ ИЕРАРХИИ КЛАССОВ*/
 
// Grand* GetOne(); //прототип функции, возвращающей адрес объекта случайного типа
 
// int main(){
//     srand(std::time(0));
 
//     Grand  *pg;     //В pg будет записываться адрес объекта случайного типа
//     Superb *ps;     //ps будет использован для вызова метода Say
 
//     for (auto i=0; i<5; i++){
//         pg = GetOne();
//         pg->Speak();
//         if (pg != dynamic_cast<Superb *> (pg))
//         {
//             std::cout << "\n";
//         }
//         if (ps = dynamic_cast<Superb *>(pg))
//         {
//             ps->Say() ; //Проверка на успешность (безопасность) и выполнения метода Say
//             cout << "\n";
//         }
//     }
// }
 
// /*генерация объекта случайного типа*/
// Grand* GetOne(){
//   Grand *p;
//    switch (rand()%3){
//     case 0: p = new Grand  (rand()  % 100);     break;
//     case 1: p = new Superb (rand () % 100);  break;
//     case 2: p = new Magnificent (rand() % 100, 'A' + rand() % 26); break;
//    }
//   return p; //возврат указателя на объект типа Grand
// }


// #include <iostream>

// class A
// {

// public:
//     A() { std::cout << "class A. Constructor\n";}
//     ~A() { std::cout << "class A. Destructor\n";}
// };

// class A1
// {
// private:
//     A a;
// public:
//     A1(){ std::cout << "class A1. Constructor\n";}
//     ~A1() { std::cout << "class A1. Destructor\n";}
// };

// class C
// {
// private:
//     A1 a1;
// public:
//     C() { std::cout << "class C. Constructor\n";}
//     ~C() { std::cout << "class C. Destructor\n";}
// };

// class D : public C
// {
// public:
//     D() { std::cout << "class D. Constructor\n";}
//     ~D() { std::cout << "class D. Destructor\n";}
// };


// int main()
// {
//     D c;
//     return 0;
// }