#ifndef MY_SHARED_PTR
#define MY_SHARED_PTR

template<typename T>
void myDeletor(T*m_shp){
    delete m_shp;
}

template<typename T>
struct controlBlock
{
    int count=0;
    void(*delPtr)(T*);
};


template<typename T>
class mySharedPtr
{
    public:
        mySharedPtr();                   //default
        mySharedPtr(T*);                        //parameterized ctor
        mySharedPtr(const mySharedPtr<T>&);             //copy
        mySharedPtr<T>& operator=(const mySharedPtr<T>&);   //assignment
        T& operator*();                    //operator*
        ~mySharedPtr();                       //destructor
    
    private:
        T* m_shp;
        controlBlock<T>* ctrlBl;
};


template<typename T>  //default ctor implementation
mySharedPtr<T>::mySharedPtr(){
    m_shp = nullptr;
    ctrlBl = nullptr;
}

template<typename T>  //parameterized ctor
mySharedPtr<T>::mySharedPtr(T* ptr){
    m_shp = ptr;
    ctrlBl = new controlBlock;
    ctrlBl->count++;
    ctrlBl->delPtr = myDeletor;
}

template<typename T>   //copy ctor
mySharedPtr<T>::mySharedPtr(const mySharedPtr<T>& ptr){
    this->m_shp = ptr.m_shp;
    this->ctrlBl = ptr.ctrlBl;
    this->ctrlBl->count++;
    this->ctrlBl->delPtr = myDeletor;
}

template<typename T>   //assignment operator
mySharedPtr<T>& mySharedPtr<T>::operator=(const mySharedPtr<T>& ptr){
    
    if(this== &ptr){
        return *this;       
    }
    
    delete m_shp;
    delete ctrlBl;
    this->m_shp = ptr.m_shp;
    this->ctrlBl = ptr.ctrlBl;
    this->ctrlBl->count++;
 return *this;
}

template<typename T>    //operator*
T& mySharedPtr<T>::operator*(){  
    return *m_shp;
}

template<typename T>   //destructor
mySharedPtr<T>::~mySharedPtr(){
    this->ctrlBl->delPtr = myDeletor;
    delete ctrlBl;
}
#endif




