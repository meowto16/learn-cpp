#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;

class Poem {
    string author;
    string name;
    vector<string> text;

    public:
        Poem(
            const string &poem_author,
            const string &poem_name,
            const vector<string> &poem_text
        );
        void print();
    
    private:
        void printRow(const string &text = "");
        void printAuthor();
};
