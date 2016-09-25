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

string stringJoinByDelim(vector<string> stringVec, string delim){
    size_t vlen = stringVec.size();
    if(vlen == 0){
        return "";
    }
    string ret = stringVec[0];
    for(size_t i=1;i<vlen;++i){
        ret += (delim + stringVec[i]);
    }
    return ret;
}

void reverseString(string &str){
    size_t slen = str.length();
    for(size_t i=0, j=slen-1;i<j;++i, --j){
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
}

string trimString(string str, char ch){
    string ret;
    size_t slen = str.length();
    int i=0;
    for(;i<slen && str[i] == ch;++i);
    if(i == slen){
        return "";
    }
    int j=slen-1;
    for(;j>=0 && str[j] == ch;--j);
    return str.substr(i, j-i+1);
}

string stringRegexReplace(string str, regex ori, string dest){
    return regex_replace(str, ori, dest);
}