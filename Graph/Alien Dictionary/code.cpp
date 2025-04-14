bool iscycle(int node, vector<bool>& vis, vector<bool>& dfsvis, vector<vector<int>>& adj) {
    vis[node] = true;
    dfsvis[node] = true;

    for (auto it : adj[node]) {
        if (!vis[it]) {
            if (iscycle(it, vis, dfsvis, adj)) return true;
        } else if (dfsvis[it]) {
            return true;
        }
    }

    dfsvis[node] = false;
    return false;
}

// DFS function for topological sorting
void DFS(int node, stack<int>& st, vector<bool>& vis, vector<vector<int>>& adj) {
    vis[node] = true;
    for (auto it : adj[node]) {
        if (!vis[it]) {
            DFS(it, st, vis, adj);
        }
    }
    st.push(node);
}

// Main function to find the alien dictionary order
string findOrder(vector<string>& words) {
    unordered_map<char, int> char_to_index;
    unordered_map<int, char> index_to_char;
    int index = 0;

    // Step 1: Assign unique indices to all characters
    for (auto& word : words) {
        for (char ch : word) {
            if (char_to_index.find(ch) == char_to_index.end()) {
                char_to_index[ch] = index;
                index_to_char[index] = ch;
                index++;
            }
        }
    }

    int k = index;  // Total unique characters
    vector<vector<int>> adj(k);

    // Step 2: Build graph with prefix check
    for (int i = 0; i < words.size() - 1; i++) {
        string& s1 = words[i];
        string& s2 = words[i + 1];
        int len = min(s1.size(), s2.size());

        bool found = false;
        for (int j = 0; j < len; j++) {
            if (s1[j] != s2[j]) {
                int u = char_to_index[s1[j]];
                int v = char_to_index[s2[j]];
                adj[u].push_back(v);
                found = true;
                break;
            }
        }

        // ❗ Invalid order if s1 is longer and s2 is prefix of s1
        if (!found && s1.size() > s2.size()) {
            return "";  // Invalid lexicographical order
        }
    }

    // Step 3: Cycle detection
    vector<bool> vis(k, false), dfsvis(k, false);
    for (int i = 0; i < k; i++) {
        if (!vis[i]) {
            if (iscycle(i, vis, dfsvis, adj)) return "";
        }
    }

    // Step 4: Topological sort
    stack<int> st;
    vector<bool> vis2(k, false);
    for (int i = 0; i < k; i++) {
        if (!vis2[i]) {
            DFS(i, st, vis2, adj);
        }
    }

    // Step 5: Create result from topological order
    string res = "";
    while (!st.empty()) {
        res += index_to_char[st.top()];
        st.pop();
    }

    return res;
}