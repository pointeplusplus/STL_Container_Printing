
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

//One Dimension

void print_vector_of_ints(const string& message, const vector<int>& vector_of_ints);
void print_vector_of_chars(const string& message, const vector<char>& vector_of_chars);
void print_vector_of_strings(const string& message, const vector<string>& vector_of_strings);
void print_vector_of_floats(const string& message, const vector<float>& vector_of_floats);
void print_vector_of_doubles(const string& message, const vector<double>& vector_of_doubles);

void print_list_of_ints(const string& message, const list<int>& list_of_ints);
void print_list_of_chars(const string& message, const list<char>& list_of_chars);
void print_list_of_strings(const string& message, const list<string>& list_of_strings);
void print_list_of_floats(const string& message, const list<float>& list_of_floats);
void print_list_of_doubles(const string& message, const list<double>& list_of_doubles);

void print_set_of_ints(const string& message, const set<int>& set_of_ints);
void print_set_of_chars(const string& message, const set<char>& set_of_chars);
void print_set_of_strings(const string& message, const set<string> &set_of_strings);
void print_set_of_floats(const string& message, const set<float>& set_of_floats);
void print_set_of_doubles(const string& message, const set<double>& set_of_doubles);

//Two Dimensions

void print_vector_of_vectors_of_strings(const string& message, const vector<vector<string> >& vector_of_vectors_of_strings);
void print_vector_of_vectors_of_ints(const string& message, const vector<vector<int> >& vector_of_vectors_of_ints);

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

	vector<vector<string> > vector_of_vectors_of_strings;
	vector<string> vec1 = {"cat", "dog", "puppy", "buscuit"};
	vector<string> vec2 = {"one", "two", "three", "four", "five", "six"};
	vector<string> vec3 = {"oh", "hai", "thar"};
	vector<string> vec4 = {"do", "you", "want", "to", "build", "a", "snowman?"};
	vector_of_vectors_of_strings.push_back(vec1);
	vector_of_vectors_of_strings.push_back(vec2);
	vector_of_vectors_of_strings.push_back(vec3);
	vector_of_vectors_of_strings.push_back(vec4);

	print_vector_of_vectors_of_strings("testing vector of vector of strings", vector_of_vectors_of_strings);

	vector<vector<int> > vector_of_vectors_of_ints;
	vector<int> vec10 = { 1234, 45, 2334146, 2};
	vector<int> vec20 = { 1, 2, 3, 4, 5, 6};
	vector<int> vec30 = { 1234567890, 1234, 4};
	vector<int> vec40 = { 12, 34, 56, 78, 90, 108, 1856};
	vector_of_vectors_of_ints.push_back(vec10);
	vector_of_vectors_of_ints.push_back(vec20);
	vector_of_vectors_of_ints.push_back(vec30);
	vector_of_vectors_of_ints.push_back(vec40);

	print_vector_of_vectors_of_ints("testing vector of vector of ints", vector_of_vectors_of_ints);


	//print_vector_of_ints("vector initialized given number and filler", vector_of_ints);
	

	return 0;
}

//=================================VECTORS===============================================

void print_vector_of_ints(const string& message, const vector<int>& vector_of_ints){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	for(unsigned int v = 0; v < vector_of_ints.size() -1; v++){
		cout << vector_of_ints[v] << ", ";
	}
	cout << vector_of_ints[vector_of_ints.size()-1] << "]" << endl;
	cout << "=======================================================================================" << endl;
}

void print_vector_of_chars(const string& message, const vector<char>& vector_of_chars){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	for(unsigned int v = 0; v < vector_of_chars.size() -1; v++){
		cout << vector_of_chars[v] << ", ";
	}
	cout << vector_of_chars[vector_of_chars.size()-1] << "]" << endl;
	cout << "=======================================================================================" << endl;
}	

void print_vector_of_strings(const string& message, const vector<string>& vector_of_strings){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	for(unsigned int v = 0; v < vector_of_strings.size() -1; v++){
		cout << vector_of_strings[v] << ", ";
	}
	cout << vector_of_strings[vector_of_strings.size()-1] << "]" << endl;
	cout << "=======================================================================================" << endl;
}

void print_vector_of_floats(const string& message, const vector<float>& vector_of_floats){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	for(unsigned int v = 0; v < vector_of_floats.size() -1; v++){
		cout << vector_of_floats[v] << ", ";
	}
	cout << vector_of_floats[vector_of_floats.size()-1] << "]" << endl;
	cout << "=======================================================================================" << endl;
}

