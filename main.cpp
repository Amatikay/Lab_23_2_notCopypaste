#include <iostream>
#include <thread>
#include "FileStateObservable.h"
#include "FileStateObserver.h"

int main(int argc, char *argv[]) {
    //TODO Использовать в качеств пути к файлу argv[1]
    //Пока что для тестов использую полный путь.
    FileStateObservable *file;
//    file = new FileStateObservable(argv[1]);
    file = new FileStateObservable("/home/sergey/test.txt");
    FileStateObserver* fileObserver;
    fileObserver = new FileStateObserver(file);


    while( true){
        std::this_thread::sleep_for( std::chrono::milliseconds( 100 ) );
//        file->updateData(argv[1]);
        file->updateData("/home/sergey/test.txt");
    }





//    FileState *f1=new FileState(true,10,"hello");
//    FileState *f2=new FileState(true,10,"world");
//    bool res = f1==f2;
//    f1->Print();
//    f2->Print();
//    std::cout<< res;
//    std::cout <<f1->sravn(*f2);

//    int i =0;
//    while( i <5){
//        std::this_thread::sleep_for( std::chrono::milliseconds( 100 ) );
////        file->updateData(argv[1]);
//        file->updateData("/home/sergey/test.txt");
//        i++;
//    }


    return 0;
}

