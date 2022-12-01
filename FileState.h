//
// Created by sergey on 01.12.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_FILESTATE_H
#define LAB_23_2_NOTCOPYPASTE_FILESTATE_H


#include <string>

//class FileState {
//public:
//    bool exist = 0;
//    int size = 0;
//    std::string path = "";
//};
struct FileState {
//    bool operator!=( const FileState& other ) { проверка на изменение состояния файла
//        if( this == &other ) {
//            return false;
//        }
//        return exist != other.exist || size != other.size;
//    }
    bool exist;
    int size;
    std::string path;
};

#endif //LAB_23_2_NOTCOPYPASTE_FILESTATE_H
