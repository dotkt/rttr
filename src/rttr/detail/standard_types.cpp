/************************************************************************************
*                                                                                   *
*   Copyright (c) 2014 Axel Menzel <info@axelmenzel.de>                             *
*                                                                                   *
*   This file is part of RTTR (Run Time Type Reflection)                            *
*   License: MIT License                                                            *
*                                                                                   *
*   Permission is hereby granted, free of charge, to any person obtaining           *
*   a copy of this software and associated documentation files (the "Software"),    *
*   to deal in the Software without restriction, including without limitation       *
*   the rights to use, copy, modify, merge, publish, distribute, sublicense,        *
*   and/or sell copies of the Software, and to permit persons to whom the           *
*   Software is furnished to do so, subject to the following conditions:            *
*                                                                                   *
*   The above copyright notice and this permission notice shall be included in      *
*   all copies or substantial portions of the Software.                             *
*                                                                                   *
*   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR      *
*   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,        *
*   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE     *
*   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER          *
*   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,   *
*   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE   *
*   SOFTWARE.                                                                       *
*                                                                                   *
*************************************************************************************/

#include "rttr/detail/standard_types.h"
#include "rttr/reflect"

RTTR_DEFINE_TYPE(void)
RTTR_DEFINE_TYPE(bool)
RTTR_DEFINE_TYPE(signed char)
RTTR_DEFINE_TYPE(unsigned char)
RTTR_DEFINE_TYPE(char)
RTTR_DEFINE_TYPE(wchar_t)
RTTR_DEFINE_TYPE(short int)
RTTR_DEFINE_TYPE(unsigned short int)
RTTR_DEFINE_TYPE(int)
RTTR_DEFINE_TYPE(unsigned int)
RTTR_DEFINE_TYPE(long int)
RTTR_DEFINE_TYPE(unsigned long int)
RTTR_DEFINE_TYPE(long long int)
RTTR_DEFINE_TYPE(unsigned long long int)
RTTR_DEFINE_TYPE(float)
RTTR_DEFINE_TYPE(double)
RTTR_DEFINE_TYPE(long double)
RTTR_DEFINE_TYPE(std::string)
RTTR_DEFINE_TYPE(std::vector<int>)
RTTR_DEFINE_TYPE(std::vector<float>)
RTTR_DEFINE_TYPE(std::vector<double>)


RTTR_REGISTER
{
    using namespace rttr;

    class_<std::string>()
        .constructor<>()
        .constructor<const std::string&>()
        .constructor<const std::string&, unsigned int, unsigned int>()
        .constructor<const char*>()
        .constructor<const char*, unsigned int>()
        .constructor<unsigned int, char>()
        .method("length",       &std::string::length)
        .method("size",         &std::string::size)
        .method("empty",        &std::string::empty)
        .method("at",           static_cast<const char&(std::string::*)(size_t) const>(&std::string::at))
        .method("data",         &std::string::data)
        .method("c_str",        &std::string::c_str)
        .method("operator[]",   static_cast<char&(std::string::*)(size_t)>(&std::string::operator[]))
   ;
}
