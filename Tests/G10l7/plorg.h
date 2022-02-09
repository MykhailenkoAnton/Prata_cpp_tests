#ifndef PLORG_H_
#define PLORG_H_

class plorg
{
private:
    char name[20];
    int CI;
public:
   plorg(); 
//    plorg(const char * plor = "Plorga", int n = 50);
   void showplorg();
   void add_CI(int n);
   void pop_CI(int n);
};




#endif