
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

//using namespace std;

#define TEST_CASE_SEPARATOR "======================================================================================="

//One Dimension

void print_vector_of_ints(const std::string& message, const std::vector<int>& vector_of_ints);
void print_vector_of_unsigned_ints(const std::string& message, const std::vector<unsigned int>& vector_of_unsigned_ints);
void print_vector_of_chars(const std::string& message, const std::vector<char>& vector_of_chars);
void print_vector_of_strings(const std::string& message, const std::vector<std::string>& vector_of_strings);
void print_vector_of_floats(const std::string& message, const std::vector<float>& vector_of_floats);
void print_vector_of_doubles(const std::string& message, const std::vector<double>& vector_of_doubles);

void print_list_of_ints(const std::string& message, const std::list<int>& list_of_ints);
void print_list_of_unsigned_ints(const std::string& message, const std::list<unsigned int>& list_of_unsigned_ints);
void print_list_of_chars(const std::string& message, const std::list<char>& list_of_chars);
void print_list_of_strings(const std::string& message, const std::list<std::string>& list_of_strings);
void print_list_of_floats(const std::string& message, const std::list<float>& list_of_floats);
void print_list_of_doubles(const std::string& message, const std::list<double>& list_of_doubles);

void print_set_of_ints(const std::string& message, const std::set<int>& set_of_ints);
void print_set_of_unsigned_ints(const std::string& message, const std::set<unsigned int>& set_of_unsigned_ints);
void print_set_of_chars(const std::string& message, const std::set<char>& set_of_chars);
void print_set_of_strings(const std::string& message, const std::set<std::string> &set_of_strings);
void print_set_of_floats(const std::string& message, const std::set<float>& set_of_floats);
void print_set_of_doubles(const std::string& message, const std::set<double>& set_of_doubles);

void print_map_of_ints_and_ints(const std::string& message, const std::map<int, int>& map_of_ints_and_ints);
void print_map_of_strings_and_ints(const std::string& message, const std::map<std::string, int>& map_of_strings_and_ints);
void print_map_of_strings_and_strings(const std::string& message, const std::map<std::string, std::string>& map_of_strings_and_strings);

//Two Dimensions
void print_vector_of_vectors_of_ints(const std::string& message, const std::vector<std::vector<int> >& vector_of_vectors_of_ints);
void print_vector_of_vectors_of_unsigned_ints(const std::string& message, const std::vector<std::vector<unsigned int> >& vector_of_vectors_of_unsigned_ints);
void print_vector_of_vectors_of_strings(const std::string& message, const std::vector<std::vector<std::string> >& vector_of_vectors_of_strings);


