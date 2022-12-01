//
// Created by sergey on 29.11.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVABLE_H
#define LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVABLE_H


#include <vector>
#include "Observable.h"

//конкретный класс, который реализует интерфейс Observable;

class FileStateObservable: public Observable{
private:
    std::vector<Observer*> observers;
    FileState fileState;
public:
    FileStateObservable(const char *path); // какие то поля и он чет ругается
    void updateData( const char* path);
    void addObserver(Observer *observer) override;
    //void removeObserver(Observer *observer) override;
    void notify() override;

};
#endif //LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVABLE_H
