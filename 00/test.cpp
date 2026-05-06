#include <iostream>
using namespace std;

int main() {
    int x = 1;
    int y = 3;

    int z = x + y;

    std::cout << z << endl;
    std::cout << __cplusplus;

    return 0;
}

/*
실행 방법
1. 디버그 모드로 실행
- 왼쪽 빨간 점: 중단점
- F10 누르면 한줄씩 실행
2. 그냥 실행

컴파일러
1. C: gcc.exe
2. C++: g++.exe
*/

/*
.vscode 폴더에 tasks.json이 생성됨

            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],

g++ 컴파일러에서 C++ 버전을 선택하고 싶으면 아래 인자를 추가하고 저장
-std=c++17

버전 출력하는 방법: __cplusplus
*/

/* tasks.json 수동으로 만들기
기본 프리셋: 상단 터미널 > 작업 구성 > g++ 컴파일러 선택
*/

/* 에디터 설정 (Intellisens 및 헤더파일 위치)
여러 컴파일러(gcc, msvc)가 깔려있을 경우 어떤 컴파일러의 헤더파일을 사용하고 있는지 설정해줘야 함

1.
헤더파일 확인 방법: 함수 우클릭 후 F12
상단에 Copyright (c) Microsoft Corporation.: msvc 헤더파일이 열렸다는 의미

2.
ctrl + shift + p: 모든 설정 검색
C/C++ Select a Configuration 찾기
윈도우일 경우 Win32, 다른 운영체제는 다른거 나옴
구성 편집 (UI) 선택

3.
Compiler Path (컴파일러 경로) -> C:/mingw64/bin/g++.exe 로 변경
Intellisence mode -> windows-gcc-x64

4.
상단에 아래 내용이면 gcc 컴파일러의 iostream 헤더 파일이 열린 것

// Copyright (C) 1997-2025 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free

...(중략)...

#ifndef _GLIBCXX_IOSTREAM
#define _GLIBCXX_IOSTREAM 1

#ifdef _GLIBCXX_SYSHDR
#pragma GCC system_header
#endif

#include <bits/requires_hosted.h> // iostreams

#include <bits/c++config.h>
#include <ostream>
#include <istream>
*/