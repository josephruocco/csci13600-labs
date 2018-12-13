template <class T>
MyVector<T>::MyVector(){
    size  = 0;
    capacity = 10;
    T* data = new T[capacity];
}

template <class T>
MyVector<T>:: MyVector(int range, T value){
    size  = range;
    capacity = 10;
    T* data = new T[capacity];
    
    while(size < range){
      resize();
    }
    for(int i=0; i < range; i++){
      push_back(value);
    }
  }


 template <class T>
MyVector<T>::~MyVector(){
    delete[] data;
  }


template <class T>
void MyVector<T>::resize(){
  T* temp = new T[capacity*2];

  for(int i=0; i < size; ++i){
    temp[i] = data[i];
  }
  
  delete[] data;
  data  = temp;
  capacity *= 2;
  
}

// insert at location
template <class T>
void MyVector<T>::insert(T value, int index){

  if(size == capacity){
    resize();
  }
  
  for(int i = size-1; i >= index -1; i--){
    data[i + 1] = data[i];
  }

  data[index] = value;
  size++;
}

// insert at end
template <class T> void MyVector<T>::push_back(T value){

  if(size == capacity){
    resize();
  }
  else {
    data[size] = value;
    size++;
  }
  
 
  
}

// delete from location
template <class T> void MyVector<T>::pop(int index){
  
  for(int i = index; i < size; i++){
    data[i] = data[i+1];
  }

  size--;
}

// get data operator

template <class T> int  MyVector<T>::getSize( ){
  return size;
}
