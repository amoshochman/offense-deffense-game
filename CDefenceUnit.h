//
// Created by Amos on 10/27/2020.
//

#ifndef THEGAME_CDEFENCEUNIT_H
#define THEGAME_CDEFENCEUNIT_H

#include "CUnitProperty.h"
#include <map>
using namespace std;


class CDefenceUnit {

public:
    void PerformTurn(map<int, CUnitProperty*>*);
};


#endif //THEGAME_CDEFENCEUNIT_H
