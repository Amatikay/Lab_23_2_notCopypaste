//
// Created by sergey on 29.11.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_OBSERVER_H
#define LAB_23_2_NOTCOPYPASTE_OBSERVER_H


//интерфейс, с помощью которого наблюдатель получает оповещение;

#include "FileState.h"
class Observer {
public:
    virtual ~Observer(){};
    virtual void notification(const FileState *data,const FileState *data0) = 0;//получение сообщения

};


#endif //LAB_23_2_NOTCOPYPASTE_OBSERVER_H
