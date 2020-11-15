//
// Created by Wendy on 30/08/2020.
//

#ifndef MY_PROJECT_NAME_IBANKSERVICES_H
#define MY_PROJECT_NAME_IBANKSERVICES_H

#include <iostream>
using namespace std;

class IBankServices {
public:
    virtual ~IBankServices(){}
    virtual string sendPayment() = 0;
};

#endif //MY_PROJECT_NAME_IBANKSERVICES_H