void print_vector_of_doubles(const string& message, const vector<double>& vector_of_doubles){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	for(unsigned int v = 0; v < vector_of_doubles.size() -1; v++){
		cout << vector_of_doubles[v] << ", ";
	}
	cout << vector_of_doubles[vector_of_doubles.size()-1] << "]" << endl;
	cout << "=======================================================================================" << endl;
}

//=================================LISTS================================================

void print_list_of_ints(const string& message, const list<int>& list_of_ints){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	list<int>::const_iterator last_item_itr = list_of_ints.end();
	last_item_itr--;
	for(list<int>::const_iterator l = list_of_ints.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "=======================================================================================" << endl;
}

void print_list_of_chars(const string& message, const list<char>& list_of_chars){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	list<char>::const_iterator last_item_itr = list_of_chars.end();
	last_item_itr--;
	for(list<char>::const_iterator l = list_of_chars.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "=======================================================================================" << endl;
}

void print_list_of_strings(const string& message, const list<string>& list_of_strings){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	list<string>::const_iterator last_item_itr = list_of_strings.end();
	last_item_itr--;
	for(list<string>::const_iterator l = list_of_strings.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "=======================================================================================" << endl;
}

void print_list_of_floats(const string& message, const list<float>& list_of_floats){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	list<float>::const_iterator last_item_itr = list_of_floats.end();
	last_item_itr--;
	for(list<float>::const_iterator l = list_of_floats.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "=======================================================================================" << endl;
}

void print_list_of_doubles(const string& message, const list<double>& list_of_doubles){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	list<double>::const_iterator last_item_itr = list_of_doubles.end();
	last_item_itr--;
	for(list<double>::const_iterator l = list_of_doubles.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "=======================================================================================" << endl;
}

//==================================SETS================================================

void print_set_of_ints(const string& message, const set<int>& set_of_ints){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	set<int>::const_iterator last_item_itr = set_of_ints.end();
	last_item_itr--;
	for(set<int>::const_iterator l = set_of_ints.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "=======================================================================================" << endl;
}

void print_set_of_chars(const string& message, const set<char>& set_of_chars){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	set<char>::const_iterator last_item_itr = set_of_chars.end();
	last_item_itr--;
	for(set<char>::const_iterator l = set_of_chars.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "=======================================================================================" << endl;
}

void print_set_of_strings(const string& message, const set<string>& set_of_strings){
	cout << "=======================================================================================" << endl;
	cout << message << endl << "[";
	set<string>::const_iterator last_item_itr = set_of_strings.end();
	last_item_itr--;
	for(set<string>::const_iterator l = set_of_strings.begin(); l != last_item_itr; l++){
		cout << *l << ", ";
	}
	cout << *last_item_itr << "]" << endl;
	cout << "=======================================================================================" << endl;
}

//=================================VECTORS OF VECTORS===================================


void print_vector_of_vectors_of_strings(const string& message, const vector<vector<string> >& vector_of_vectors_of_strings){
	cout << "=======================================================================================" << endl;
	cout << message << endl;

	//find maximum length row (maximum number of colunms)
	unsigned int maximum_length_row = 0;
	for(unsigned int r = 0; r < vector_of_vectors_of_strings.size(); r++){
		if(vector_of_vectors_of_strings[r].size() > maximum_length_row){
			maximum_length_row = vector_of_vectors_of_strings[r].size();
		}
	}



	//find the largest string in each column to use as the column width for that column
	vector<unsigned int> maximum_length_per_col(maximum_length_row, 0);
	for(unsigned int r = 0; r < vector_of_vectors_of_strings.size(); r++){
		for(unsigned int c = 0; c < vector_of_vectors_of_strings[r].size(); c++){
			if(vector_of_vectors_of_strings[r][c].size() > maximum_length_per_col[c]){
				maximum_length_per_col[c] = vector_of_vectors_of_strings[r][c].size();
			}
		}
	}

	//determine the length of a table at each column width (for printing the line between)
	vector<unsigned int> table_width_at_column(maximum_length_row, 0);
	table_width_at_column[0] = 4 + maximum_length_per_col[0]; //this is the width of "|  |"
	for(unsigned int t = 1; t < table_width_at_column.size(); t++){
		table_width_at_column[t] = table_width_at_column[t-1] + maximum_length_per_col[t] + 3; //3 because ' ' on either side of the word and 1 for '|'
	}
	
	//print things according to column widths (left alligned and 1 extra spaces for padding between colums)
	for(unsigned int r = 0; r < vector_of_vectors_of_strings.size(); r++){
		//print the line between rows
		if(r != 0 && vector_of_vectors_of_strings[r-1].size() > vector_of_vectors_of_strings[r].size() ){
			string line(table_width_at_column[vector_of_vectors_of_strings[r-1].size()-1], '-');
			std::cout << line << std::endl;
		}
		else{
			string line(table_width_at_column[vector_of_vectors_of_strings[r].size()-1], '-');
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
	string line(table_width_at_column[vector_of_vectors_of_strings[vector_of_vectors_of_strings.size()-1].size()-1], '-');
	std::cout << line << std::endl;

	cout << "=======================================================================================" << endl;
}

int number_of_digits(int number){
	int digits = 0;
	if(number < 0) digits++; // for the '-' sign
	while(number != 0){
		number /= 10;
		digits++;
	}
	return digits;
}

void print_vector_of_vectors_of_ints(const string& message, const vector<vector<int> >& vector_of_vectors_of_ints){
	cout << "=======================================================================================" << endl;
	cout << message << endl;

	//find maximum length row (maximum number of colunms)
	unsigned int maximum_length_row = 0;
	for(unsigned int r = 0; r < vector_of_vectors_of_ints.size(); r++){
		if(vector_of_vectors_of_ints[r].size() > maximum_length_row){
			maximum_length_row = vector_of_vectors_of_ints[r].size();
		}
	}



	//find the largest string in each column to use as the column width for that column
	vector<unsigned int> maximum_length_per_col(maximum_length_row, 0);
	for(unsigned int r = 0; r < vector_of_vectors_of_ints.size(); r++){
		for(unsigned int c = 0; c < vector_of_vectors_of_ints[r].size(); c++){
			if(number_of_digits(vector_of_vectors_of_ints[r][c]) > maximum_length_per_col[c]){
				maximum_length_per_col[c] = number_of_digits(vector_of_vectors_of_ints[r][c]);
			}
		}
	}

	//determine the length of a table at each column width (for printing the line between)
	vector<unsigned int> table_width_at_column(maximum_length_row, 0);
	table_width_at_column[0] = 4 + maximum_length_per_col[0]; //this is the width of "|  |"
	for(unsigned int t = 1; t < table_width_at_column.size(); t++){
		table_width_at_column[t] = table_width_at_column[t-1] + maximum_length_per_col[t] + 3; //3 because ' ' on either side of the word and 1 for '|'
	}
	
	//print things according to column widths (left alligned and 1 extra spaces for padding between colums)
	for(unsigned int r = 0; r < vector_of_vectors_of_ints.size(); r++){
		//print the line between rows
		if(r != 0 && vector_of_vectors_of_ints[r-1].size() > vector_of_vectors_of_ints[r].size() ){
			string line(table_width_at_column[vector_of_vectors_of_ints[r-1].size()-1], '-');
			std::cout << line << std::endl;
		}
		else{
			string line(table_width_at_column[vector_of_vectors_of_ints[r].size()-1], '-');
			std::cout << line << std::endl;
		}
		
		//print the beginning '|' before the line
		std::cout << "| ";
		//prnt the data
		for(unsigned int c = 0; c < vector_of_vectors_of_ints[r].size() -1; c++){
			std::cout << std::left << std::setw (maximum_length_per_col[c]) << std::setfill (' ') << vector_of_vectors_of_ints[r][c] << " | ";
		}
		//the last one in each row is done differently so there isn't a space after each printed line (more efficient than if statement)
		std::cout << std::left << std::setw (maximum_length_per_col[vector_of_vectors_of_ints[r].size() -1]) << std::setfill (' ') << vector_of_vectors_of_ints[r][vector_of_vectors_of_ints[r].size() -1];
		std::cout << " |" << std::endl;

	}
	string line(table_width_at_column[vector_of_vectors_of_ints[vector_of_vectors_of_ints.size()-1].size()-1], '-');
	std::cout << line << std::endl;

	cout << "=======================================================================================" << endl;
}