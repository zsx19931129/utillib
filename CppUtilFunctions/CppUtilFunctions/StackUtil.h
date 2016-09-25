//
//  StackUtil.hpp
//  CppUtilFunctions
//
//  Created by shaoxiong on 9/14/16.
//  Copyright © 2016 shaoxiong. All rights reserved.
//

#ifndef StackUtil_hpp
#define StackUtil_hpp

#include <stdio.h>
#include <vector>
#include <stack>
using namespace std;

template <typename T>
vector<T> stackToVector(stack<T> stk){
    vector<T> ret;
    while(!stk.empty()){
        ret.push_back(stk.top());
        stk.pop();
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

#endif /* StackUtil_hpp */
