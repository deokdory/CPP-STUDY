#pragma once

void MyString();

class String {
  char *str; // ���ڿ�
  int length; // ���ڿ� ����

 public:
  String(char c, unsigned int n);  // ���� c �� n �� �ִ� ���ڿ��� ����
  String(const char *s);
  String(const String &s);
  ~String();

  void add_string(const String &s);   // str �ڿ� s �� ���δ�.
  void copy_string(const String &s);  // str �� s �� �����Ѵ�.
  const void print_string();
  const int strlen();  // ���ڿ� ���� ����
};