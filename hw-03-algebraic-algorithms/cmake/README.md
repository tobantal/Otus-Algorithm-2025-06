# �������� ���������� AutoGenerateTest.cmake

auto_generate_tests(
DATA_DIR path/to/data <���� �� ����� � ����������� ������: in, out-�������>
CLASS_NAME MyClass <��� ������, ������� �����������>
METHOD_NAME myMethod <��� ������, ������� �����������>
OUTPUT_FILE path/to/output_test.cpp <���� �� ���������������� ����� � �������>
STRONG_ASSERT 1 (�������� ��������� 1 - ������� ���������, 0 - ��������� � ��������� EPS)
)