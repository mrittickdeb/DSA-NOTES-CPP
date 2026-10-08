    int cnt=0;
    for(auto c:s){
        if(c=='(') cnt++;
        else cnt--;

        if((cnt==1 and c=='(') or (cnt==0 and c==')')) continue;
        else ans.push_back(c);
    }
    return ans;
}