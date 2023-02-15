#pragma once

void MyString();

class String {
  char *str; // 문자열
  int length; // 문자열 길이

 public:
  String(char c, unsigned int n);  // 문자 c 가 n 개 있는 문자열로 정의
  String(const char *s);
  String(const String &s);
  ~String();

  void add_string(const String &s);   // str 뒤에 s 를 붙인다.
  void copy_string(const String &s);  // str 에 s 를 복사한다.
  const void print_string();
  const int strlen();  // 문자열 길이 리턴
};