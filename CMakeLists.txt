cmake_minimum_required(VERSION 3.23)
project(Lab_23_2_notCopypaste)

set(CMAKE_CXX_STANDARD 23)

add_executable(Lab_23_2_notCopypaste main.cpp Observable.h Observer.h FileStateObserver.cpp FileStateObserver.h FileStateObservable.cpp FileStateObservable.h FileState.h)
