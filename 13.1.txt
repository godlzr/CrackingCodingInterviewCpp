//
//  stringHelper.cpp
//  CrackingCodingInterviewCpp
//
//  Created by  Zhongrui Li on 2015-03-26.
//  Copyright (c) 2015  Zhongrui Li. All rights reserved.
//

#include "stringHelper.h"
#include <string>
stringHelper::stringHelper() {
    // TODO Auto-generated constructor stub
    
}

stringHelper::~stringHelper() {
    // TODO Auto-generated destructor stub
}


/*1.2 Implement a function void reverse(char *str)
 * in C or C++ which reverses a null terminated string.
 */
void stringHelper::swap(char &a, char &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}
void stringHelper::reverse(char *s)
{
    int n = strlen(s);
    for(int i=0; i < n/2; ++i)
        swap(s[i], s[n-i-1]);
}
