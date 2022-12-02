//
// Created by sergey on 29.11.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_OBSERVABLE_H
#define LAB_23_2_NOTCOPYPASTE_OBSERVABLE_H


#include "Observer.h"
// наблюдаемый
//интерфейс, определяющий методы для добавления и оповещения наблюдателей;
// с помощью метода notify

class Observable{
public:
    virtual void addObserver(Observer *observer)=0;
    virtual void notify()=0;
    virtual ~Observable(){};
};






#endif //LAB_23_2_NOTCOPYPASTE_OBSERVABLE_H
