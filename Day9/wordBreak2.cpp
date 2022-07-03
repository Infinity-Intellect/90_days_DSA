#include <sstream>
#include<iterator>
using namespace std;
void recurse(int index, vector<string>& dictionary, string s,
            vector<string> currentResult, vector<string>& results) {
    if(index == s.length()) {
        stringstream ss;
        copy(currentResult.begin(),
                                  currentResult.end(),
                                  ostream_iterator<string>(ss, " "));
        string resultString = ss.str();
        results.push_back(resultString);
    }
    else {
        for(int i=index;i<s.length();i++) {
            string subString = s.substr(index, i-index+1);
            if(find(dictionary.begin(), dictionary.end(), subString)
              !=dictionary.end()) {
                currentResult.push_back(subString);
                recurse(i+1, dictionary, s, currentResult, results);
                currentResult.pop_back();
            }
        }
    }
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    vector<string> results;
    vector<string> currentResult;
    
    recurse(0, dictionary, s, currentResult, results);
    
    return results;
}
