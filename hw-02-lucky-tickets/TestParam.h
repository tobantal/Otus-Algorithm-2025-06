#pragma once

#include <iostream>

class TestParam {
private:
    std::string name;
    int in;
    long long out;

  public:
      TestParam() = default;
      TestParam(const std::string& name, int in, long long out);
    
    std::string getName() const;
    int getIn() const;
    long long getOut() const;

};
