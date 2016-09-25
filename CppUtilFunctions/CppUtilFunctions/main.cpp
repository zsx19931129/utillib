//
//  main.cpp
//  CppUtilFunctions
//
//  Created by shaoxiong on 8/27/16.
//  Copyright © 2016 shaoxiong. All rights reserved.
//

#include <iostream>
#include "StringUtil.h"
#include "StackUtil.h"
#include "smartPointer.hpp"

void testSplitByDelim(){
    string inputStr = "3-4-4";
    string delim = "-";
    vector<string> splited = splitByDelim(inputStr, delim);
    for(int i=0;i<splited.size();++i){
        cout<<splited[i]<<endl;
    }
}

void teststringJoinByDelim(){
    vector<string> stringVec;
    stringVec.push_back("hello");
    stringVec.push_back("world");
    string res = stringJoinByDelim(stringVec, " ");
    cout<<res<<endl;
}

void testReverseString(){
    string str = "abdc";
    reverseString(str);
    cout<<str<<endl;
}

void testTrimString(){
    string str = "   assdf   ";
//    string str = "     ";
//    string str = "";
    str = trimString(str, ' ');
    cout<<str.length()<<endl;
    cout<<str<<endl;
}

void testStackToVector(){
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    vector<int> ret = stackToVector<int>(stk);
    for(int i=0;i<ret.size();++i){
        cout<<ret[i]<<" ";
    }
    cout<<endl;
}

void testStringRegexReplace(){
    string str = "/home//foo/";
    regex e("/+");
    string dest = "/";
    string ret = stringRegexReplace(str, e, dest);
    cout<<ret<<endl;
}

void testSmartPointer(){
    int *pi = new int(42);
    HasPtr *hpa = new HasPtr(pi, 100);
    HasPtr *hpb = new HasPtr(*hpa);
    HasPtr *hpc = new HasPtr(*hpb);
    HasPtr hpd = *hpa;
    
    cout<<hpa->get_ptr_val()<<" "<<hpb->get_ptr_val()<<endl;
    hpc->set_ptr_val(10000);
    cout<<hpa->get_ptr_val()<<" "<<hpb->get_ptr_val()<<endl;
    hpc->set_ptr_val(10);
    cout<<hpa->get_ptr_val()<<" "<<hpb->get_ptr_val()<<endl;
    delete hpa;
    delete hpb;
    delete hpc;
    cout<<hpd.get_ptr_val()<<endl;
}

int main(int argc, const char * argv[]) {
    testSmartPointer();
    return 0;
}
