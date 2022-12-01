//
// Created by sergey on 29.11.22.
//

#include <fstream>
#include <iostream>
#include "FileStateObservable.h"


FileStateObservable::FileStateObservable( std::string path) {
    std::ifstream iff(path);

    if(iff.bad()==true){ // если файл не существует
        fileState.exist=0;
        fileState.path = path;
        fileState.size = 0;

    }
    else{//существует
        fileState.exist=1;
        fileState.path = path;
        std::fstream file(path);
        fileState.size = 0;
        file.seekg (0, std::ios::end);
        fileState.size = file.tellg();
        file.close();
    }
}
//TODO:Потороение кода, исправить
void FileStateObservable::changeCondition( std::string path) {
    std::ifstream iff(path);

    if(iff.bad()==true){ // если файл не существует
        fileState.exist=0;
        fileState.path = path;
        fileState.size = 0;

    }
    else{//существует
        fileState.exist=1;
        fileState.path = path;
        std::fstream file(path);
        fileState.size = 0;
        file.seekg (0, std::ios::end);
        fileState.size = file.tellg();
        file.close();
    }
    notify();
}
void FileStateObservable::addObserver(Observer *observer) {
    observers.push_back(observer);
}
//TODO: Красным выделяет. Не знаю в чем проблема. Но по сути мне это и не нужно
//void FileStateObservable::removeObserver(Observer *observer) {
//    observers.erase(remove(observers.begin(),observers.end(),observer),observers.end());
//}
void FileStateObservable::notify() {
    for (auto observer: observers) {
        observer->notification(&fileState);
    }
}