int main(int argc, char* argv[]){

	std::vector<int> vector_of_ints;
	std::vector<char> vector_of_chars;
	std::vector<std::string> vector_of_strings;
	std::vector<float> vector_of_floats;
	std::vector<double> vector_of_doubles;

	std::list<int> list_of_ints;
	std::list<char> list_of_chars;
	std::list<std::string> list_of_strings;
	std::list<float> list_of_floats;
	std::list<double> list_of_doubles;

	std::set<int> set_of_ints;
	std::set<char> set_of_chars;
	std::set<std::string> set_of_strings;
	std::set<float> set_of_floats;
	std::set<double> set_of_doubles;
	

	
	vector_of_ints = {1, 2, 3};
	print_vector_of_ints("vector of ints initialized by {}", vector_of_ints);
		
	vector_of_strings = {"cat", "meow", "kitty"};
	print_vector_of_strings("vector of ints initialized by {}", vector_of_strings);

	vector_of_doubles = {1.0, 2.0, 3.0};
	print_vector_of_doubles("vector of ints initialized by {}", vector_of_doubles);

	vector_of_floats = {12.0, 22.0, 32.0};
	print_vector_of_floats("vector of ints initialized by {}", vector_of_floats);

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

	std::vector<std::vector<std::string> > vector_of_vectors_of_strings;
	std::vector<std::string> vec1 = {"cat", "dog", "puppy", "buscuit"};
	std::vector<std::string> vec2 = {"one", "two", "three", "four", "five", "six"};
	std::vector<std::string> vec3 = {"oh", "hai", "thar"};
	std::vector<std::string> vec4 = {"do", "you", "want", "to", "build", "a", "snowman?"};
	vector_of_vectors_of_strings.push_back(vec1);
	vector_of_vectors_of_strings.push_back(vec2);
	vector_of_vectors_of_strings.push_back(vec3);
	vector_of_vectors_of_strings.push_back(vec4);

	print_vector_of_vectors_of_strings("testing vector of vector of strings", vector_of_vectors_of_strings);

	std::vector<std::vector<int> > vector_of_vectors_of_ints;
	std::vector<int> vec10 = { 1234, 45, -2334146, 2};
	std::vector<int> vec20 = { 1, 2, 3, 4, 5, 6};
	std::vector<int> vec30 = { 1234567890, 1234, 4};
	std::vector<int> vec40 = { 12, 34, 56, 78, 90, 108, 1856};
	vector_of_vectors_of_ints.push_back(vec10);
	vector_of_vectors_of_ints.push_back(vec20);
	vector_of_vectors_of_ints.push_back(vec30);
	vector_of_vectors_of_ints.push_back(vec40);

	print_vector_of_vectors_of_ints("testing vector of vector of ints", vector_of_vectors_of_ints);

	std::map<int, int> map_of_ints_and_ints;
	map_of_ints_and_ints.insert(std::make_pair(4,5));
	map_of_ints_and_ints.insert(std::make_pair(343,34546564));
	map_of_ints_and_ints.insert(std::make_pair(1,3));
	map_of_ints_and_ints.insert(std::make_pair(343,579));

	print_map_of_ints_and_ints("testing map print for ints and ints", map_of_ints_and_ints);

	std::map<std::string, int> map_of_strings_and_ints;
	map_of_strings_and_ints.insert(std::make_pair("string",5));
	map_of_strings_and_ints.insert(std::make_pair("this is a long string",34546564));
	map_of_strings_and_ints.insert(std::make_pair("moo",3));
	map_of_strings_and_ints.insert(std::make_pair("om nom nom",579));

	print_map_of_strings_and_ints("testing map print for strings and ints", map_of_strings_and_ints);

	std::map<std::string, std::string> map_of_strings_and_strings;
	map_of_strings_and_strings.insert(std::make_pair("string", "this is the second column"));
	map_of_strings_and_strings.insert(std::make_pair("this is a long string", "testing another function"));
	map_of_strings_and_strings.insert(std::make_pair("moo", "meow"));
	map_of_strings_and_strings.insert(std::make_pair("om nom nom", "yup"));

	print_map_of_strings_and_strings("testing map print for strings and strings", map_of_strings_and_strings);

	//print_vector_of_ints("vector initialized given number and filler", vector_of_ints);
	

	return 0;
}

//=================================HELPERS===============================================

//this finds the nuber of digits in an integer ('-' sign counts as one digit) to know how much space it will take up
unsigned int number_of_digits(int number){
	int digits = 0;
	if(number < 0) digits++; // for the '-' sign
	while(number != 0){
		number /= 10;
		digits++;
	}
	return digits;
}

//=================================VECTORS===============================================

