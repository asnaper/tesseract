// (C) Copyright 2017, Google Inc.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// Portability include to match the Google test environment.

#ifndef TESSERACT_UNITTEST_INCLUDE_GUNIT_H_
#define TESSERACT_UNITTEST_INCLUDE_GUNIT_H_

#include "errcode.h"  // for ASSERT_HOST
#include "fileio.h"   // for tesseract::File
#include "gtest/gtest.h"

const char* FLAGS_test_tmpdir = ".";

class file : public tesseract::File {};

#define ABSL_ARRAYSIZE(arr) (sizeof(arr) / sizeof(arr[0]))
#define ARRAYSIZE(arr) (sizeof(arr) / sizeof(arr[0]))
#define CHECK(test) ASSERT_HOST(test)

#endif  // TESSERACT_UNITTEST_INCLUDE_GUNIT_H_
