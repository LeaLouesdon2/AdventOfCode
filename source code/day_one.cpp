#include <iostream>
#include <algorithm>
#include <string>

int main(int argc, char** argv) {
    if(argc != 2){
        throw std::invalid_argument( "One argument is expected" );
    }
    std::string s = argv[1];
    int positive_count = std::count(s.begin(), s.end(), '(');
    int negative_count = std::count(s.begin(), s.end(), ')');
    
    if(positive_count + negative_count != s.size()){
        throw std::invalid_argument( "The puzzle must only contain ( and ) characters" );
    }
    std::cout << "Level result : " << positive_count - negative_count << std::endl;
    
}