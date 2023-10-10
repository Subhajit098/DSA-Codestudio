#include <iostream>

#include <vector>

#include <unordered_map>

using namespace std;

vector<string> matchSpecificPattern(vector<string> words, int n, string pattern)
{

    vector<string> ans;

    unordered_map<char, char> patternMap;

    unordered_map<char, bool> usedChars;

    for (int i = 0; i < n; i++)
    {

        string word = words[i];

        if (word.length() != pattern.length())
        {

            continue;
        }

        bool isValid = true;

        for (int j = 0; j < word.length(); j++)
        {

            char p = pattern[j];

            char w = word[j];

            if (patternMap.find(p) != patternMap.end())
            {

                if (patternMap[p] != w)
                {

                    isValid = false;

                    break;
                }
            }
            else
            {

                if (usedChars.find(w) != usedChars.end())
                {

                    isValid = false;

                    break;
                }

                patternMap[p] = w;

                usedChars[w] = true;
            }
        }

        if (isValid)
        {

            ans.push_back(word);
        }

        patternMap.clear();

        usedChars.clear();
    }
    return ans;
}