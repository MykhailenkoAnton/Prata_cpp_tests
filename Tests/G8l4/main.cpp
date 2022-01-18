#include <iostream>
#include <cstdlib>
#include <cstring>
struct stringyl
{
    char * str;
    int ct;
};
void show(const char * s, int n = 1);
void show(const stringyl & ST, int n = 1);
void set(stringyl & st_change, const char * ss);
int main()
{
    stringyl beany;
    char testing[] = "Reallity world no mass!";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'U';
    show(testing);
    show(testing, 3);
    show("Done!");
    delete [] beany.str;
    return 0;
}
void show(const char * s, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << s << std::endl;
    }
    
}
void show(const stringyl & ST, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout << ST.str << std::endl;
    }
    
}
void set(stringyl & st_change, const char * ss)
{
    st_change.ct = strlen(ss);
    st_change.str = new char[st_change.ct + 1];
    strcpy(st_change.str, ss);
}