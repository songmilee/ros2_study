# CMake generated Testfile for 
# Source directory: /home/lsm/Project/ros2_study/3.services/client
# Build directory: /home/lsm/Project/ros2_study/3.services/client/build/client
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/crystal/share/ament_cmake_test/cmake/run_test.py" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/copyright.xunit.xml" "--package-name" "client" "--output-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/ament_copyright/copyright.txt" "--command" "/opt/ros/crystal/bin/ament_copyright" "--xunit-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/lsm/Project/ros2_study/3.services/client")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/crystal/share/ament_cmake_test/cmake/run_test.py" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/cppcheck.xunit.xml" "--package-name" "client" "--output-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/crystal/bin/ament_cppcheck" "--xunit-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/cppcheck.xunit.xml")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/lsm/Project/ros2_study/3.services/client")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/crystal/share/ament_cmake_test/cmake/run_test.py" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/cpplint.xunit.xml" "--package-name" "client" "--output-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/ament_cpplint/cpplint.txt" "--command" "/opt/ros/crystal/bin/ament_cpplint" "--xunit-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/lsm/Project/ros2_study/3.services/client")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/crystal/share/ament_cmake_test/cmake/run_test.py" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/flake8.xunit.xml" "--package-name" "client" "--output-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/ament_flake8/flake8.txt" "--command" "/opt/ros/crystal/bin/ament_flake8" "--xunit-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/lsm/Project/ros2_study/3.services/client")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/crystal/share/ament_cmake_test/cmake/run_test.py" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/lint_cmake.xunit.xml" "--package-name" "client" "--output-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/crystal/bin/ament_lint_cmake" "--xunit-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/lsm/Project/ros2_study/3.services/client")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/crystal/share/ament_cmake_test/cmake/run_test.py" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/pep257.xunit.xml" "--package-name" "client" "--output-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/ament_pep257/pep257.txt" "--command" "/opt/ros/crystal/bin/ament_pep257" "--xunit-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/lsm/Project/ros2_study/3.services/client")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/crystal/share/ament_cmake_test/cmake/run_test.py" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/uncrustify.xunit.xml" "--package-name" "client" "--output-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/crystal/bin/ament_uncrustify" "--xunit-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/lsm/Project/ros2_study/3.services/client")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/crystal/share/ament_cmake_test/cmake/run_test.py" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/xmllint.xunit.xml" "--package-name" "client" "--output-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/ament_xmllint/xmllint.txt" "--command" "/opt/ros/crystal/bin/ament_xmllint" "--xunit-file" "/home/lsm/Project/ros2_study/3.services/client/build/client/test_results/client/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/lsm/Project/ros2_study/3.services/client")
