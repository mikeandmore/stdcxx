// checking for specialization on return type

/***************************************************************************
 *
 * Licensed to the Apache Software  Foundation (ASF) under one or more
 * contributor  license agreements.  See  the NOTICE  file distributed
 * with  this  work  for  additional information  regarding  copyright
 * ownership.   The ASF  licenses this  file to  you under  the Apache
 * License, Version  2.0 (the  License); you may  not use  this file
 * except in  compliance with the License.   You may obtain  a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the  License is distributed on an  "AS IS" BASIS,
 * WITHOUT  WARRANTIES OR CONDITIONS  OF ANY  KIND, either  express or
 * implied.   See  the License  for  the  specific language  governing
 * permissions and limitations under the License.
 *
 * Copyright 1999-2007 Rogue Wave Software, Inc.
 * 
 **************************************************************************/


template <class T>
T foo () { return T (); }

template <>
int foo<int>() { return 1; }

template <>
long foo<long>() { return 2; }

int main ()
{
    int result = 0;

    if (0 != foo<char>())
        result = result << 1 + 1;

    if (1 != foo<int>())
        result = result << 1 + 1;

    if (2 != foo<long>())
        result = result << 1 + 1;

    return result;
}
