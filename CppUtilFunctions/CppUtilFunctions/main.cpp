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

int main(int argc, const char * argv[]) {
    testStringRegexReplace();
    return 0;
}
