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
    std::vector<Observer*> observers; // вектор наблюдателей, которые следят за объектом
    FileState fileState;//состояние файла сейчас
    FileState fileState_t_minus_1;//прошлое состояние файла
public:
   explicit FileStateObservable(const char *path);
    void updateData( const char* path);//обновить данные о файле
    void addObserver(Observer *observer) override;//добавить наблюдателя
    void notify() override;//уведомить наблюдателей

};
#endif //LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVABLE_H
