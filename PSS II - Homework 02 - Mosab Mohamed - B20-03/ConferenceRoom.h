//
// Created by Mosab Mohamed on 3/6/2021.
//

#ifndef PSSII_HOMEWORK2_CONFERENCEROOM_H
#define PSSII_HOMEWORK2_CONFERENCEROOM_H


#include <bits/stdc++.h>
#include "RoomType.h"

using namespace std;

class ConferenceRoom : public RoomType {
public:

    ConferenceRoom(int number, string level);

    int getNumber();

    string getLevel();
};


#endif //PSSII_HOMEWORK2_CONFERENCEROOM_H
