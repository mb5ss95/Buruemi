# CMake generated Testfile for 
# Source directory: /home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_lifecycle_manager
# Build directory: /home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/copyright.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/ament_copyright/copyright.txt" "--command" "/opt/ros/dashing/bin/ament_copyright" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_lifecycle_manager")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/cppcheck.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/dashing/bin/ament_cppcheck" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/cppcheck.xunit.xml" "--include_dirs" "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_lifecycle_manager/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_lifecycle_manager")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/cpplint.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/ament_cpplint/cpplint.txt" "--command" "/opt/ros/dashing/bin/ament_cpplint" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_lifecycle_manager")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/lint_cmake.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_lifecycle_manager")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/uncrustify.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/dashing/bin/ament_uncrustify" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_lifecycle_manager")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/xmllint.xunit.xml" "--package-name" "nav2_lifecycle_manager" "--output-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/iju/S08P31C208/ROS/robot_ws/build/nav2_lifecycle_manager/test_results/nav2_lifecycle_manager/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/iju/S08P31C208/ROS/robot_ws/src/navigation2/nav2_lifecycle_manager")
