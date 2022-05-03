#include <iostream>
#include "tabtenn0.h"

TableTennisPlayer::TableTennisPlayer(const std::string & fn, const std::string & ln, bool ht) : f_name(fn),
l_name(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << l_name << ", " << f_name;
}

RatedPlayer::RatedPlayer(unsigned int r, const std::string & fn,
const std::string & ln, bool ht) : TableTennisPlayer (fn, ln, ht)
{
    rating = r;
}
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp) : TableTennisPlayer(tp), rating(r)
{
}
