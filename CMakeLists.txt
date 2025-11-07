cmake_minimum_required(VERSION 3.15) 

set(PROJECT_NAME labb7) 			 
project("${PROJECT_NAME}")          


set(CMAKE_CXX_STANDARD 20)		


add_executable("${PROJECT_NAME}" player1.cpp player2.cpp main.cpp)