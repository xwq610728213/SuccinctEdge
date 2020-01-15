//
// Created by weiqin xu on 27/08/2019.
//

#ifndef TRIPLE_STORE_UTIL_HPP
#define TRIPLE_STORE_UTIL_HPP

#include <exception>


struct DictException : public std::exception
{
protected:
    const char *errorMsg;

public:
    DictException (const char* str){
        errorMsg =  str;
    }
    const char * what () const throw ()
    {
        return errorMsg;
    }
};

struct RDFTypeException : public std::exception
{
protected:
    const char *errorMsg;

public:
    RDFTypeException (const char* str){
        errorMsg =  str;
    }
    const char * what () const throw ()
    {
        return errorMsg;
    }
};



#endif //TRIPLE_STORE_UTIL_HPP
