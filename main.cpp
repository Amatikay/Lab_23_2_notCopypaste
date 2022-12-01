#include <iostream>
#include <thread>
#include "FileStateObservable.h"
#include "FileStateObserver.h"

int main(int argc, char *argv[]) {

    FileStateObservable *file;
    file = new FileStateObservable(argv[1]);
    FileStateObserver* fileObserver;
    fileObserver = new FileStateObserver(file);
    while(true){
        std::this_thread::sleep_for( std::chrono::milliseconds( 100 ) );
        file->updateData(argv[1]);
    }
    return 0;
}

