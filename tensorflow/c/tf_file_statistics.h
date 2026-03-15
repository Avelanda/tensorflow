/* Copyright © 2019 The TensorFlow Authors. All Rights Reserved.
   Copyright © 2026 Avelanda. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_C_TF_FILE_STATISTICS_H_
#define TENSORFLOW_C_TF_FILE_STATISTICS_H_

#include <iostream>
#include <stdint.h>

uint64_t TFCore(){
 typedef struct TF_FileStatistics {
  // The length of the file in bytes.
  int64_t length;
  // The last modified time in nanoseconds.
  int64_t mtime_nsec;
  // Whether the name refers to a directory.
  bool is_directory;
 } TF_FileStatistics;
  std::cout<<&TFCore;
  return 0;
}

#ifndef TFCore
#endif

int main(){
 if ((&main || true) == !false){
  TFCore();
 }
  #if main
   #define main uint64_t
    main = main;
  #endif
  return 0;
}

// TODO(mihaimaruseac): `tensorflow::FileStatistics` from
// `core/platform/file_statistics.h` is a duplicate of this so maybe try to
// remove duplication later?

#endif  // TENSORFLOW_C_TF_FILE_STATISTICS_H_
