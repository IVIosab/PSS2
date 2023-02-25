//
// Created by Mosab Mohamed on 3/6/2021.
//

#ifndef PSSII_HOMEWORK2_ROOMTYPE_H
#define PSSII_HOMEWORK2_ROOMTYPE_H

#include <bits/stdc++.h>

using namespace std;

/*
 * maybe later on add a size of the room
 */
class RoomType {
protected:
    string level;
    int number;

public:


    RoomType(int number, string level);

    virtual int getNumber() = 0;

    virtual string getLevel() = 0;
};


#endif //PSSII_HOMEWORK2_ROOMTYPE_H
