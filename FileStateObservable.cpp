//
// Created by sergey on 29.11.22.
//

#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include "FileStateObservable.h"

FileStateObservable::FileStateObservable(const char *path) {
    std::ifstream file;
    file.open(path);
    if (file){//существует
        fileState.exist= true;
        fileState.path = path;
        struct stat fi;
        stat(path,&fi);
        fileState.size=fi.st_size;
        file.close();
    }
    else { //TODO Не стоит просто оставлять Else переписать.
        fileState.exist=false;
        fileState.path = path;
        fileState.size = 0;
    }

}
//TODO:Потороение кода, исправить
void FileStateObservable::updateData( const char* path) {
    fileState_t_minus_1 = fileState;
//    std::cout<<"Start Block for check fileState"<<std::endl;
//    fileState_t_minus_1.Print();
//    fileState.Print();
//    std::cout<<"End Block for check fileState"<<std::endl;
    std::ifstream file;
    file.open(path);
    if (file){//существует
        fileState.exist= true;
        fileState.path = path;
        struct stat fi;
        stat(path,&fi);
        fileState.size=fi.st_size;
        file.close();
    }
    else {
        fileState.exist=false;
        fileState.path = path;
        fileState.size = 0;
    }

    notify();
}
void FileStateObservable::addObserver(Observer *observer) {
    observers.push_back(observer);
}

void FileStateObservable::notify() {
    for (auto observer: observers) {
        observer->notification(&fileState,&fileState_t_minus_1);
    }
}
