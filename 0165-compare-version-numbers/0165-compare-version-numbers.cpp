class Solution {
public:
    vector<int> splitVersion(const string& version) {
    vector<int> revisions;
    stringstream ss(version);
    string part;
    
    while (getline(ss, part, '.')) {
        revisions.push_back(stoi(part)); 
    }
    
    return revisions;
}

int compareVersion(string version1, string version2) {
    vector<int> v1 = splitVersion(version1);
    vector<int> v2 = splitVersion(version2);

    int n = max(v1.size(), v2.size()); 
    
    for (int i = 0; i < n; i++) {
        int rev1 = (i < v1.size()) ? v1[i] : 0; 
        int rev2 = (i < v2.size()) ? v2[i] : 0;
        
        if (rev1 > rev2) return 1;
        if (rev1 < rev2) return -1;
    }
    
    return 0; 
    }
};