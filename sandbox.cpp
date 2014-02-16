
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cassert>
#include <iomanip>
#include <cstdio>
#include <utility>
#include <algorithm>
#include <ios>
#include <limits>

#include <stdint.h>

#include <vector>
#include <string>
#include <cstring>
#include <list>
#include <map>
#include <set>
//#include <unordered_map>

using namespace std;

void print_vector_of_ints(string message, vector<int> vector_of_ints);
void print_vector_of_chars(string message, vector<char> vector_of_chars);
void print_vector_of_strings(string message, vector<string> vector_of_strings);
void print_vector_of_floats(string message, vector<float> vector_of_floats);
void print_vector_of_doubles(string message, vector<double> vector_of_doubles);

void print_list_of_ints(string message, list<int> list_of_ints);
void print_list_of_chars(string message, list<char> list_of_chars);
void print_list_of_strings(string message, list<string> list_of_strings);
void print_list_of_floats(string message, list<float> list_of_floats);
void print_list_of_doubles(string message, list<double> list_of_doubles);

void print_set_of_ints(string message, set<int> set_of_ints);
void print_set_of_chars(string message, set<char> set_of_chars);
void print_set_of_strings(string message, set<string> set_of_strings);
void print_set_of_floats(string message, set<float> set_of_floats);
void print_set_of_doubles(string message, set<double> set_of_doubles);

int main(int argc, char* argv[]){

	vector<int> vector_of_ints;
	vector<char> vector_of_chars;
	vector<string> vector_of_strings;
	vector<float> vector_of_floats;
	vector<double> vector_of_doubles;

	list<int> list_of_ints;
	list<char> list_of_chars;
	list<string> list_of_strings;
	list<float> list_of_floats;
	list<double> list_of_doubles;

	set<int> set_of_ints;
	set<char> set_of_chars;
	set<string> set_of_strings;
	set<float> set_of_floats;
	set<double> set_of_doubles;
	

	
	vector_of_ints = {1, 2, 3};
	print_vector_of_ints("vertor of ints initialized by {}", vector_of_ints);
		
	vector_of_strings = {"cat", "meow", "kitty"};
	print_vector_of_strings("vertor of ints initialized by {}", vector_of_strings);

	vector_of_doubles = {1.0, 2.0, 3.0};
	print_vector_of_doubles("vertor of ints initialized by {}", vector_of_doubles);

	vector_of_floats = {12.0, 22.0, 32.0};
	print_vector_of_floats("vertor of ints initialized by {}", vector_of_floats);

	list_of_ints.push_back(2);
	list_of_ints.push_back(3);
	list_of_ints.push_back(4);
	list_of_ints.push_back(5);
	print_list_of_ints("testing function", list_of_ints);

	list_of_chars.push_back('a');
	list_of_chars.push_back('b');
	list_of_chars.push_back('c');
	list_of_chars.push_back('d');
	print_list_of_chars("testing function", list_of_chars);

	list_of_strings.push_back("hi");
	list_of_strings.push_back("there");
	list_of_strings.push_back("cout");
	list_of_strings.push_back("statement");
	print_list_of_strings("testing function", list_of_strings);

	list_of_floats.push_back(1.0);
	list_of_floats.push_back(2.0);
	list_of_floats.push_back(3.0);
	list_of_floats.push_back(4.0);
	print_list_of_floats("testing function", list_of_floats);

	list_of_doubles.push_back(11.0);
	list_of_doubles.push_back(21.0);
	list_of_doubles.push_back(31.0);
	list_of_doubles.push_back(41.0);
	print_list_of_doubles("testing function", list_of_doubles);

	//print_vector_of_ints("vector initialized given number and filler", vector_of_ints);
	

	return 0;
}

//=================================VECTORS===============================================

void print_vector_of_ints(string message, vector<int> vector_of_ints){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	for(unsigned int v = 0; v < vector_of_ints.size() -1; v++){
		cout << vector_of_ints[v] << ", ";
	}
	cout << vector_of_ints[vector_of_ints.size()-1] << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

void print_vector_of_chars(string message, vector<char> vector_of_chars){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	for(unsigned int v = 0; v < vector_of_chars.size() -1; v++){
		cout << vector_of_chars[v] << ", ";
	}
	cout << vector_of_chars[vector_of_chars.size()-1] << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}	

void print_vector_of_strings(string message, vector<string> vector_of_strings){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	for(unsigned int v = 0; v < vector_of_strings.size() -1; v++){
		cout << vector_of_strings[v] << ", ";
	}
	cout << vector_of_strings[vector_of_strings.size()-1] << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

void print_vector_of_floats(string message, vector<float> vector_of_floats){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	for(unsigned int v = 0; v < vector_of_floats.size() -1; v++){
		cout << vector_of_floats[v] << ", ";
	}
	cout << vector_of_floats[vector_of_floats.size()-1] << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

void print_vector_of_doubles(string message, vector<double> vector_of_doubles){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	for(unsigned int v = 0; v < vector_of_doubles.size() -1; v++){
		cout << vector_of_doubles[v] << ", ";
	}
	cout << vector_of_doubles[vector_of_doubles.size()-1] << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

//=================================LISTS================================================

void print_list_of_ints(string message, list<int> list_of_ints){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	list<int>::iterator last_item_itr = list_of_ints.end();
	last_item_itr--;
	for(list<int>::iterator l = list_of_ints.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

void print_list_of_chars(string message, list<char> list_of_chars){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	list<char>::iterator last_item_itr = list_of_chars.end();
	last_item_itr--;
	for(list<char>::iterator l = list_of_chars.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

void print_list_of_strings(string message, list<string> list_of_strings){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	list<string>::iterator last_item_itr = list_of_strings.end();
	last_item_itr--;
	for(list<string>::iterator l = list_of_strings.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

void print_list_of_floats(string message, list<float> list_of_floats){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	list<float>::iterator last_item_itr = list_of_floats.end();
	last_item_itr--;
	for(list<float>::iterator l = list_of_floats.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

void print_list_of_doubles(string message, list<double> list_of_doubles){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	list<double>::iterator last_item_itr = list_of_doubles.end();
	last_item_itr--;
	for(list<double>::iterator l = list_of_doubles.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

//==================================SETS================================================

void print_set_of_ints(string message, set<int> set_of_ints){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	set<int>::iterator last_item_itr = set_of_ints.end();
	last_item_itr--;
	for(set<int>::iterator l = set_of_ints.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

void print_set_of_chars(string message, set<char> set_of_chars){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	set<char>::iterator last_item_itr = set_of_chars.end();
	last_item_itr--;
	for(set<char>::iterator l = set_of_chars.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}

void print_set_of_strings(string message, set<string> set_of_strings){
	cout << "-----------------------------------------------------------------" << endl;
	cout << message << endl << "[";
	set<string>::iterator last_item_itr = set_of_strings.end();
	last_item_itr--;
	for(set<string>::iterator l = set_of_strings.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "-----------------------------------------------------------------" << endl;
}