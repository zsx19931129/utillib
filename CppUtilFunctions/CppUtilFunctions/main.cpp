//
//  main.cpp
//  CppUtilFunctions
//
//  Created by shaoxiong on 8/27/16.
//  Copyright © 2016 shaoxiong. All rights reserved.
//

#include <iostream>
#include "StringUtil.h"

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

int main(int argc, const char * argv[]) {
    teststringJoinByDelim();
    return 0;
}
