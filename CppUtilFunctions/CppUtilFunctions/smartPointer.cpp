//
//  smartPointer.cpp
//  CppUtilFunctions
//
//  Created by shaoxiong on 9/25/16.
//  Copyright © 2016 shaoxiong. All rights reserved.
//

#include "smartPointer.hpp"

// avoid assign self
HasPtr& HasPtr::operator=(const HasPtr &rhs){
    ++rhs.ptr->use;
    if(--ptr->use == 0){
        delete ptr;
    }
    ptr = rhs.ptr;
    val = rhs.val;
    return *this;
}