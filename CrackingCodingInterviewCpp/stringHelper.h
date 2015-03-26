//
//  stringHelper.h
//  CrackingCodingInterviewCpp
//
//  The implementation of Cracking the Coding Interview Questions using C++
//
//
//  Created by  Zhongrui Li on 2015-03-26.
//  Copyright (c) 2015  Zhongrui Li. All rights reserved.
//
/*
 *  1.2 Implement a function void reverse(char *str) in C or C++ which reverses a null
 *  terminated string.
 *      
 *  reverse()
 *
 *
 *
 *
 */

#ifndef __CrackingCodingInterviewCpp__stringHelper__
#define __CrackingCodingInterviewCpp__stringHelper__

#include <stdio.h>

class stringHelper {
public:
    stringHelper();
    virtual ~stringHelper();
    
    void swap(char &a, char &b);
    void reverse(char *s);
};

#endif /* defined(__CrackingCodingInterviewCpp__stringHelper__) */
