#include<bits/stdc++.h>
#define ll long long int
using namespace std;
unordered_map<string,char>decode;
struct node
{
    char ch;
    ll freq;
    node *left,*right;
};
node* getnode(char _ch, ll _freq, node* _left, node* _right)
{
	node* Node = new node();
	Node->ch = _ch;
	Node->freq = _freq;
	Node->left = _left;
	Node->right = _right;
	return Node;
}
struct comp
{
	bool operator()(node* l, node* r)
	{
		return l->freq > r->freq;
	}
};

void encode(node* root,string str,unordered_map<char,string > &code)
{
    if(root==nullptr)
        return;

    if(!root->left&&!root->right)
    {
        code[root->ch]=str;
        decode[str]=root->ch;
    }
    encode(root->left,str+"0",code);
    encode(root->right,str+"1",code);
}
void huffman_tree(string text)
{

     ll i;
    unordered_map<char,ll>freq;
    unordered_map<char,ll>::iterator it;
    for(i=0; i<text.length(); i++)
        freq[text[i]]++;
    priority_queue<node*,vector<node*>,comp>pq;
    for(it=freq.begin(); it!=freq.end(); it++)
        pq.push(getnode(it->first,it->second,nullptr,nullptr));
    while(pq.size()!=1)
    {
        node *left=pq.top();
        pq.pop();
        node *right=pq.top();
        pq.pop();
        ll sum=left->freq+right->freq;
        pq.push(getnode('\0',sum,left,right));
    }
    node* root=pq.top();
    unordered_map<char,string>code;
    unordered_map<char,string>::iterator it1;
    encode(root,"",code);
      cout<<"code for character: "<<'\n';
    for(it1=code.begin(); it1!=code.end(); it1++)
        cout<<it1->first<<' '<<it1->second<<'\n';

    cout<<"Orginal string is: "<<'\n'<<text<<'\n';
    cout<<"Encoded string is: "<<'\n';
    string str="";
    for(i=0; i<text.length(); i++)
    {
        str+=code[text[i]];
    }
    cout<<str<<'\n';
   string temp="";
    cout<<"Decoded string is: "<<'\n';
    for(i=0; i<str.length(); i++)
    {
        if(decode[temp]!=0)
        {
            cout<<decode[temp];
            temp=str[i];
        }
        else
            temp+=str[i];
    }
    cout<<decode[temp];
}
int main()
{
    string text;
    cin>>text;
    huffman_tree(text);
return 0;
}
