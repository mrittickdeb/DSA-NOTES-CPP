#include<iostream>
#include<vector>
using namespace std;
void storesubset(string ans,string original,vector<string>& v,bool flag){  
    if(original==""){
       v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(original.length()==1){
        if(flag==true)  storesubset(ans+ch,original.substr(1),v,true);
                        storesubset(ans,original.substr(1),v,true);
                        return;//taki neech ke do conditions na chale
    }
    char dh=original[1];
    if(ch==dh){//duplicate
        if(flag==true) storesubset(ans+ch,original.substr(1),v,true);
                        storesubset(ans,original.substr(1),v,false);
    }
    else{//no duplicate
    if(flag==true) storesubset(ans+ch,original.substr(1),v,true);//H.W DO SAME BY TAKING INDEXINSTEAD OF SUBSTR
    storesubset(ans,original.substr(1),v,true);
}
}
int main(){
    string str="aab";
    vector<string> v;
    storesubset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}