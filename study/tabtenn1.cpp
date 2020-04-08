// tabtenn1.cpp --simple base class methods

#include "tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer (const string & fn, const string & ln, book ht): firstname(fn),
    lastname(ln), hasTable(ht){};

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}

//RatedPlayer methods
RatedPlayer:: RatedPlayer(unsigned int r, const string & fn,
    const string & ln, bool ht): TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer :: 