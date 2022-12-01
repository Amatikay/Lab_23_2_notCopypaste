//
// Created by sergey on 29.11.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_OBSERVABLE_H
#define LAB_23_2_NOTCOPYPASTE_OBSERVABLE_H


#include "Observer.h"
// наблюдаемый
//интерфейс, определяющий методы для добавления, удаления и оповещения наблюдателей;
// ObserverClass — тот, кто наблюдает
// ObserverDataClass — тип данных, которым мы будем уведомлять ObserverClass
// с помощью метода notify


class Observable{
public:
    virtual void addObserver(Observer *observer)=0;
    //virtual void removeObserver(Observer *observer)=0;
    virtual void notify()=0;
    virtual ~Observable(){};
};




//template <class ObserverClass, class ObserverDataClass>
//class Observable {
//public:
//    virtual void addObserver(Observer<ObserverDataClass> *observer) = 0;
//    virtual ~Observable(){};
//protected:
//    virtual void    notify(ObserverDataClass *data) = 0;//передача сообщения
//};


#endif //LAB_23_2_NOTCOPYPASTE_OBSERVABLE_H
