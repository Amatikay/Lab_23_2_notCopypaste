//
// Created by sergey on 29.11.22.
//

#ifndef LAB_23_2_NOTCOPYPASTE_OBSERVER_H
#define LAB_23_2_NOTCOPYPASTE_OBSERVER_H


//интерфейс, с помощью которого наблюдатель получает оповещение;

template <class T>//реализую сразу шаблонный класс, чтобы в следствии не плодить десяток потомков,
                  // если когда то придется обратиться к этому коду
class Observer {
public:
    virtual ~Observer(){};
    virtual void notification(T *data) = 0;//получение сообщения

};


#endif //LAB_23_2_NOTCOPYPASTE_OBSERVER_H
