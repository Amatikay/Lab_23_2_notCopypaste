#include <ctime>
#include <iostream>
#include "FileStateObserver.h"

//
// Created by sergey on 29.11.22.
//

void FileStateObserver::notification(const FileState* fileState,const FileState* fileState0) {//реализация интерфейса получения уведомления
    if (!(fileState->compare(*fileState0))) {
        std::cout << "File Changed!" << std::endl;
        fileState->Print();
    }
}

