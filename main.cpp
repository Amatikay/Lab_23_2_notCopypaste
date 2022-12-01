#include <iostream>
#include <thread>
#include "FileStateObservable.h"
#include "FileStateObserver.h"

int main(int argc, char *argv[]) {

    FileStateObservable *file;
    file = new FileStateObservable("/home/sergey/test.txt");
    FileStateObserver* fileObserver;
    fileObserver = new FileStateObserver(file);
    while(true){
        std::this_thread::sleep_for( std::chrono::milliseconds( 100 ) );
        file->changeCondition("/home/sergey/test.txt");
    }
    return 0;
}

