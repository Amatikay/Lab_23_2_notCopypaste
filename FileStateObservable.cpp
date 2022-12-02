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
        fileState.setExist(true);
        fileState.setPath(path);
        struct stat fi;
        stat(path,&fi);
        fileState.setSize(fi.st_size);
        file.close();
    }
    else  if (!file){ //Если файл не открылся. Будем считать, что это значит, что файла не существует
        fileState.setExist(false);
        fileState.setPath(path);
        fileState.setSize(0);
    }
}
void FileStateObservable::updateData( const char* path) {
    fileState_t_minus_1 = fileState;
    std::ifstream file;
    file.open(path);
    if (file){//существует
        fileState.setExist(true);
        fileState.setPath(path);
        struct stat fi;
        stat(path,&fi);
        fileState.setSize(fi.st_size);
        file.close();
    }
    else  if (!file){ //Если файл не открылся. Будем считать, что это значит, что файла не существует
        fileState.setExist(false);
        fileState.setPath(path);
        fileState.setSize(0);
    }
    notify();
}
void FileStateObservable::addObserver(Observer *observer) {
    observers.push_back(observer);
}

void FileStateObservable::notify() {
    for (auto observer: observers) {//проход по всем наблюдателям
        observer->notification(&fileState,&fileState_t_minus_1);//оповещение всех наблюдателей
    }
}
