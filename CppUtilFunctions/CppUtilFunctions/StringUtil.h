//
//  StringUtil.h
//  CppUtilFunctions
//
//  Created by shaoxiong on 8/28/16.
//  Copyright © 2016 shaoxiong. All rights reserved.
//

#ifndef StringUtil_h
#define StringUtil_h

#include <string>
#include <vector>

using namespace std;

vector<string> splitByDelim(string inputStr, string delim);

int stringToInt(string inputStr, int base);

string stringJoinByDelim(vector<string> stringVec, string delim);

void reverseString(string &str);

#endif /* StringUtil_h */
