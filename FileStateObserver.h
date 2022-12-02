//
// Created by sergey on 29.11.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVER_H
#define LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVER_H

//конкретный класс, который реализует интерфейс Observer.
#include "Observer.h"
#include "Observable.h"

class FileStateObserver: public Observer{
private:
    Observable* file;
public:
    explicit FileStateObserver(Observable* object):file(object){
        object->addObserver(this);
    }
    void notification(const FileState* fileState,const FileState* fileState0) override;//реализация абстрактного
                                                                                      //интерфейса у класса Observer
};
#endif //LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVER_H
