//
//  smartPointer.hpp
//  CppUtilFunctions
//
//  Created by shaoxiong on 9/25/16.
//  Copyright © 2016 shaoxiong. All rights reserved.
//

#ifndef smartPointer_hpp
#define smartPointer_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

/*    a template    */
// a template of smartPointer
template <class T>
class smartPointer
{
private:
    T *_ptr;
public:
    smartPointer(T *p) : _ptr(p){}
    ~smartPointer(){
        delete _ptr;
    }
    T& operator *(){
        return *_ptr;
    }
    T* operator ->(){
        return _ptr;
    }
};

/* implementation 1 */
// only used by HasPtr, so all private
class U_Ptr{
    friend class HasPtr;
    int *ip;
    size_t use;
    U_Ptr(int *p): ip(p), use(1){
        std::cout<<"U_Ptr constructor called!"<<std::endl;
    }
    ~U_Ptr(){
        delete ip;
        std::cout<<"U_Ptr distructor called!"<<std::endl;
    }
};

class HasPtr{
private:
    // reference count class
    U_Ptr *ptr;
    int val;
public:
    HasPtr(int *p, int i):ptr(new U_Ptr(p)), val(i){
        cout<<"HasPtr constructor called! use = "<<ptr->use<<endl;
    }
    // copy constructor
    HasPtr(const HasPtr& orig) : ptr(orig.ptr), val(orig.val){
        ++ptr->use;
        cout<<"HasPtr copy constructor called! use = "<<ptr->use<<endl;
    }
    
    // assign
    HasPtr& operator=(const HasPtr&);
    
    // distructor
    ~HasPtr(){
        cout<<"HasPtr distructor called! use = "<<ptr->use<<endl;
        if(--ptr->use == 0){
            delete ptr;
        }
    }
    
    // get data member
    int* get_ptr() const{
        return ptr->ip;
    }
    int get_int() const {
        return val;
    }
    // set data member
    void set_ptr(int *p) const{
        ptr->ip = p;
    }
    void set_int(int i){
        val = i;
    }
    
    int get_ptr_val() const {
        return *ptr->ip;
    }
    void set_ptr_val(int i){
        *ptr->ip = i;
    }
};



#endif /* smartPointer_hpp */