void print_vector_of_ints(const std::string& message, const std::vector<int>& vector_of_ints){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	for(unsigned int v = 0; v < vector_of_ints.size() -1; v++){
		std::cout << vector_of_ints[v] << ", ";
	}
	std::cout << vector_of_ints[vector_of_ints.size()-1] << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_vector_of_unsigned_ints(const std::string& message, const std::vector<unsigned int>& vector_of_unsigned_ints){
	std::vector<int> vector_of_ints;
	for(int v = 0; v < vector_of_unsigned_ints.size(); v++){
		vector_of_ints.push_back((int)vector_of_unsigned_ints[v]);
	}
	print_vector_of_ints(message, vector_of_ints);
}

void print_vector_of_chars(const std::string& message, const std::vector<char>& vector_of_chars){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	for(unsigned int v = 0; v < vector_of_chars.size() -1; v++){
		std::cout << vector_of_chars[v] << ", ";
	}
	std::cout << vector_of_chars[vector_of_chars.size()-1] << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}	

void print_vector_of_strings(const std::string& message, const std::vector<std::string>& vector_of_strings){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	for(unsigned int v = 0; v < vector_of_strings.size() -1; v++){
		std::cout << vector_of_strings[v] << ", ";
	}
	std::cout << vector_of_strings[vector_of_strings.size()-1] << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_vector_of_floats(const std::string& message, const std::vector<float>& vector_of_floats){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	for(unsigned int v = 0; v < vector_of_floats.size() -1; v++){
		std::cout << vector_of_floats[v] << ", ";
	}
	std::cout << vector_of_floats[vector_of_floats.size()-1] << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_vector_of_doubles(const std::string& message, const std::vector<double>& vector_of_doubles){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	for(unsigned int v = 0; v < vector_of_doubles.size() -1; v++){
		std::cout << vector_of_doubles[v] << ", ";
	}
	std::cout << vector_of_doubles[vector_of_doubles.size()-1] << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

//=================================LISTS================================================

void print_list_of_ints(const std::string& message, const std::list<int>& list_of_ints){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	std::list<int>::const_iterator last_item_itr = list_of_ints.end();
	last_item_itr--;
	for(std::list<int>::const_iterator l = list_of_ints.begin(); l != last_item_itr; l++){
		std::cout << *l << ", ";
	}
	std::cout << *last_item_itr << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_list_of_unsigned_ints(const std::string& message, const std::list<unsigned int>& list_of_unsigned_ints){
	std::list<int> list_of_ints;
	for(std::list<unsigned int>::const_iterator l = list_of_unsigned_ints.begin(); l != list_of_unsigned_ints.end(); l++){
		list_of_ints.push_back((int)(*l));
	}
	print_list_of_ints(message, list_of_ints);
}

void print_list_of_chars(const std::string& message, const std::list<char>& list_of_chars){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	std::list<char>::const_iterator last_item_itr = list_of_chars.end();
	last_item_itr--;
	for(std::list<char>::const_iterator l = list_of_chars.begin(); l != last_item_itr; l++){
		std::cout << *l << ", ";
	}
	std::cout << *last_item_itr << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_list_of_strings(const std::string& message, const std::list<std::string>& list_of_strings){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	std::list<std::string>::const_iterator last_item_itr = list_of_strings.end();
	last_item_itr--;
	for(std::list<std::string>::const_iterator l = list_of_strings.begin(); l != last_item_itr; l++){
		std::cout << *l << ", ";
	}
	std::cout << *last_item_itr << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_list_of_floats(const std::string& message, const std::list<float>& list_of_floats){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	std::list<float>::const_iterator last_item_itr = list_of_floats.end();
	last_item_itr--;
	for(std::list<float>::const_iterator l = list_of_floats.begin(); l != last_item_itr; l++){
		std::cout << *l << ", ";
	}
	std::cout << *last_item_itr << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_list_of_doubles(const std::string& message, const std::list<double>& list_of_doubles){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	std::list<double>::const_iterator last_item_itr = list_of_doubles.end();
	last_item_itr--;
	for(std::list<double>::const_iterator l = list_of_doubles.begin(); l != last_item_itr; l++){
		std::cout << *l << ", ";
	}
	std::cout << *last_item_itr << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

//==================================SETS================================================

void print_set_of_ints(const std::string& message, const std::set<int>& set_of_ints){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	std::set<int>::const_iterator last_item_itr = set_of_ints.end();
	last_item_itr--;
	for(std::set<int>::const_iterator l = set_of_ints.begin(); l != last_item_itr; l++){
		std::cout << *l << ", ";
	}
	std::cout << *last_item_itr << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_set_of_unsigned_ints(const std::string& message, const std::set<unsigned int>& set_of_unsigned_ints){
	std::set<int> set_of_ints;
	for(std::set<unsigned int>::const_iterator l = set_of_unsigned_ints.begin(); l != set_of_unsigned_ints.end(); l++){
		set_of_ints.insert((int)(*l));
	}
	print_set_of_ints(message, set_of_ints);
}

void print_set_of_chars(const std::string& message, const std::set<char>& set_of_chars){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	std::set<char>::const_iterator last_item_itr = set_of_chars.end();
	last_item_itr--;
	for(std::set<char>::const_iterator l = set_of_chars.begin(); l != last_item_itr; l++){
		std::cout << *l << ", ";
	}
	std::cout << *last_item_itr << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_set_of_strings(const std::string& message, const std::set<std::string>& set_of_strings){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	std::set<std::string>::const_iterator last_item_itr = set_of_strings.end();
	last_item_itr--;
	for(std::set<std::string>::const_iterator l = set_of_strings.begin(); l != last_item_itr; l++){
		std::cout << *l << ", ";
	}
	std::cout << *last_item_itr << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_set_of_floats(const std::string& message, const std::set<float>& set_of_floats){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	std::set<float>::const_iterator last_item_itr = set_of_floats.end();
	last_item_itr--;
	for(std::set<float>::const_iterator l = set_of_floats.begin(); l != last_item_itr; l++){
		std::cout << *l << ", ";
	}
	std::cout << *last_item_itr << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_set_of_doubles(const std::string& message, const std::set<double>& set_of_doubles){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl << "[";
	std::set<double>::const_iterator last_item_itr = set_of_doubles.end();
	last_item_itr--;
	for(std::set<double>::const_iterator l = set_of_doubles.begin(); l != last_item_itr; l++){
		std::cout << *l << ", ";
	}
	std::cout << *last_item_itr << "]" << std::endl;
	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

//==================================MAPS================================================

void print_map_of_ints_and_ints(const std::string& message, const std::map<int, int>& map_of_ints_and_ints){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl;

	unsigned int left_column_width = 0;
	unsigned int right_column_width = 0;
	unsigned int first_number_of_digits;
	unsigned int second_number_of_digits;

	//TODO: since maps sort, the one with the largest digits is either the first or last (negative or positive largest)
	//loop through and find what the column widths need to be (largest)
	for(std::map<int, int>::const_iterator m = map_of_ints_and_ints.begin(); m != map_of_ints_and_ints.end(); m++){
		first_number_of_digits = number_of_digits(m->first);
		second_number_of_digits = number_of_digits(m->second);
		//TODO: switch to using max
		if(first_number_of_digits > left_column_width){
			left_column_width = first_number_of_digits;
		}
		if(second_number_of_digits > right_column_width){
			right_column_width = second_number_of_digits;
		}
	}
	std::string horizontal_line(left_column_width+right_column_width+7, '-'); //3 for '|', 4 for ' '
	for(std::map<int, int>::const_iterator m = map_of_ints_and_ints.begin(); m != map_of_ints_and_ints.end(); m++){
		std::cout << horizontal_line << std::endl;
		std::cout << "| ";
		std::cout << std::right << std::setw (left_column_width) << std::setfill (' ') << m->first;
		std::cout << " | ";
		std::cout << std::right << std::setw (right_column_width) << std::setfill (' ') << m->second;
		std::cout << " |" << std::endl;
	}
	std::cout << horizontal_line << std::endl;

	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_map_of_strings_and_ints(const std::string& message, const std::map<std::string, int>& map_of_strings_and_ints){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl;

	unsigned int left_column_width = 0;
	unsigned int right_column_width = 0;
	unsigned int first_max_size;
	unsigned int second_number_of_digits;

	//TODO: since maps sort, the one with the largest digits is either the first or last (negative or positive largest)
	//loop through and find what the column widths need to be (largest)
	for(std::map<std::string, int>::const_iterator m = map_of_strings_and_ints.begin(); m != map_of_strings_and_ints.end(); m++){
		first_max_size = (m->first).size();
		second_number_of_digits = number_of_digits(m->second);
		//TODO: switch to using max
		if(first_max_size > left_column_width){
			left_column_width = first_max_size;
		}
		if(second_number_of_digits > right_column_width){
			right_column_width = second_number_of_digits;
		}
	}
	std::string horizontal_line(left_column_width+right_column_width+7, '-'); //3 for '|', 4 for ' '
	for(std::map<std::string, int>::const_iterator m = map_of_strings_and_ints.begin(); m != map_of_strings_and_ints.end(); m++){
		std::cout << horizontal_line << std::endl;
		std::cout << "| ";
		std::cout << std::left << std::setw (left_column_width) << std::setfill (' ') << m->first;
		std::cout << " | ";
		std::cout << std::right << std::setw (right_column_width) << std::setfill (' ') << m->second;
		std::cout << " |" << std::endl;
	}
	std::cout << horizontal_line << std::endl;

	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_map_of_strings_and_strings(const std::string& message, const std::map<std::string, std::string>& map_of_strings_and_strings){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl;

	unsigned int left_column_width = 0;
	unsigned int right_column_width = 0;
	unsigned int first_max_size;
	unsigned int second_max_size;

	//TODO: since maps sort, the one with the largest digits is either the first or last (negative or positive largest)
	//loop through and find what the column widths need to be (largest)
	for(std::map<std::string, std::string>::const_iterator m = map_of_strings_and_strings.begin(); m != map_of_strings_and_strings.end(); m++){
		first_max_size = (m->first).size();
		second_max_size = (m->second).size();
		//TODO: switch to using std::max
		if(first_max_size > left_column_width){
			left_column_width = first_max_size;
		}
		if(second_max_size > right_column_width){
			right_column_width = second_max_size;
		}
	}
	std::string horizontal_line(left_column_width+right_column_width+7, '-'); //3 for '|', 4 for ' '
	for(std::map<std::string, std::string>::const_iterator m = map_of_strings_and_strings.begin(); m != map_of_strings_and_strings.end(); m++){
		std::cout << horizontal_line << std::endl;
		std::cout << "| ";
		std::cout << std::left << std::setw (left_column_width) << std::setfill (' ') << m->first;
		std::cout << " | ";
		std::cout << std::left << std::setw (right_column_width) << std::setfill (' ') << m->second;
		std::cout << " |" << std::endl;
	}
	std::cout << horizontal_line << std::endl;

	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

//=================================VECTORS OF VECTORS===================================

void print_vector_of_vectors_of_ints(const std::string& message, const std::vector<std::vector<int> >& vector_of_vectors_of_ints){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl;

	//find maximum length row (maximum number of colunms)
	unsigned int maximum_length_row = 0;
	for(unsigned int r = 0; r < vector_of_vectors_of_ints.size(); r++){
		if(vector_of_vectors_of_ints[r].size() > maximum_length_row){
			maximum_length_row = vector_of_vectors_of_ints[r].size();
		}
	}

	//find the largest string in each column to use as the column width for that column
	std::vector<unsigned int> maximum_length_per_col(maximum_length_row, 0);
	for(unsigned int r = 0; r < vector_of_vectors_of_ints.size(); r++){
		for(unsigned int c = 0; c < vector_of_vectors_of_ints[r].size(); c++){
			if(number_of_digits(vector_of_vectors_of_ints[r][c]) > maximum_length_per_col[c]){
				maximum_length_per_col[c] = number_of_digits(vector_of_vectors_of_ints[r][c]);
			}
		}
	}

	//determine the length of a table at each column width (for printing the line between)
	std::vector<unsigned int> table_width_at_column(maximum_length_row, 0);
	table_width_at_column[0] = 4 + maximum_length_per_col[0]; //this is the width of "|  |"
	for(unsigned int t = 1; t < table_width_at_column.size(); t++){
		table_width_at_column[t] = table_width_at_column[t-1] + maximum_length_per_col[t] + 3; //3 because ' ' on either side of the word and 1 for '|'
	}
	
	//print things according to column widths (left alligned and 1 extra spaces for padding between colums)
	for(unsigned int r = 0; r < vector_of_vectors_of_ints.size(); r++){
		//print the line between rows
		if(r != 0 && vector_of_vectors_of_ints[r-1].size() > vector_of_vectors_of_ints[r].size() ){
			std::string line(table_width_at_column[vector_of_vectors_of_ints[r-1].size()-1], '-');
			std::cout << line << std::endl;
		}
		else{
			std::string line(table_width_at_column[vector_of_vectors_of_ints[r].size()-1], '-');
			std::cout << line << std::endl;
		}
		
		//print the beginning '|' before the line
		std::cout << "| ";
		//prnt the data
		for(unsigned int c = 0; c < vector_of_vectors_of_ints[r].size() -1; c++){
			std::cout << std::right << std::setw (maximum_length_per_col[c]) << std::setfill (' ') << vector_of_vectors_of_ints[r][c] << " | ";
		}
		//the last one in each row is done differently so there isn't a space after each printed line (more efficient than if statement)
		std::cout << std::right << std::setw (maximum_length_per_col[vector_of_vectors_of_ints[r].size() -1]) << std::setfill (' ') << vector_of_vectors_of_ints[r][vector_of_vectors_of_ints[r].size() -1];
		std::cout << " |" << std::endl;

	}
	std::string line(table_width_at_column[vector_of_vectors_of_ints[vector_of_vectors_of_ints.size()-1].size()-1], '-');
	std::cout << line << std::endl;

	std::cout << TEST_CASE_SEPARATOR << std::endl;
}

void print_vector_of_vectors_of_unsigned_ints(const std::string& message, const std::vector<std::vector<unsigned int> >& vector_of_vectors_of_unsigned_ints){
	std::vector<std::vector<int> > vector_of_vectors_of_ints;
	for(unsigned int r = 0; r < vector_of_vectors_of_unsigned_ints.size(); r++){
		for(unsigned int c = 0; c < vector_of_vectors_of_unsigned_ints[r].size(); c++){
			vector_of_vectors_of_ints[r].push_back((int)vector_of_vectors_of_unsigned_ints[r][c]);
		}
	}
	print_vector_of_vectors_of_ints(message, vector_of_vectors_of_ints);
}

void print_vector_of_vectors_of_strings(const std::string& message, const std::vector<std::vector<std::string> >& vector_of_vectors_of_strings){
	std::cout << TEST_CASE_SEPARATOR << std::endl;
	std::cout << message << std::endl;

	//find maximum length row (maximum number of colunms)
	unsigned int maximum_length_row = 0;
	for(unsigned int r = 0; r < vector_of_vectors_of_strings.size(); r++){
		if(vector_of_vectors_of_strings[r].size() > maximum_length_row){
			maximum_length_row = vector_of_vectors_of_strings[r].size();
		}
	}

	//find the largest string in each column to use as the column width for that column
	std::vector<unsigned int> maximum_length_per_col(maximum_length_row, 0);
	for(unsigned int r = 0; r < vector_of_vectors_of_strings.size(); r++){
		for(unsigned int c = 0; c < vector_of_vectors_of_strings[r].size(); c++){
			if(vector_of_vectors_of_strings[r][c].size() > maximum_length_per_col[c]){
				maximum_length_per_col[c] = vector_of_vectors_of_strings[r][c].size();
			}
		}
	}

	//determine the length of a table at each column width (for printing the line between)
	std::vector<unsigned int> table_width_at_column(maximum_length_row, 0);
	table_width_at_column[0] = 4 + maximum_length_per_col[0]; //this is the width of "|  |"
	for(unsigned int t = 1; t < table_width_at_column.size(); t++){
		table_width_at_column[t] = table_width_at_column[t-1] + maximum_length_per_col[t] + 3; //3 because ' ' on either side of the word and 1 for '|'
	}
	
	//print things according to column widths (left alligned and 1 extra spaces for padding between colums)
	for(unsigned int r = 0; r < vector_of_vectors_of_strings.size(); r++){
		//print the line between rows
		if(r != 0 && vector_of_vectors_of_strings[r-1].size() > vector_of_vectors_of_strings[r].size() ){
			std::string line(table_width_at_column[vector_of_vectors_of_strings[r-1].size()-1], '-');
			std::cout << line << std::endl;
		}
		else{
			std::string line(table_width_at_column[vector_of_vectors_of_strings[r].size()-1], '-');
			std::cout << line << std::endl;
		}
		
		//print the beginning '|' before the line
		std::cout << "| ";
		//prnt the data
		for(unsigned int c = 0; c < vector_of_vectors_of_strings[r].size() -1; c++){
			std::cout << std::left << std::setw (maximum_length_per_col[c]) << std::setfill (' ') << vector_of_vectors_of_strings[r][c] << " | ";
		}
		//the last one in each row is done differently so there isn't a space after each printed line (more efficient than if statement)
		std::cout << std::left << std::setw (maximum_length_per_col[vector_of_vectors_of_strings[r].size() -1]) << std::setfill (' ') << vector_of_vectors_of_strings[r][vector_of_vectors_of_strings[r].size() -1];
		std::cout << " |" << std::endl;

	}
	std::string line(table_width_at_column[vector_of_vectors_of_strings[vector_of_vectors_of_strings.size()-1].size()-1], '-');
	std::cout << line << std::endl;

	std::cout << TEST_CASE_SEPARATOR << std::endl;
}