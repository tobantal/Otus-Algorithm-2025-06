#pragma once

#include <iostream>

/* ��������� ��� ����� */
class TestParam {
private:
    /* ��� ����� */
    std::string name;
    /* �������� ������������� in */
    int in;
    /* �������� ������������� out */
    int64_t out;

  public:
      TestParam() = default;
      TestParam(const std::string& name, int in, int64_t out);
    
      // �������
    std::string getName() const;
    int getIn() const;
    int64_t getOut() const;

};
