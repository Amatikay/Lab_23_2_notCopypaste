//
// Created by sergey on 29.11.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVABLE_H
#define LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVABLE_H


#include <vector>
#include "Observable.h"

//конкретный класс, который реализует интерфейс Observable;


//class FileStateObservable {
//
//};





//template <class ObserverClass, class ObserverDataClass>
//class FileStateObservable : public Observable<ObserverClass, ObserverDataClass>{
//
//public:
//    void    addObserver(Observer<ObserverDataClass> *observer);
//protected:
//    void    notify(ObserverDataClass *data);
//private:
//    //std::vector<Observer<ObserverDataClass> *> observers; для поставленной задачи не имеет смысла
//    Observer<ObserverDataClass> * pt_observer; // указатель на наблюдателя
//};
//
//class TestSubject : public FileStateObservable<int, NotificationData>{// тут не инт должен быть
//public:
//    void stateChanged(){
//
//        data.FileExist=1;
//        data.Size=1;
//    }
//private:
//    NotificationData data;
//};
//
//class TestObserver : public Observer<NotificationData>{
//public:
//    TestObserver(){testSubject.addObserver(this);}
//private:
//    TestSubject testSubject;
//};







class FileStateObservable: public Observable{
private:
    std::vector<Observer*> observers;
    FileState fileState;
public:
    FileStateObservable( std::string path); // какие то поля и он чет ругается
    void changeCondition( std::string path);
    void addObserver(Observer *observer) override;
    //void removeObserver(Observer *observer) override;
    void notify() override;

};
#endif //LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVABLE_H
