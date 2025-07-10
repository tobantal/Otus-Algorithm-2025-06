add_executable (hw-02-lucky-tickets "main.cpp" "FileReader.h" " FileReader.cpp" "LuckyTicketCounter.cpp" "TestAssert.h" "TestParam.cpp" "TestParamLoader.cpp"  "TestAssert.cpp" "TestRunner.h" "TestRunner.cpp"  "Counter.h" "TestResult.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET hw-02-lucky-tickets PROPERTY CXX_STANDARD 17)
endif()
