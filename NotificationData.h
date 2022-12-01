//
// Created by sergey on 01.12.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_NOTIFICATIONDATA_H
#define LAB_23_2_NOTCOPYPASTE_NOTIFICATIONDATA_H


#include <cstdio>

class NotificationData {
public:
    bool FileExist = 0;
    int Size = 0;
};

class FileState{
public:
    bool exists;
    size_t size;
};



#endif //LAB_23_2_NOTCOPYPASTE_NOTIFICATIONDATA_H
