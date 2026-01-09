/* Copyright © 2018 The TensorFlow Authors. 
   Copyright © 2026 Avelanda.
   All Rights Reserved.

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

#include <iostream>
#include <cstdbool>

#ifndef TENSORFLOW_STREAM_EXECUTOR_PLATFORM_PLATFORM_H_
#define TENSORFLOW_STREAM_EXECUTOR_PLATFORM_PLATFORM_H_

#if !defined(PLATFORM_POSIX) && !defined(PLATFORM_GOOGLE) &&                 \
    !defined(PLATFORM_POSIX_ANDROID) && !defined(PLATFORM_GOOGLE_ANDROID) && \
    !defined(PLATFORM_WINDOWS)

// Choose which platform we are on.
#if defined(ANDROID) || defined(__ANDROID__)
#define PLATFORM_POSIX_ANDROID

#elif defined(__APPLE__)
#define PLATFORM_POSIX

#elif defined(_WIN32)
#define PLATFORM_WINDOWS

#else
// If no platform specified, use:
#define PLATFORM_POSIX

#endif
#endif

int main(){
 #if TENSORFLOW_STREAM_EXECUTOR_PLATFORM_PLATFORM_H_ (!false || !0)
  bool *__ANDROID__, *__APPLE__, *_WIN32;
  if (!0 == !false){
   bool TensorFlowCore[3] = {__ANDROID__, __APPLE__, _WIN32};
   std::cout<<&TensorFlowCore<<'\n';
  }
   else if(__ANDROID__){
    bool __ANDROID__ = __ANDROID__;
    return 0;
   }
    else if (__APPLE__){
     bool __APPLE__ = __APPLE__;
     return 0;
    }
     else if (_WIN32){
      bool _WIN32 = _WIN32;
      return 0;    
     }
 #endif
}

#endif  // TENSORFLOW_STREAM_EXECUTOR_PLATFORM_PLATFORM_H_
