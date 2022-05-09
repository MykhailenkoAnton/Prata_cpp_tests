#ifndef TABTEN_H_
#define TABTEN_H_
#include <string>
class TableTennisPlayer
{
private:
    std::string f_name;
    std::string l_name;
    bool hasTable;
public:
    TableTennisPlayer(const std::string & fn = "none", const std::string & ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const {return hasTable;};
    bool ResetTable(bool v) {hasTable = v; return hasTable;};
};
class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating; // добавленный член данных
public:
    RatedPlayer(unsigned int r = 0, const std::string & fn = "none", const std::string & ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating() const {return rating;} // добавленный метод
    void ResetRating(unsigned int r) {rating = r;} // добавленный метод
};



#endif