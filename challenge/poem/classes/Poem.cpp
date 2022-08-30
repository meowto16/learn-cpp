#include "./Poem.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

Poem::Poem(
    const string &poem_author, 
    const string &poem_name, 
    const vector<string> &poem_text
) {
    author = poem_author;
    name = poem_name;
    text = poem_text;
};

void Poem::print() {
    Poem::printRow("«" + author + "». " + name);
    Poem::printRow();

    for (const string& row : text) {
        Poem::printRow(row);
    }

    Poem::printRow();
};

void Poem::printRow(const string &text) {
    cout << "\t" << text << "\t" << endl;
};