/*
SyneRBI Synergistic Image Reconstruction Framework (SIRF)
Copyright 2015 - 2017 Rutherford Appleton Laboratory STFC

This is software developed for the Collaborative Computational
Project in Synergistic Reconstruction for Biomedical Imaging (formerly CCP PETMR)
(http://www.ccpsynerbi.ac.uk/).

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*/

#ifndef GET_ENVIRONMENT_VARIABLES
#define GET_ENVIRONMENT_VARIABLES

#include <string>
using std::string;

#ifdef _MSC_VER
#if _MSC_VER >= 1900
using namespace System;
static string toStandardString(System::String^ var);
string EnvironmentVariable(const char* name);
#else
string EnvironmentVariable(const char* name);
#endif
#else
string EnvironmentVariable(const char* name);
#endif

#endif
