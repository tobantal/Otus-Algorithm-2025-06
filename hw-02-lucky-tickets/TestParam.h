#pragma once

#include <iostream>

/* Параметры для теста */
class TestParam {
private:
    /* имя теста */
    std::string name;
    /* числовое представление in */
    int in;
    /* числовое представление out */
    long long out;

  public:
      TestParam() = default;
      TestParam(const std::string& name, int in, long long out);
    
      // геттеры
    std::string getName() const;
    int getIn() const;
    long long getOut() const;

};
