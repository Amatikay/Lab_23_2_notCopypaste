#include <ctime>
#include <iostream>
#include "FileStateObserver.h"

//
// Created by sergey on 29.11.22.
//
void FileStateObserver ::notification( FileState *data) {

    std::cout << "  Существует: " << data->exists << std::endl;
    if (data->exists){
        std::cout << "  Размер: " << data->size << std::endl;
    }
    std::cout << std::endl << std::endl;
}
#include "FileStateObserver.h"
