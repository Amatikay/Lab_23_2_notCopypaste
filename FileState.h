//
// Created by sergey on 01.12.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_FILESTATE_H
#define LAB_23_2_NOTCOPYPASTE_FILESTATE_H


#include <string>

class FileState {
public:
    FileState(bool arg_exist,int arg_size,const char *arg_path){
        this->exist = arg_exist;
        this->size = arg_size;
        this->path = arg_path;
    }
    FileState(){
        this->exist = false;
        this->size = 0;
        this->path = "";
    }
    ~FileState(){}
    bool exist;
    int size;
    const char* path ;

    bool sravn (const FileState &filestate1) const { //TODO привести в человеческий вид.
//        this->Print();
//        filestate1.Print();
        if(exist == filestate1.exist){
            if (size==filestate1.size){
                return true;
            }
        }
        return false;
    }


    bool operator == (const FileState &last){ // перегрузка сравнения(не работает)
        this->Print();
        last.Print();
        if(exist == last.exist){
            if (size==last.size){
                return true;
            }
        }
        return false;

        //return (this->exist == last.exist and this->size == last.size);
    }
    FileState& operator = (const FileState &fileState1){ //перегрузка присвоения
        size = fileState1.size;
        exist = fileState1.exist;
        path = fileState1.path;
        return *this;
    }
    bool operator !=(const FileState *fileState1){
        if (this == fileState1){
            return false;
        }
        return true;
    }
    void Print() const {
        std::cout<<"Begin Print in Class FileState"<<std::endl;
        std::cout<<"\nExisting File: "<<this->exist << " Path to file: "<<this->path;
        std::cout<<" Size file: "<<this->size<<std::endl;
        std::cout<<"End Print in Class FileState"<<std::endl;
    }
//private:  TODO реализовать интерфейсы для фйал стейт обсеврейбл
//    bool exist;
//    int size;
//    const char* path ;
};

#endif //LAB_23_2_NOTCOPYPASTE_FILESTATE_H
