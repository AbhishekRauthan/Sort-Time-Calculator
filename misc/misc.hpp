/** 
 * Developed by: Abhishek Rauthan
 * Project Description: {this project is to provide user with various miscellaneous functions like swap function or functions like performanceof that they can use however they wish.}
 * File description: {This is "the decleration file" i.e only function prototypes are present in this file} 
*/

#ifndef MISC_HPP
#define MISC_HPP

#include <vector>
#include <fstream>
#include <chrono>

void swap(int &, int &); // this is a simple swaping function
float performanceOf(void (*sortFunction)(std::vector<int> &), std::vector<int> &arr);
// this is a performance function that returns time taken by the function pointer
std::vector<int> returnVector(int);
float WriteFile(int i);
void result(std::string func, float inputSize, float timetaken);

#endif