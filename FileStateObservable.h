//
// Created by sergey on 29.11.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVABLE_H
#define LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVABLE_H

//конкретный класс, который реализует интерфейс Observable;


//class FileStateObservable {
//
//};




#include <vector>
#include "Observable.h"
#include "Observer.h"
#include "NotificationData.h"


template <class ObserverClass, class ObserverDataClass>
class FileStateObservable : public Observable<ObserverClass, ObserverDataClass>{

public:
    void    addObserver(Observer<ObserverDataClass> *observer);
protected:
    void    notify(ObserverDataClass *data);
private:
    //std::vector<Observer<ObserverDataClass> *> observers; для поставленной задачи не имеет смысла
    Observer<ObserverDataClass> * pt_observer; // указатель на наблюдателя
};

class TestSubject : public FileStateObservable<int, NotificationData>{// тут не инт должен быть
public:
    void stateChanged(){

        data.FileExist=1;
        data.Size=1;
    }
private:
    NotificationData data;
};

class TestObserver : public Observer<NotificationData>{
public:
    TestObserver(){testSubject.addObserver(this);}
private:
    TestSubject testSubject;
};


#include "FileStateObservable.tpp" // не компилируемый файл

#endif //LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVABLE_H
