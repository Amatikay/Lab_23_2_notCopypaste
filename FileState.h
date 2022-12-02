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

    void setExist(bool state){ exist = state;}
    void setSize(int size){this->size = size;}
    void setPath(const char* path){this->path=path;}

    bool compare (const FileState &filestate1) const { //Сравнение двух объектов. Будем считать, что если:
                                                        //факт существования и размер двух состояний фала одинаковы
                                                        //значит, что файл не изменился.
        return exist == filestate1.exist and size == filestate1.size;
    }
    FileState& operator = (const FileState &fileState1){ //перегрузка присвоения
        size = fileState1.size;
        exist = fileState1.exist;
        path = fileState1.path;
        return *this;
    }
    void Print() const {//вывод на экран состояния файла
        std::cout<<"Begin print file state"<<std::endl;
        const char *exist_string = this->exist ? "True\t" : "False\t";
        std::cout << "Existing File: " << exist_string << "Path to file: " << this->path;

        std::cout<<"\tSize file: "<<this->size<<std::endl;
        std::cout<<"End print file state\n"<<std::endl;
    }

private:
    bool exist;
    int size;
    const char* path ;
};

#endif //LAB_23_2_NOTCOPYPASTE_FILESTATE_H
