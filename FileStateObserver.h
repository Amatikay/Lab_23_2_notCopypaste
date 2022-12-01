//
// Created by sergey on 29.11.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVER_H
#define LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVER_H

//конкретный класс, который реализует интерфейс Observer.


#include "Observer.h"
#include "NotificationData.h"

class FileStateObserver: public Observer<FileState> {
    ~FileStateObserver(){};
    void notification(FileState *data) override; // переопределение виртуальной фкнцции в базовм классе
};


#endif //LAB_23_2_NOTCOPYPASTE_FILESTATEOBSERVER_H
