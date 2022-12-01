#include "FileStateObservable.h"

template <class ObserverClass,class ObserverDataClass>
void FileStateObservable<ObserverClass, ObserverDataClass>::addObserver(Observer<ObserverDataClass> *observer){

    pt_observer = observer;

}

template <class ObserverClass,class ObserverDataClass>
void FileStateObservable<ObserverClass, ObserverDataClass>::notify(ObserverDataClass *data){

    pt_observer->notification(data);
}