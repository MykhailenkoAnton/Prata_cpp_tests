#include <iostream>

template <typename Type>

class beta
{
private:
    template <typename V> // вложенный шаблонный класс-член
    class hold
    {
    private:
        V val;
    public:
        hold(V v = 0) : val(v) {}
        void show() const {std::cout << val << std::endl;}
        V Value() const {return val;}
    };
    hold<Type> q; // шаблонный объект
    hold<int> n; // шаблонный объект
public:
    beta(Type t, int i) : q(t), n(i) {}
    template<typename U>  // шаблонный метод    
    U blad(U u, Type t) { return (n.Value() + q.Value()) * u / t; }
    void Show() const {q.show(); n.show(); }
};

int main()
{
    beta<double> guy(3.5, 3);
    std::cout << "T was set to double\n"; // T установлен в double
    guy.Show();
    std::cout << "V was set to T, which is double, then V was set to int\n";
        // V установлен в Т, который double, затем V установлен в int
    std::cout << guy.blad(10, 2.3) << std::endl;
    std::cout << "U was set to int\n"; // U установлен в int
    std::cout << guy.blad(10.0, 2.3) << std::endl;
    std::cout << "U was set to double\n"; // U установлен в double
    std::cout << "Done\n";
    return 0;
}
