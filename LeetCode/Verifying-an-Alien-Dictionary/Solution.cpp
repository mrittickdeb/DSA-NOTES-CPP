1class Solution {
2public:
3    bool isAlienSorted(vector<string>& words, string order) {
4
5        vector<int> pos(26);
6
7        for(int i = 0; i < 26; i++)
8            pos[order[i] - 'a'] = i;
9
10        for(int i = 0; i < words.size() - 1; i++)
11        {
12            string s1 = words[i];
13            string s2 = words[i + 1];
14
15            int len = min(s1.size(), s2.size());
16
17            int j = 0;
18
19            while(j < len)
20            {
21                if(s1[j] != s2[j])
22                {
23                    if(pos[s1[j] - 'a'] > pos[s2[j] - 'a'])
24                        return false;
25
26                    break;
27                }
28
29                j++;
30            }
31
32            if(j == len && s1.size() > s2.size())
33                return false;
34        }
35
36        return true;
37    }
38};