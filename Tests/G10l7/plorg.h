#ifndef PLORG_H_
#define PLORG_H_
#include <string>
class plorg
{
private:
    std::string name;
    int CI;
public:
   plorg();
//    plorg(const char * plor, int n = 50);
   void showplorg();
   void add_CI(int n);
   void pop_CI(int n);
   void set_name(const std::string &);
   std::string get_name() const;
   void compare_CI(plorg &) const;
};



#endif