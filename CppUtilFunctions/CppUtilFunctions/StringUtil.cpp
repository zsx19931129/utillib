//
//  StringUtil.cpp
//  CppUtilFunctions
//
//  Created by shaoxiong on 8/28/16.
//  Copyright © 2016 shaoxiong. All rights reserved.
//

#include <stdio.h>
#include "StringUtil.h"

vector<string> splitByDelim(string inputStr, string delim){
    vector<string> ret;
    size_t pos = 0;
    string token;
    while((pos = inputStr.find(delim)) != string::npos){
        token = inputStr.substr(0, pos);
        ret.push_back(token);
        inputStr.erase(0, pos + delim.length());
    }
    ret.push_back(inputStr);
    return ret;
}

int stringToInt(string inputStr, int base=10){
    return stoi(inputStr, nullptr, base);
}